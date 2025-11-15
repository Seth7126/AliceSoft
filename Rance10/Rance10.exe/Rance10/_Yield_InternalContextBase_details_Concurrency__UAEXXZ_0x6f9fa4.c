// 函数: ?Yield@InternalContextBase@details@Concurrency@@UAEXXZ
// 地址: 0x6f9fa4
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char var_c = 0
j_sub_4033e0()
Concurrency::details::ContextBase::TraceContextEvent(5, 4, (*(**(arg1 + 0x1c) + 4))(*(arg1 + 8)))
void* eax_2
eax_2.b = *(*(arg1 + 0x9c) + 0xad)

if (eax_2.b == 0)
    void* edi_1 = *(arg1 + 0x9c)
    int32_t edx_1 = *(arg1 + 0x18)
    int32_t var_18 = 0
    void* var_10_1 = nullptr
    int32_t esi_1 = *(edi_1 + 0x4c)
    j_sub_4033e0()
    
    if (esi_1(&var_18, edx_1, 0, 9) == 0)
        var_c = 1
    else
        if (var_18 == 1)
            goto label_6fa0a4
        
        void* esi_2 = sub_6f0fe5(*(arg1 + 0x1c), 1)
        
        if (esi_2 == 0)
            int32_t edx_3 = *(arg1 + 0x18)
            int32_t esi_4 = *(*(arg1 + 0x9c) + 0x4c)
            j_sub_4033e0()
            
            if (esi_4(&var_18, edx_3, 0, 1) != 0)
                esi_2 = Concurrency::details::WorkItem::Bind(&var_18)
                goto label_6fa0a7
            
            var_c = 1
        else
            if (Concurrency::details::WorkItem::ResolveToken(&var_18) == 0)
                int32_t edx_2 = *(arg1 + 0x18)
                int32_t esi_3 = *(*(arg1 + 0x9c) + 0x4c)
                j_sub_4033e0()
                
                if (esi_3(&var_18, edx_2, 0, 3) == 0)
                    sub_6f21a9(*(arg1 + 0x1c), esi_2, 1)
                    esi_2 = nullptr
                else
                    if (var_18 != 1)
                        goto label_6fa060
                    
                    sub_6f21a9(*(arg1 + 0x1c), esi_2, 1)
                label_6fa0a4:
                    esi_2 = var_10_1
            else
            label_6fa060:
                Concurrency::details::WorkItem::BindTo(&var_18, esi_2)
            
        label_6fa0a7:
            
            if (esi_2 == 0)
                var_c = 1
            else
                sub_6f9c54(arg1 - 4, esi_2, 2)
else
    Concurrency::details::InternalContextBase::SwitchOut(arg1 - 4, 2)

int32_t result = sub_40d500()

if (var_c == 0)
    return result

int32_t esi_5 = *(**(arg1 + 0x98) + 0xc)
j_sub_4033e0()
return esi_5()
