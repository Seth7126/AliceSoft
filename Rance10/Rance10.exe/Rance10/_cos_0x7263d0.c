// 函数: _cos
// 地址: 0x7263d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (data_7fd618 != 0)
    int32_t eax_2 = arg1 & 0x7f80
    bool cond:0_1 = eax_2 != 0x1f80
    
    if (eax_2 == 0x1f80)
        int16_t x87status_1
        int16_t temp0_1
        temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
        eax_2.w = temp0_1
        eax_2.w &= 0x7f
        cond:0_1 = eax_2.w != 0x7f
    
    if (not(cond:0_1))
        return sub_726778(arg3) __tailcall

void* edx_1 = &arg3
int32_t eax_4
int32_t ecx
long double st0
st0, eax_4 = __fload_withFB(ecx, edx_1)
return sub_726468(eax_4, arg2, st0, edx_1) __tailcall
