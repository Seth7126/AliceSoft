// 函数: sub_59b2c0
// 地址: 0x59b2c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

struct sealengine::CSphereVolume::VTable** esi = arg4
int32_t* edi = arg3 + 0x10

do
    if (esi != 0)
        *esi = &sealengine::CSphereVolume::`vftable'
        *(esi + 4) = *(edi - 0xc)
        esi[3] = edi[-1]
        esi[4] = *edi
    
    edi = &edi[5]
    esi = &esi[5]
while (&edi[-4] != arg2)

return esi
