// 函数: sub_5261c0
// 地址: 0x5261c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = data_7fcb64
float var_28 = 0f
float var_24 = 0f
char eax = sub_47d5a0(esi)

if (eax != 0)
    eax = (***(esi + 0xc))(&var_28, &var_24)

int32_t* eax_4
struct partsengine::IEventArgs::partsengine::SKeyUpEventArgs::VTable* const var_20

if (*(*(*arg1 + 0x50) + 0x1a8) != 0)
    long double x87_r0
    long double x87_r1
    long double x87_r2
    
    if (arg2 == 1)
        arg1[1].b = 0
        
        if (arg1[0x6b].b == 0)
            (*(**arg1 + 0x2c))(1)
        else if (eax != 0)
            float eax_5 = sub_63cd60(var_28, x87_r0, x87_r1)
            float var_18_1 = sub_63cd60(var_24, x87_r1, x87_r2)
            var_20 = &partsengine::SMouseClickEventArgs::`vftable'{for `partsengine::IEventArgs'}
            float var_1c_2 = eax_5
            int32_t var_14_1 = arg2
            sub_4cbd50(&arg1[0x79], &var_20, 0)
            (*(**arg1 + 0x2c))(2)
            void* ecx_8 = *(*arg1 + 0x44)
            
            if (*(ecx_8 + 0x64) != 0)
                int32_t* ecx_9 = *(ecx_8 + 0x78)
                
                if (ecx_9 != 0)
                    (*(*ecx_9 + 8))()
            
            float var_3c_2 = var_24
            *(arg1 + 5) = 1
            sub_4b99c0(&arg1[0x86], var_28, var_3c_2)
    else if ((arg2 == 2 || arg2 == 4) && arg1[0x6b].b != 0 && eax != 0)
        float eax_11 = sub_63cd60(var_28, x87_r0, x87_r1)
        float var_18_2 = sub_63cd60(var_24, x87_r1, x87_r2)
        var_20 = &partsengine::SMouseClickEventArgs::`vftable'{for `partsengine::IEventArgs'}
        float var_1c_3 = eax_11
        int32_t var_14_2 = arg2
        sub_4cbd50(&arg1[0x79], &var_20, 0)
    struct partsengine::IEventArgs::partsengine::SKeyUpEventArgs::VTable* const var_10 =
        &partsengine::SKeyUpEventArgs::`vftable'{for `partsengine::IEventArgs'}
    eax_4 = &var_10
    int32_t var_c_1 = arg2
else
    int32_t var_1c_1 = arg2
    eax_4 = &var_20
    var_20 = &partsengine::SKeyUpEventArgs::`vftable'{for `partsengine::IEventArgs'}
return sub_4cbd50(&arg1[0x79], eax_4, 0)
