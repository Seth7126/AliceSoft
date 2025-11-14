// 函数: sub_5f2dd0
// 地址: 0x5f2dd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** esi = arg1
void** edi = esi

if (*(esi + 0xd) != 0)
    return 

do
    sub_5f2dd0(edi[2])
    edi = *edi
    esi[4] = &chipmunk::CTextSpriteCacheProperty::`vftable'
    
    if (esi[0x11] u>= 0x10)
        j__free(esi[0xc])
    
    esi[0x11] = 0xf
    esi[0x10] = 0
    esi[0xc].b = 0
    esi[5] = &chipmunk::CTextSpriteProperty::`vftable'
    j__free(esi)
    esi = edi
while (*(edi + 0xd) == 0)
