// 函数: sub_6a5450
// 地址: 0x6a5450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t ebx = *(arg2 + 0x4a)

if (ebx s>= 0)
    if (arg6 s>= 2 || (ebx.b & 2) == 0)
    label_6a54c4:
        int16_t ebx_2 = ebx | 2
        *(arg2 + 4) = *arg4
        int128_t xmm0_1 = *(arg4 + 0x10)
        *(arg2 + 0x4a) = ebx_2
        *(arg2 + 0x14) = xmm0_1
        *(arg2 + 0x24) = *arg5
        int32_t eax_4 = arg5[2].d
        *(arg2 + 0x34) = arg5[1]
        *(arg2 + 0x44) = eax_4
        
        if (sub_6a5380(eax_4, &data_773df8, arg4, 0x3e8) == 0)
            *(arg2 + 0x4a) = ebx_2 & 0xffbf
            return 2
        
        *(arg2 + 0x4a) = ebx_2 | 0x40
        return 2
    
    if (sub_6a5380(arg1, arg2 + 4, arg4, 0x64) != 0)
        if (arg6 == 0)
            return arg6 + 1
        
        goto label_6a54c4
    
    *(arg2 + 0x4a) = ebx | 0x8000
    sub_6a75b0(arg3, "inconsistent chromaticities")

return 0
