// 函数: sub_540160
// 地址: 0x540160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIMessageWindowView::VTable
    ** eax = sub_4f4c00(data_7fcba4 + 0x124, arg1)

if (eax == 0)
    eax.b = 0
    return eax

void* esi = *(sub_4efcc0(eax[0x28]) + 0x44)
sub_555e00(esi, 0x1a, 1)
void* eax_3 = *(*(esi + 0x80) + 0x60)
void* ecx_4 = *(eax_3 + 0x68)
*(eax_3 + 0x138) = 1

if (ecx_4 != 0)
    sub_4da910(ecx_4, *(ecx_4 + 0xc), *(ecx_4 + 0x10))

eax_3.b = 1
return eax_3
