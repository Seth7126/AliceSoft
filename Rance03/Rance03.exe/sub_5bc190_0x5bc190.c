// 函数: sub_5bc190
// 地址: 0x5bc190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 == arg2)
    return 

void* esi_1 = arg1 + 0x18

do
    int32_t eax_1 = *(esi_1 + 8)
    
    if (eax_1 != 0)
        j__free(eax_1)
        *(esi_1 + 8) = 0
        *(esi_1 + 0xc) = 0
        *(esi_1 + 0x10) = 0
    
    if (*esi_1 u>= 0x10)
        j__free(*(esi_1 - 0x14))
    
    *esi_1 = 0xf
    *(esi_1 - 4) = 0
    *(esi_1 - 0x14) = 0
    esi_1 += 0x30
while (esi_1 - 0x18 != arg2)
