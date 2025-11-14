// 函数: sub_6978a0
// 地址: 0x6978a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = *arg1

if (esi == 0)
    return 

int32_t eax_1 = *(esi + 4)

if (eax_1 != 0)
    j__free(eax_1)
    *(esi + 4) = 0
    *(esi + 8) = 0
    *(esi + 0xc) = 0

j__free(esi)
