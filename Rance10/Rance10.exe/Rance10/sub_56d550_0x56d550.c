// 函数: sub_56d550
// 地址: 0x56d550
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 == arg2)
    return arg4

struct common::CRect::VTable** edx = arg4
int32_t* edi = arg3 + 0xc
int32_t* esi = &edx[3]

do
    if (edx != 0)
        *edx = &common::CRect::`vftable'
        esi[-2] = &common::CPoint::`vftable'
        esi[-1] = edi[-1]
        *esi = *edi
        esi[1] = &common::CSize::`vftable'
        esi[2] = edi[2]
        esi[3] = edi[3]
    
    edi = &edi[7]
    edx = &edx[7]
    esi = &esi[7]
while (&edi[-3] != arg2)

return edx
