#include "sbi.h"

struct sbiret sbi_call_cold_reboot(void) {

    return sbi_call( SBI_EID_RESET,SBI_FID_RESET,
                     SBI_SRST_COLD_REBOOT,
0,0,0,0,0);
}


