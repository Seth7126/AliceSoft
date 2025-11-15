// 函数: sub_525c80
// 地址: 0x525c80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 != 0)
    void* eax_2 = *(*arg2 + 0x50)
    void* ecx = *(eax_2 + 0x7c)
    struct partsengine::IEventArgs::partsengine::SDropEnterEventArgs::VTable* const var_18
    
    if (*(arg1 + 0x1e3) != 0)
        int32_t ebx_1
        
        if (ecx == 0)
            ebx_1 = *(eax_2 + 0x40)
        else
            ebx_1 = sub_4f03d0(ecx)
        
        long double x87_r0
        long double x87_r1
        float eax_6 = sub_63cd60(arg3, x87_r0, x87_r1)
        long double x87_r2
        float var_c_1 = sub_63cd60(arg4, x87_r1, x87_r2)
        var_18 = &partsengine::SDropOnEventArgs::`vftable'{for `partsengine::IEventArgs'}
        int32_t var_14_3 = ebx_1
        float var_10_1 = eax_6
    else if (ecx == 0)
        int32_t var_14_2 = *(eax_2 + 0x40)
        var_18 = &partsengine::SDropEnterEventArgs::`vftable'{for `partsengine::IEventArgs'}
    else
        int32_t var_14_1 = sub_4f03d0(ecx)
        var_18 = &partsengine::SDropEnterEventArgs::`vftable'{for `partsengine::IEventArgs'}
    
    sub_4cbd50(&arg1[0x79], &var_18, 0)

*(arg1 + 0x1e3) = 1
return sub_5255a0(arg1)
