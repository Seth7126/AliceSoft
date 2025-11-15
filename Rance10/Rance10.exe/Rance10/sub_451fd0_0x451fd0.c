// 函数: sub_451fd0
// 地址: 0x451fd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1

if (*(arg1 + 4) == *(arg1 + 8))
    int32_t* ebp_1 = arg2
    
    for (int32_t i = 0; i s< 5; i += 1)
        int32_t* eax_3 = (*(*ebp_1 + 0x58))()
        int32_t ecx_1 = *(arg1 + 8)
        arg2 = eax_3
        int32_t edx_1
        
        if (&arg2 u< ecx_1)
            edx_1 = *(arg1 + 4)
        
        if (&arg2 u>= ecx_1 || edx_1 u> &arg2)
            if (ecx_1 == *(arg1 + 0xc))
                int32_t var_18_2 = ecx_1
                sub_42cd50(arg1 + 4)
            
            int32_t** eax_6 = *(arg1 + 8)
            
            if (eax_6 != 0)
                *eax_6 = eax_3
        else
            if (ecx_1 == *(arg1 + 0xc))
                int32_t var_18_1 = ecx_1
                sub_42cd50(arg1 + 4)
            
            int32_t* ecx_3 = *(arg1 + 8)
            
            if (ecx_3 != 0)
                *ecx_3 = *(*(arg1 + 4) + ((&arg2 - edx_1) s>> 2 << 2))
        
        *(arg1 + 8) += 4
        
        if (*(*(arg1 + 4) + ((*(arg1 + 8) - *(arg1 + 4)) s>> 2 << 2) - 4) == 0)
            int32_t eax_7
            eax_7.b = 0
            return eax_7

*(arg1 + 0x10) = **(arg1 + 4)
char* eax_10 = *(arg1 + 4)
sub_6feca0(eax_10, &eax_10[4], *(arg1 + 8) - &eax_10[4])
*(arg1 + 8) -= 4
int32_t ecx_10 = *(arg1 + 8)
void* eax_11

if (arg1 + 0x10 u< ecx_10)
    eax_11 = *(arg1 + 4)

if (arg1 + 0x10 u>= ecx_10 || eax_11 u> arg1 + 0x10)
    if (ecx_10 == *(arg1 + 0xc))
        int32_t var_18_5 = ecx_10
        sub_42cd50(arg1 + 4)
    
    void** ecx_16 = *(arg1 + 8)
    
    if (ecx_16 != 0)
        *ecx_16 = *(arg1 + 0x10)
else
    if (ecx_10 == *(arg1 + 0xc))
        int32_t var_18_4 = ecx_10
        sub_42cd50(arg1 + 4)
    
    int32_t* ecx_12 = *(arg1 + 8)
    
    if (ecx_12 != 0)
        *ecx_12 = *(*(arg1 + 4) + ((arg1 + 0x10 - eax_11) s>> 2 << 2))
        int32_t eax_13
        eax_13.b = 1
        *(arg1 + 8) += 4
        return eax_13

*(arg1 + 8) += 4
eax_11.b = 1
return eax_11
