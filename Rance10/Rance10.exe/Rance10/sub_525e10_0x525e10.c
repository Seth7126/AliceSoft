// 函数: sub_525e10
// 地址: 0x525e10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x1e3) != 0 && arg2 != 0)
    void* eax_3 = *(*arg2 + 0x50)
    void* ecx = *(eax_3 + 0x7c)
    int32_t eax_4
    
    if (ecx == 0)
        eax_4 = *(eax_3 + 0x40)
    else
        eax_4 = sub_4f03d0(ecx)
    
    int32_t var_4_1 = eax_4
    struct partsengine::IEventArgs::partsengine::SDropLeaveEventArgs::VTable* const var_8 =
        &partsengine::SDropLeaveEventArgs::`vftable'{for `partsengine::IEventArgs'}
    sub_4cbd50(&arg1[0x79], &var_8, 0)

*(arg1 + 0x1e3) = 0
return sub_525710(arg1)
