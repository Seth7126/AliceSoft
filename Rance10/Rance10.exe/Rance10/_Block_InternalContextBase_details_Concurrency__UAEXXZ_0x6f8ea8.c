// 函数: ?Block@InternalContextBase@details@Concurrency@@UAEXXZ
// 地址: 0x6f8ea8
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
void* var_c = arg1
int32_t var_1c = *(arg1 + 8)
int32_t esi = *(**(arg1 + 0x1c) + 4)
j_sub_4033e0()
int32_t eax_1 = esi(var_1c)
char var_24 = 4
int32_t var_28 = 3
Concurrency::details::ContextBase::TraceContextEvent(var_28.b, var_24, eax_1)
void* eax_2
eax_2.b = *(*(arg1 + 0x9c) + 0xad)

if (eax_2.b == 0)
    int32_t eax_6 = *(arg1 + 0x2c)
    *(arg1 + 0x2c) += 1
    
    if (eax_6 == 0)
        var_8:3.b = 0
        var_8:2.b = 0
        void* eax_8 = sub_6f92ce(arg1 - 4, &var_8:3, &var_8:2)
        int32_t eax_9 = 1
        
        if (1 == *(arg1 + 0x2c))
            *(arg1 + 0x2c) = 2
        else
            eax_9 = *(arg1 + 0x2c)
        
        if (eax_9 == 1)
            if (var_8:3.b != 0)
                sub_6f981a(eax_8, *(arg1 + 0x18), 0, 0)
            
            sub_6f9c54(arg1 - 4, eax_8, 1)
        else if (eax_8 != 0)
            if (var_8:3.b == 0)
                if (var_8:2.b != 0)
                    void* var_1c_6 = eax_8 + 4
                    Concurrency::details::_UnrealizedChore::_PrepareSteal(*(eax_8 + 0xa8))
                
                Concurrency::location::_Assign(&var_28, sub_425af0(eax_8 + 4) + 0xc)
                int32_t esi_2 = *(*eax_8 + 0x14)
                j_sub_4033e0()
                esi_2()
            else
                sub_6f21a9(*(arg1 + 0x1c), eax_8, 1)
else
    int32_t eax_3 = *(arg1 + 0x2c)
    *(arg1 + 0x2c) += 1
    int32_t eax_5
    
    if (eax_3 == 0)
        eax_5 = 1
        
        if (1 == *(arg1 + 0x2c))
            *(arg1 + 0x2c) = 2
        else
            eax_5 = *(arg1 + 0x2c)
    
    int32_t var_1c_1
    
    if (eax_3 != 0 || eax_5 != 1)
        var_1c_1 = 2
    else
        var_1c_1 = 1
    
    Concurrency::details::InternalContextBase::SwitchOut(arg1 - 4, var_1c_1)

return 0
