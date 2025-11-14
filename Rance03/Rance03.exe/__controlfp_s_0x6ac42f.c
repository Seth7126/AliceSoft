// 函数: __controlfp_s
// 地址: 0x6ac42f
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** ecx_1 = arg3 & 0xfff7ffff
int32_t mxcsr
int16_t x87control

if ((arg2 & ecx_1 & 0xfcf0fce0) == 0)
    if (arg1 == 0)
        __control87(mxcsr, x87control, arg2, ecx_1)
    else
        *arg1 = __control87(mxcsr, x87control, arg2, ecx_1)
    
    return 0

if (arg1 != 0)
    *arg1 = __control87(mxcsr, x87control, 0, nullptr)

*__errno() = 0x16
__invalid_parameter_noinfo()
return 0x16
