
#ifndef SBI_H
#define SBI_H


#define SBI_SUCCESS                  0
#define SBI_ERR_FAILED              -1
#define SBI_ERR_NOT_SUPPORTED       -2
#define SBI_ERR_INVALID_PARAM       -3
#define SBI_ERR_DENIED              -4
#define SBI_ERR_INVALID_ADDRESS     -5
#define SBI_ERR_ALREADY_AVAILABLE   -6
#define SBI_ERR_ALREADY_STARTED     -7
#define SBI_ERR_ALREADY_STOPPED     -8
#define SBI_ERR_NO_SHMEM            -9
#define SBI_ERR_INVALID_STATE       -10
#define SBI_ERR_BAD_RANGE           -11
#define SBI_ERR_TIMEOUT             -12
#define SBI_ERR_IO                  -13
#define SBI_ERR_DENIED_LOCKED       -14


struct sbiret {
    long error;
    long value;
};

struct sbiret sbi_call( long eid,long fid,
                        long arg0,long arg1,
                        long arg2,long arg3,
                        long arg4,long arg5);


