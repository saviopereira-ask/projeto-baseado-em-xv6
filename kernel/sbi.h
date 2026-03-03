struct sbiret {
    long error;
    long value;
};

struct sbiret sbi_call( long eid,long fid,
                        long arg0,long arg1,
                        long arg2,long arg3,
                        long arg4,long arg5);


