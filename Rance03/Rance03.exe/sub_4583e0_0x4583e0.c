// 函数: sub_4583e0
// 地址: 0x4583e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** esi = arg1
void** edi = esi

if (*(esi + 0xd) != 0)
    return 

do
    sub_4583e0(edi[2])
    int32_t eax_1 = esi[0xa]
    edi = *edi
    
    if (eax_1 != 0)
        j__free(eax_1)
        esi[0xa] = 0
        esi[0xb] = 0
        esi[0xc] = 0
    
    if (esi[9] u>= 0x10)
        j__free(esi[4])
    
    esi[9] = 0xf
    esi[8] = 0
    esi[4].b = 0
    j__free(esi)
    esi = edi
while (*(edi + 0xd) == 0)
