// 函数: sub_569c60
// 地址: 0x569c60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

int32_t* esi = arg4
int32_t* edi = arg3 + 0xc

do
    if (esi != 0)
        *esi = edi[-3]
        esi[1] = edi[-2]
        esi[2] = &sealengine::CEmitterSize::`vftable'
        esi[3] = *edi
        esi[4] = edi[1]
    
    edi = &edi[5]
    esi = &esi[5]
while (&edi[-3] != arg2)

return esi
