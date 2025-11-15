// 函数: sub_711e16
// 地址: 0x711e16
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_c = 1
int32_t* eax = __malloc_base(0x6a6)
void* result = nullptr

if (eax != 0)
    int32_t edi
    int32_t var_1c_1 = edi
    eax[1].w = 0
    *eax = 1
    int32_t var_20_1 = *(arg1 + 0x30)
    void* var_10_1 = arg1 + 0x30
    void* const var_24_1 = &data_755a34
    wchar16 const* const var_28_1 = u"LC_COLLATE"
    sub_711d55(&eax[1], 0x351, 3)
    wchar16 const (** const var_8_1)[0xb] = &data_7558ec
    
    while (true)
        if (_wcscat_s(&eax[1], 0x351, &data_755a30) != 0)
            int32_t var_30
            __builtin_memset(&var_30, 0, 0x14)
            __invoke_watson()
            noreturn
        
        void* ecx_1 = var_10_1 + 0x10
        int16_t* eax_4 = *var_10_1
        int16_t* ecx_2 = *ecx_1
        int32_t eax_6
        
        while (true)
            int16_t edx_1 = *eax_4
            int16_t temp1_1 = *ecx_2
            bool c_1 = edx_1 u< temp1_1
            
            if (edx_1 == temp1_1)
                if (edx_1 == 0)
                    eax_6 = 0
                    break
                
                edx_1 = eax_4[1]
                int16_t temp3_1 = ecx_2[1]
                c_1 = edx_1 u< temp3_1
                
                if (edx_1 == temp3_1)
                    eax_4 = &eax_4[2]
                    ecx_2 = &ecx_2[2]
                    
                    if (edx_1 != 0)
                        continue
                    
                    eax_6 = 0
                    break
            
            eax_6 = sbb.d(eax_4, eax_4, c_1) | 1
            break
        
        int32_t eax_7 = neg.d(eax_6)
        void* ecx_4 = &var_8_1[3]
        var_8_1 = ecx_4
        var_c &= not.d(sbb.d(eax_7, eax_7, eax_6 != 0))
        var_10_1 = ecx_1
        int32_t var_20_2 = *ecx_1
        void* const var_24_2 = &data_755a34
        int32_t var_28_3 = *ecx_4
        sub_711d55(&eax[1], 0x351, 3)
        
        if (var_8_1 s>= &data_75591c)
            break
    
    if (var_c != 0)
        __free_base(eax)
        int32_t* ecx_8 = *(arg1 + 0x28)
        
        if (ecx_8 != 0)
            bool cond:0_1 = *ecx_8 != 1
            *ecx_8
            *ecx_8 -= 1
            
            if (not(cond:0_1))
                __free_base(*(arg1 + 0x28))
        
        int32_t* eax_15 = *(arg1 + 0x24)
        
        if (eax_15 != 0)
            int32_t edi_5 = *eax_15
            *eax_15 -= 1
            
            if (edi_5 == 1)
                __free_base(*(arg1 + 0x24))
        
        *(arg1 + 0x24) = 0
        *(arg1 + 0x1c) = 0
        *(arg1 + 0x28) = 0
        *(arg1 + 0x20) = 0
        result = *(arg1 + 0x40)
    else
        int32_t* ecx_5 = *(arg1 + 0x28)
        
        if (ecx_5 != 0)
            bool cond:1_1 = *ecx_5 != 1
            *ecx_5
            *ecx_5 -= 1
            
            if (not(cond:1_1))
                __free_base(*(arg1 + 0x28))
        
        int32_t* eax_13 = *(arg1 + 0x24)
        
        if (eax_13 != 0)
            int32_t edi_2 = *eax_13
            *eax_13 -= 1
            
            if (edi_2 == 1)
                __free_base(*(arg1 + 0x24))
        
        *(arg1 + 0x24) = 0
        result = &eax[1]
        *(arg1 + 0x1c) = 0
        *(arg1 + 0x28) = eax
        *(arg1 + 0x20) = result

return result
