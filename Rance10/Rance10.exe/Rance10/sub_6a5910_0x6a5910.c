// 函数: sub_6a5910
// 地址: 0x6a5910
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t ecx = *(arg2 + 0x4a)

if (ecx s< 0)
    return 0

if (arg4 u> 3)
    sub_6a5720(arg1, arg2, arg3, "sRGB", arg4, "invalid sRGB rendering intent")
    return 0

if ((ecx.b & 4) != 0)
    arg1 = zx.d(arg2[0x12].w)
    
    if (arg1 != arg4)
        sub_6a5720(arg1, arg2, arg3, "sRGB", arg4, "inconsistent rendering intents")
        return 0

if ((ecx.b & 0x20) != 0)
    sub_6a75b0(arg3, "duplicate sRGB information ignored")
    return 0

if ((ecx.b & 2) != 0)
    arg1 = sub_6a5380(arg1, &arg2[1], &data_773df8, 0x64)
    
    if (arg1 == 0)
        if ((*(arg3 + 0x74) & 0x8000) == 0)
            if ((*(arg3 + 0x78) & &__dos_header) == 0)
                sub_6a7500(arg3, "cHRM chunk does not match sRGB")
                noreturn
            
            arg1 = sub_6a7530(arg3, "cHRM chunk does not match sRGB")
        else
            arg1 = sub_6a77d0(arg3, "cHRM chunk does not match sRGB")

sub_6a4b60(arg1, arg2, arg3, 0xb18f, 2)
arg2[0x12].w = arg4.w
*(arg2 + 4) = data_773df8
*arg2 = 0xb18f
*(arg2 + 0x14) = data_773e08
*(arg2 + 0x24) = data_773934
*(arg2 + 0x34) = data_773944
arg2[0x11] = 0x1734d
*(arg2 + 0x4a) |= 0xe7
return 1
