// 函数: sub_6b14e0
// 地址: 0x6b14e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (data_75dea4 != 0)
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
        return __CIacos_pentium4(arg3) __tailcall

int32_t edx
return sub_6b1538(__checkTOS_withFB((fconvert.d(arg3)).d), arg2, arg3, edx)
