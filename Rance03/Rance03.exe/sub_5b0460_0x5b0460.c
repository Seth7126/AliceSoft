// 函数: sub_5b0460
// 地址: 0x5b0460
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int64_t xmm1 = *(arg1 + 0xc)
int32_t edx = arg1[5]
int32_t xmm2 = arg1[6]
int32_t xmm3 = arg1[7]
int32_t esi = arg1[1]
int32_t ecx = arg1[8]
int32_t edi = *arg1
*arg1 = *arg2
arg1[1] = arg2[1]
*(arg1 + 0xc) = *(arg2 + 0xc)
arg1[5] = arg2[5]
arg1[6] = arg2[6]
arg1[7] = arg2[7]
int32_t result = arg2[8]
arg1[8] = result
*arg2 = edi
arg2[1] = esi
*(arg2 + 0xc) = xmm1
arg2[5] = edx
arg2[6] = xmm2
arg2[7] = xmm3
arg2[8] = ecx
return result
