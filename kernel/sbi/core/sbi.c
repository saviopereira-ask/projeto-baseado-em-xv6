#include "sbi.h"

struct sbiret sbi_call( long eid,long fid,
                        long arg0,long arg1,
                        long arg2,long arg3,
                        long arg4,long arg5)
  {    
       register long a0 asm("a0")= arg0;
       register long a1 asm("a1")= arg1;
       register long a2 asm("a2")= arg2;
       register long a3 asm("a3")= arg3;
       register long a4 asm("a4")= arg4;
       register long a5 asm("a5")= arg5;
       register long a6 asm("a6")= fid;
       register long a7 asm("a7")= eid;
       
       asm volatile(
       "ecall"
       :"+r"(a0),"+r"(a1)
      :"r"(a2),"r"(a3),"r"(a4),"r"(a5),
       "r"(a6),"r"(a7)
       : "memory");
       struct sbiret ret;
       ret.error= a0;
       ret.value= a1;
       return ret;
       }
       
       
