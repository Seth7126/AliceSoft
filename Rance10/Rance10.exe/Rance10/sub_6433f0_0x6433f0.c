// 函数: sub_6433f0
// 地址: 0x6433f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** ebp = arg4
int32_t eax_2 = (ebp - arg3) s>> 2
void* result

if (eax_2 s<= 0x28)
    void* eax_19 = *arg2
    void* esi_9 = *arg3
    
    if (*(*(eax_19 + 0x60) + 8) s> *(*(esi_9 + 0x60) + 8))
        *arg2 = esi_9
        *arg3 = eax_19
    
    result = *ebp
    
    if (*(*(result + 0x60) + 8) s> *(*(*arg2 + 0x60) + 8))
        *ebp = *arg2
        *arg2 = result
        void* esi_10 = *arg3
        
        if (*(*(result + 0x60) + 8) s> *(*(esi_10 + 0x60) + 8))
            *arg2 = esi_10
            *arg3 = result
else
    int32_t eax_4
    int32_t edx
    edx:eax_4 = sx.q(eax_2 + 1)
    int32_t eax_6 = (eax_4 + (edx & 7)) s>> 3
    int32_t esi = eax_6 << 2
    void* eax_7 = arg3[eax_6]
    
    if (*(*(eax_7 + 0x60) + 8) s> *(*(*arg3 + 0x60) + 8))
        arg3[eax_6] = *arg3
        *arg3 = eax_7
    
    void* eax_9 = arg3[eax_6 * 2]
    
    if (*(*(eax_9 + 0x60) + 8) s> *(*(arg3[eax_6] + 0x60) + 8))
        arg3[eax_6 * 2] = arg3[eax_6]
        arg3[eax_6] = eax_9
        void* esi_3 = *arg3
        
        if (*(*(eax_9 + 0x60) + 8) s> *(*(esi_3 + 0x60) + 8))
            *(esi + arg3) = esi_3
            *arg3 = eax_9
    
    void* eax_10 = *arg2
    void* esi_5 = arg2 - esi
    
    if (*(*(eax_10 + 0x60) + 8) s> *(*(*esi_5 + 0x60) + 8))
        *arg2 = *esi_5
        *esi_5 = eax_10
    
    void* eax_12 = arg2[eax_6]
    
    if (*(*(eax_12 + 0x60) + 8) s> *(*(*arg2 + 0x60) + 8))
        arg2[eax_6] = *arg2
        *arg2 = eax_12
        
        if (*(*(eax_12 + 0x60) + 8) s> *(*(*esi_5 + 0x60) + 8))
            *arg2 = *esi_5
            *esi_5 = eax_12
    
    int32_t* eax_14 = ebp - (eax_6 << 3)
    int32_t* esi_7 = ebp - esi
    void** var_8_2 = eax_14
    void* edx_14 = *eax_14
    void* eax_15 = *esi_7
    
    if (*(*(eax_15 + 0x60) + 8) s> *(*(edx_14 + 0x60) + 8))
        *esi_7 = edx_14
        *var_8_2 = eax_15
    
    void* eax_16 = *ebp
    
    if (*(*(eax_16 + 0x60) + 8) s> *(*(*esi_7 + 0x60) + 8))
        *ebp = *esi_7
        *esi_7 = eax_16
        
        if (*(*(eax_16 + 0x60) + 8) s> *(*(*var_8_2 + 0x60) + 8))
            *esi_7 = *var_8_2
            *var_8_2 = eax_16
    
    void* ebp_2 = arg3[eax_6]
    void* eax_18 = *arg2
    int32_t ebp_3
    
    if (*(*(eax_18 + 0x60) + 8) s<= *(*(ebp_2 + 0x60) + 8))
        ebp_3 = esi
    else
        *arg2 = ebp_2
        ebp_3 = esi
        *(arg3 + ebp_3) = eax_18
    
    result = *esi_7
    
    if (*(*(result + 0x60) + 8) s> *(*(*arg2 + 0x60) + 8))
        *esi_7 = *arg2
        *arg2 = result
        void* esi_8 = *(arg3 + ebp_3)
        
        if (*(*(result + 0x60) + 8) s> *(*(esi_8 + 0x60) + 8))
            *arg2 = esi_8
            *(arg3 + ebp_3) = result

return result
