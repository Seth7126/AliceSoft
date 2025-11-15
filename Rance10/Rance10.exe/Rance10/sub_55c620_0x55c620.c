// 函数: sub_55c620
// 地址: 0x55c620
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg1[1] = 1
*arg1 = &
    partsengine::CTextSprite::`vftable'{for `common::SuicideRefCounter<class partsengine::CSprite>'}
arg1[2] = &partsengine::CTextDecoration::`vftable'
sub_6437f0(&arg1[3])
arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x12] = &partsengine::CTextDecoration::`vftable'
sub_6437f0(&arg1[0x13])
__builtin_memset(&arg1[0x20], 0, 0x28)
arg1[0x2b] = &common::CPoint::`vftable'
arg1[0x2c] = 0
arg1[0x2d] = 0
arg1[0x2e] = &common::CSize::`vftable'
arg1[0x2f] = 0
arg1[0x30] = 0
arg1[0x2a] = &common::CRect::`vftable'
arg1[0x31].b = 0
arg1[0x32] = 0
arg1[0x33] = 0
arg1[0x34] = 7
arg1[0x35].b = 1
arg1[0x3b] = 0xf
arg1[0x3a] = 0
arg1[0x36].b = 0
arg1[0x3c].w = 0x100
*(arg1 + 0xf2) = 0
int128_t xmm0 = *(arg1 + 0x58)
int128_t xmm3 = *(arg1 + 0x70)
int32_t xmm1 = arg1[0x1a]
int32_t xmm2 = arg1[0x1b]
arg1[0x14] = arg1[0x14]
arg1[0x15] = 0xa
*(arg1 + 0x58) = xmm0
arg1[0x1a] = xmm1
arg1[0x1b] = xmm2
*(arg1 + 0x70) = xmm3
return arg1
