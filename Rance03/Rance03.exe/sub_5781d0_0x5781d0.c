// 函数: sub_5781d0
// 地址: 0x5781d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* edx = *(arg1 + 4)

if (&edx[4] u> *(arg1 + 8))
    int32_t eax
    eax.b = 0
    return eax

uint32_t ecx_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(arg1 + 4) = &edx[4]
*arg2 = ecx_6
char* ecx_7 = *(arg1 + 4)

if (&ecx_7[4] u> *(arg1 + 8))
    uint32_t eax_3
    eax_3.b = 0
    return eax_3

uint32_t edx_7 = ((zx.d(ecx_7[3]) << 8 | zx.d(ecx_7[2])) << 8 | zx.d(ecx_7[1])) << 8 | zx.d(*ecx_7)
*(arg1 + 4) = &ecx_7[4]
arg2[1] = edx_7
return sub_468bc0(arg1, &arg2[2]) != 0
