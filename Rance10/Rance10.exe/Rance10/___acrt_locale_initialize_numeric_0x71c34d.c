// 函数: ___acrt_locale_initialize_numeric
// 地址: 0x71c34d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_28 = edi
void* var_1c = arg1
int32_t var_18 = 0
int32_t result
int32_t* var_c_1
int32_t* esi_1
int32_t* edi_1

if (*(arg1 + 0xb0) != 0 || *(arg1 + 0xac) != 0)
    int32_t result_1 = 1
    int32_t* eax_1 = __calloc_base(1, 0x50)
    
    if (eax_1 == 0)
        return 1
    
    __builtin_memcpy(eax_1, *(arg1 + 0x88), 0x50)
    int32_t* eax_2 = __malloc_base(4)
    edi_1 = nullptr
    var_c_1 = eax_2
    __free_base(0)
    
    if (eax_2 == 0)
        __free_base(eax_1)
        return 1
    
    *eax_2 = 0
    
    if (*(arg1 + 0xb0) == 0)
        esi_1 = eax_1
        *esi_1 = data_7e14f8
        esi_1[1] = data_7e14fc
        esi_1[2] = data_7e1500
        esi_1[0xc] = data_7e1528
        esi_1[0xd] = data_7e152c
    label_71c4d0:
        *var_c_1 = 1
        
        if (edi_1 != 0)
            *edi_1 = 1
        
        goto label_71c4d8
    
    int32_t* eax_3 = __malloc_base(4)
    __free_base(0)
    
    if (eax_3 == 0)
        goto label_71c494
    
    *eax_3 = 0
    int32_t edi_3 = *(arg1 + 0xb0)
    int32_t esi_8 = sub_71950d(&var_1c, 1, edi_3, 0xe, eax_1)
        | sub_71950d(&var_1c, 1, edi_3, 0xf, &eax_1[1])
        | sub_71950d(&var_1c, 1, edi_3, 0x10, &eax_1[2])
        | sub_71950d(&var_1c, 2, edi_3, 0xe, &eax_1[0xc])
    
    if ((sub_71950d(&var_1c, 2, edi_3, 0xf, &eax_1[0xd]) | esi_8) == 0)
        char* edx_2 = eax_1[2]
        
        while (*edx_2 != 0)
            int32_t eax_15
            eax_15.b = *edx_2
            
            if (eax_15.b s>= 0x30 && eax_15.b s<= 0x39)
                eax_15.b -= 0x30
                *edx_2 = eax_15.b
            else if (eax_15.b == 0x3b)
                char* esi_9 = edx_2
                
                do
                    eax_15.b = esi_9[1]
                    *esi_9 = eax_15.b
                    esi_9 = &esi_9[1]
                while (*esi_9 != 0)
                
                continue
            
            edx_2 = &edx_2[1]
        
        edi_1 = eax_3
        esi_1 = eax_1
        goto label_71c4d0
    
    ___acrt_locale_free_numeric(eax_1)
    result_1 = 0xffffffff
label_71c494:
    __free_base(eax_1)
    __free_base(var_c_1)
    result = result_1
else
    edi_1 = nullptr
    var_c_1 = nullptr
    esi_1 = &data_7e14f8
label_71c4d8:
    int32_t* eax_16 = *(arg1 + 0x80)
    
    if (eax_16 != 0)
        *eax_16 -= 1
    
    int32_t* ecx_11 = *(arg1 + 0x7c)
    
    if (ecx_11 != 0)
        bool cond:0_1 = *ecx_11 != 1
        *ecx_11
        *ecx_11 -= 1
        
        if (not(cond:0_1))
            __free_base(*(arg1 + 0x7c))
            __free_base(*(arg1 + 0x88))
    
    *(arg1 + 0x7c) = var_c_1
    result = 0
    *(arg1 + 0x80) = edi_1
    *(arg1 + 0x88) = esi_1
return result
