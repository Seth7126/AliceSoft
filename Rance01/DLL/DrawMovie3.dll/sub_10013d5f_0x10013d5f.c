// 函数: sub_10013d5f
// 地址: 0x10013d5f
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t eax_1 = arg3 & 0xfff7ffff
int32_t mxcsr
int16_t x87control

if ((arg2 & eax_1 & 0xfcf0fce0) == 0)
    if (arg1 == 0)
        sub_100159a0(mxcsr, x87control, arg2, eax_1)
    else
        *arg1 = sub_100159a0(mxcsr, x87control, arg2, eax_1)
    
    return 0

int32_t edi
int32_t var_c = edi

if (arg1 != 0)
    *arg1 = sub_100159a0(mxcsr, x87control, 0, 0)

*__errno() = 0x16
sub_100020e4(0, 0, 0, 0, 0)
return 0x16
