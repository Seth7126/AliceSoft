// 函数: sub_4ff650
// 地址: 0x4ff650
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &partsengine::CConstructionSprite::`vftable'{for `partsengine::CSprite'}
arg1[0xe] = &partsengine::CRect::`vftable'
arg1[0xa] = &partsengine::CConstructionProcessList::`vftable'
int32_t edi = arg1[0xc]

for (int32_t* i = arg1[0xb]; i != edi; i = &i[0x30])
    (**i)(0)

arg1[0xc] = arg1[0xb]
sub_4813f0(&arg1[0xb])
return sub_505790(&arg1[3]) __tailcall
