// 函数: sub_569cb0
// 地址: 0x569cb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

int32_t* edx = arg4
int32_t* esi = arg3 + 0x10
int32_t* edi = &edx[4]

do
    if (edx != 0)
        *edx = esi[-4]
        edi[-3] = esi[-3]
        edi[-2] = &sealengine::CEmitterRotate::`vftable'
        edi[-1] = esi[-1]
        *edi = *esi
        edi[1] = esi[1]
        edi[2] = esi[2]
    
    esi = &esi[7]
    edx = &edx[7]
    edi = &edi[7]
while (&esi[-4] != arg2)

return edx
