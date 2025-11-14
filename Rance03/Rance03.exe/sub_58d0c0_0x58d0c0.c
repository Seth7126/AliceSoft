// 函数: sub_58d0c0
// 地址: 0x58d0c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

struct IRenderShadowParam::sealengine::CRenderShadowParam::VTable** esi = arg4
int32_t* edi = arg3 + 0x44

do
    if (esi != 0)
        *esi = &sealengine::CRenderShadowParam::`vftable'{for `IRenderShadowParam'}
        *(esi + 4) = *(edi - 0x40)
        *(esi + 0x14) = *(edi - 0x30)
        *(esi + 0x24) = *(edi - 0x20)
        *(esi + 0x34) = *(edi - 0x10)
        esi[0x11] = *edi
        *(esi + 0x48) = *(edi + 4)
        esi[0x14] = edi[3]
        esi[0x15] = edi[4]
    
    edi = &edi[0x16]
    esi = &esi[0x16]
while (&edi[-0x11] != arg2)

return esi
