// 函数: sub_60d670
// 地址: 0x60d670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[1])
    (*(**i + 4))()

*(arg1 + 8) = *(arg1 + 4)
void** ebx = *(*(arg1 + 0x10) + 4)
void** esi = ebx

if (*(ebx + 0xd) == 0)
    do
        sub_420090(esi[2])
        esi = *esi
        j__free(ebx)
        ebx = esi
    while (*(esi + 0xd) == 0)

void* eax_4 = *(arg1 + 0x10)
*(eax_4 + 4) = eax_4
int32_t* eax_5 = *(arg1 + 0x10)
*eax_5 = eax_5
void* result = *(arg1 + 0x10)
*(result + 8) = result
*(arg1 + 0x14) = 0
return result
