// 函数: sub_529890
// 地址: 0x529890
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

struct sealengine::CSprite::VTable** esi = arg4
int32_t* edi = arg3 + 8

do
    if (esi != 0)
        *esi = &sealengine::CSprite::`vftable'
        esi[1] = edi[-1]
        esi[2] = *edi
        esi[3] = edi[1]
        esi[4] = edi[2]
        esi[5] = edi[3]
        esi[6].b = edi[4].b
        esi[7] = edi[5]
        esi[8] = edi[6]
        esi[9] = edi[7]
        esi[0xa].b = edi[8].b
    
    edi = &edi[0xb]
    esi = &esi[0xb]
while (&edi[-2] != arg2)

return esi
