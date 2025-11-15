// 函数: __controlfp_s
// 地址: 0x71269b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx_1 = arg3 & 0xfff7ffff
int32_t mxcsr
int16_t x87control

if ((arg2 & ecx_1 & 0xfcf0fce0) == 0)
    if (arg1 == 0)
        __control87(mxcsr, x87control, arg2, ecx_1)
    else
        *arg1 = __control87(mxcsr, x87control, arg2, ecx_1)
    
    return 0

if (arg1 != 0)
    *arg1 = __control87(mxcsr, x87control, 0, 0)

*__errno() = 0x16
__invalid_parameter_noinfo()
return 0x16
