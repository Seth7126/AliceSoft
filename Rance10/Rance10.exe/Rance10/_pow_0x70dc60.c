// 函数: _pow
// 地址: 0x70dc60
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
    
    int32_t edi
    
    if (not(cond:0_1))
        return __pow_pentium4(edi) __tailcall

void arg_c
int32_t eax_4
int32_t ecx
long double st0_1
st0_1, eax_4 = __fload_withFB(ecx, &arg_c)
int16_t x87tag
return sub_70dcfd(eax_4, arg2, x87tag, st0_1) __tailcall
