// 函数: sub_628500
// 地址: 0x628500
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg3
uint32_t ebx = zx.d(*(arg2 + 0x4a))

if ((ebx & 0x8000) != 0)
    return 0

if (arg6 s< 2 && (ebx.b & 2) != 0)
    if (sub_628430(arg1, arg2 + 4, arg4, 0x64) == 0)
        *(arg2 + 0x4a) = ebx.w | 0x8000
        sub_62a5c0(arg3, "inconsistent chromaticities")
        return 0
    
    if (arg6 == 0)
        return arg6 + 1

int16_t ebx_2 = ebx.w | 2
*(arg2 + 4) = *arg4
int128_t xmm0_1 = *(arg4 + 0x10)
*(arg2 + 0x4a) = ebx_2
*(arg2 + 0x14) = xmm0_1
*(arg2 + 0x24) = *arg5
int32_t eax_5 = arg5[2].d
*(arg2 + 0x34) = arg5[1]
*(arg2 + 0x44) = eax_5

if (sub_628430(eax_5, &data_6f14c0, arg4, 0x3e8) == 0)
    *(arg2 + 0x4a) = ebx_2 & 0xffbf
    return 2

*(arg2 + 0x4a) = ebx_2 | 0x40
return 2
