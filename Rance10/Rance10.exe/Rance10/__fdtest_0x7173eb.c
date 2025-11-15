// 函数: __fdtest
// 地址: 0x7173eb
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t eax = zx.d(arg1[1])
int16_t edx_1 = eax.w & 0x7f80

if (edx_1 == 0x7f80)
    if ((eax.b & 0x7f) == 0 && *arg1 == 0)
        return 1
    
    return 2

if ((eax & 0xffff7fff) == 0 && *arg1 == 0)
    return 0

int32_t eax_4
eax_4.b = edx_1 != 0
return eax_4 - 2
