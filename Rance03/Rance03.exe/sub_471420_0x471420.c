// 函数: sub_471420
// 地址: 0x471420
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** esi = arg1
void** edi = esi

if (*(esi + 0xd) != 0)
    return 

do
    sub_471420(edi[2])
    edi = *edi
    esi[5] = &common::CStringWrapper::`vftable'{for `IString'}
    
    if (esi[0xb] u>= 0x10)
        j__free(esi[6])
    
    esi[0xb] = 0xf
    esi[0xa] = 0
    esi[6].b = 0
    j__free(esi)
    esi = edi
while (*(edi + 0xd) == 0)
