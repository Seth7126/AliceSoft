// 函数: sub_418280
// 地址: 0x418280
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = *(arg2 + 8)
*(arg2 + 8) = *esi
void* eax_1 = *esi

if (*(eax_1 + 0xd) == 0)
    *(eax_1 + 4) = arg2

esi[1] = *(arg2 + 4)
void* eax_3 = *arg1

if (arg2 == *(eax_3 + 4))
    *(eax_3 + 4) = esi
    *esi = arg2
    *(arg2 + 4) = esi
    return eax_3

int32_t** eax_4 = *(arg2 + 4)

if (arg2 != *eax_4)
    eax_4[2] = esi
    *esi = arg2
    *(arg2 + 4) = esi
    return eax_4

*eax_4 = esi
*esi = arg2
*(arg2 + 4) = esi
return eax_4
