// 函数: sub_418220
// 地址: 0x418220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** esi = arg1
void** edi = esi

if (*(esi + 0xd) != 0)
    return 

do
    sub_418220(edi[2])
    edi = *edi
    
    if (esi[9] u>= 0x10)
        j__free(esi[4])
    
    esi[9] = 0xf
    esi[8] = 0
    esi[4].b = 0
    j__free(esi)
    esi = edi
while (*(edi + 0xd) == 0)
