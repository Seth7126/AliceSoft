// 函数: sub_466120
// 地址: 0x466120
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

struct exfile::CNumeral::VTable** esi = arg4
int32_t* edi = arg3 + 0xc

do
    if (esi != 0)
        *esi = &exfile::CNumeral::`vftable'
        esi[2] = edi[-1]
        esi[3] = *edi
        esi[1] = edi[-2]
    
    edi = &edi[4]
    esi = &esi[4]
while (&edi[-3] != arg2)

return esi
