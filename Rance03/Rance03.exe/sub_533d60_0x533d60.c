// 函数: sub_533d60
// 地址: 0x533d60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = arg3

if (edi == arg2)
    return arg4

struct sealengine::CLine::VTable** esi = arg4

do
    if (esi != 0)
        int32_t (__fastcall* var_10_1)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
        *esi = &sealengine::CLine::`vftable'
        sub_69b6c8(&esi[1], edi + 4, 0x14, 2, sub_533d10)
    
    edi += 0x2c
    esi = &esi[0xb]
while (edi != arg2)

return esi
