// 函数: sub_569bf0
// 地址: 0x569bf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

int32_t* edx = arg4
int32_t* esi = arg3 + 0x18
int32_t* edi = &edx[6]

do
    if (edx != 0)
        *edx = esi[-6]
        edi[-5] = esi[-5]
        edi[-4] = &sealengine::CEmitterPos::`vftable'
        *(edi - 0xc) = *(esi - 0xc)
        edi[-1] = esi[-1]
        *edi = *esi
        edi[1] = esi[1]
        edi[2] = esi[2]
    
    esi = &esi[9]
    edx = &edx[9]
    edi = &edi[9]
while (&esi[-6] != arg2)

return edx
