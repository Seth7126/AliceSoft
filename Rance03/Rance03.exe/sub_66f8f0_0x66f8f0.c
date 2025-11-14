// 函数: sub_66f8f0
// 地址: 0x66f8f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = *(arg1 + 0x10)
int128_t* edx = *(eax + 4)

if (edx u< *(eax + 8))
    *edx = *arg2
    edx[1] = arg2[1]
    edx[2].q = arg2[2].q
    void* eax_2 = *(arg1 + 0x10)
    *(eax_2 + 4) += 0x28
    return arg1

if (edx != 0)
    *edx = *arg2
    edx[1] = arg2[1]
    edx[2].q = arg2[2].q

void* ecx = *(arg1 + 0x10)
*(ecx + 4) += 0x28
*(*(arg1 + 0x10) + 8) = *(ecx + 4)
return arg1
