// 函数: sub_5610a0
// 地址: 0x5610a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 == arg2)
    return arg4

struct partsengine::CTextDecoration::VTable** edx = arg4
int32_t* esi = arg3 + 0xc
int32_t* edi = &edx[3]

do
    if (edx != 0)
        *edx = &partsengine::CTextDecoration::`vftable'
        edi[-2] = &textsurface::CTextSurfaceProperty::`vftable'
        edi[-1] = esi[-1]
        *edi = *esi
        *(edi + 4) = *(esi + 4)
        edi[5] = esi[5]
        edi[6] = esi[6]
        *(edi + 0x1c) = *(esi + 0x1c)
        edi[0xb] = esi[0xb]
        edi[0xc] = esi[0xc]
    
    esi = &esi[0x10]
    edx = &edx[0x10]
    edi = &edi[0x10]
while (&esi[-3] != arg2)

return edx
