// 函数: sub_4ebc20
// 地址: 0x4ebc20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg3[1]

if (eax == 0xd)
    void* ecx = *(arg1 + 0xac)
    
    if (*(ecx + 0xaa) != 0 && *(ecx + 0xab) != 0)
        int32_t esi = sub_4ef320(ecx)[0x10]
        struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIListBoxView::VTable
            ** eax_2 = sub_4ef320(*(arg1 + 0xac))
        int32_t var_1c = esi
        eax_2[0x66].b = 1
        sub_4ffbc0(&eax_2[0x31])
        int32_t var_4 = eax_2[0x60]
        eax_2[0x10] = esi
        struct partsengine::IEventArgs::partsengine::SSelectedEventArgs::VTable* const var_8 =
            &partsengine::SSelectedEventArgs::`vftable'{for `partsengine::IEventArgs'}
        sub_4cbd50(&eax_2[3], &var_8, 0)
        return sub_4cbd50(arg1 + 0xc, arg3, arg2)

if (eax == 0x1b)
    *(*(arg1 + 0xac) + 0xaa) = 0

return sub_4cbd50(arg1 + 0xc, arg3, arg2)
