// 函数: sub_450ae0
// 地址: 0x450ae0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** esi = arg1
void** edi = esi

if (*(esi + 0xd) != 0)
    return 

do
    sub_450ae0(edi[2])
    edi = *edi
    esi[0xa] = &commonsystemdata::CProperty::`vftable'
    
    if (esi[0x13] u>= 0x10)
        j__free(esi[0xe])
    
    esi[0x13] = 0xf
    esi[0x12] = 0
    esi[0xe].b = 0
    
    if (esi[9] u>= 0x10)
        j__free(esi[4])
    
    esi[9] = 0xf
    esi[8] = 0
    esi[4].b = 0
    j__free(esi)
    esi = edi
while (*(edi + 0xd) == 0)
