// 函数: sub_70dca0
// 地址: 0x70dca0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (data_7fd618 != 0)
    int32_t eax_2 = arg1 & 0x7f80
    bool cond:0_1 = eax_2 != 0x1f80
    
    if (eax_2 == 0x1f80)
        int16_t x87status_1
        int16_t temp0_1
        temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
        int48_t var_c
        var_c:4.w = temp0_1
        eax_2.w = var_c:4.w
        eax_2.w &= 0x7f
        cond:0_1 = eax_2.w != 0x7f
    
    if (not(cond:0_1))
        return __CIpow_pentium4(arg3, arg4) __tailcall

int32_t result
int32_t ecx
int32_t edx
int16_t x87tag
int80_t st0_1
st0_1, result = sub_70dcfd(fconvert.d(arg3):4.d, arg2, x87tag, arg3, edx, ecx, (fconvert.d(arg4)).d)
return result
