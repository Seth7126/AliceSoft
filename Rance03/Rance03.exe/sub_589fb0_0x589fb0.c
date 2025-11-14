// 函数: sub_589fb0
// 地址: 0x589fb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* edx = *(arg1 + 4)

if (&edx[4] u> *(arg1 + 8))
    int32_t eax
    eax.b = 0
    return eax

uint32_t eax_3 = zx.d(*edx)
uint32_t ecx_5 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8
*(arg1 + 4) = &edx[4]
*arg2 = ecx_5 | eax_3
char* edx_1 = *(arg1 + 4)

if (&edx_1[4] u<= *(arg1 + 8))
    uint32_t ecx_13 =
        ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
    *(arg1 + 4) = &edx_1[4]
    arg2[1] = ecx_13
    
    if (sub_468bc0(arg1, &arg2[2]).b != 0)
        return sub_468bc0(arg1, &arg2[3]) != 0

eax_3.b = 0
return eax_3
