// 函数: sub_4ebaa0
// 地址: 0x4ebaa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = *(arg1 + 0xac)

if (*(ecx + 0xaa) == 0 || *(ecx + 0xab) == 0)
    int32_t eax_3 = *(arg1 + 0x1cc) - arg3[1] + arg3[2]
    int32_t esi_1 = 0
    
    if (eax_3 s> 0)
        esi_1 = eax_3
    
    struct 
        common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIListBoxView::VTable
        ** eax_4 = sub_4ef320(ecx)
    int32_t var_1c_1 = esi_1
    eax_4[0x66].b = 1
    sub_4ffbc0(&eax_4[0x31])
    int32_t var_4_1 = eax_4[0x60]
    eax_4[0x10] = esi_1
    struct partsengine::IEventArgs::partsengine::SSelectedEventArgs::VTable* const var_8 =
        &partsengine::SSelectedEventArgs::`vftable'{for `partsengine::IEventArgs'}
    sub_4cbd50(&eax_4[3], &var_8, 0)

return sub_4cbd50(arg1 + 0xc, arg3, arg2)
