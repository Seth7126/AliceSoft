// 函数: __setjmp3
// 地址: 0x6b1300
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg4 = arg1
int32_t entry_ebx
arg4[1] = entry_ebx
arg4[2] = arg3
arg4[3] = arg2
arg4[4] = &__return_addr
arg4[5] = __return_addr
__builtin_strncpy(&arg4[8], "02CV", 8)
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
arg4[6] = ExceptionList

if (ExceptionList == 0xffffffff)
    arg4[7] = 0xffffffff
else if (arg5 == 0)
    arg4[7] = ExceptionList->__offset(0xc).d
else
    arg4[9] = arg6
    
    if (arg5 != 1)
        arg4[7] = arg7
        int32_t ecx_4 = arg5 - 2
        
        if (arg5 != 2)
            int32_t var_4_1 = arg2
            int32_t var_8_1 = arg3
            
            if (ecx_4 u> 6)
                ecx_4 = 6
            
            void arg_14
            __builtin_memcpy(&arg4[0xa], &arg_14, ecx_4 << 2)
    else
        arg4[7] = arg6->__offset(0xc).d

return 0
