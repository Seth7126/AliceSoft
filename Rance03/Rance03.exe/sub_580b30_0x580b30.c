// 函数: sub_580b30
// 地址: 0x580b30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

struct sealengine::CPolyFace::VTable** esi = arg4
char* edi = arg3 + 0xb8

do
    if (esi != 0)
        int32_t (__fastcall* var_10_1)(struct sealengine::CPolyVertex::VTable** arg1) = sub_5855a0
        *esi = &sealengine::CPolyFace::`vftable'
        sub_69b6c8(&esi[1], &edi[0xffffff4c], 0x3c, 3, sub_5800a0)
        esi[0x2e].b = *edi
    
    edi = &edi[0xbc]
    esi = &esi[0x2f]
while (&edi[0xffffff48] != arg2)

return esi
