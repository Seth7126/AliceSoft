// 函数: sub_4fbe60
// 地址: 0x4fbe60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &partsengine::CCGDetectionSprite::`vftable'{for `partsengine::CSprite'}
arg1[0xd] = &partsengine::CRect::`vftable'
int32_t result = arg1[8]

if (result != 0)
    result = j__free(result)
    arg1[8] = 0
    arg1[9] = 0
    arg1[0xa] = 0

if (arg1[7] u>= 0x10)
    result = j__free(arg1[2])

arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
return result
