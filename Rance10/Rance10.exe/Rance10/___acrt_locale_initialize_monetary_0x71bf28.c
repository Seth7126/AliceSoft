// 函数: ___acrt_locale_initialize_monetary
// 地址: 0x71bf28
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_28 = edi
int32_t* var_10 = nullptr
void* var_1c = arg1
int32_t var_18 = 0
int32_t* var_c_1
int32_t* esi
int32_t* edi_1

if (*(arg1 + 0xac) != 0 || *(arg1 + 0xb0) != 0)
    int32_t* eax_1 = __calloc_base(1, 0x50)
    __free_base(0)
    
    if (eax_1 == 0)
        return 1
    
    int32_t* eax_2 = __calloc_base(1, 4)
    var_c_1 = eax_2
    __free_base(0)
    
    if (eax_2 == 0)
        __free_base(eax_1)
        return 1
    
    if (*(arg1 + 0xac) == 0)
        __builtin_memcpy(eax_1, &data_7e14f8, 0x50)
    else
        int32_t* eax_3 = __calloc_base(1, 4)
        var_10 = eax_3
        __free_base(0)
        
        if (eax_3 == 0)
            __free_base(eax_1)
            __free_base(var_c_1)
            return 1
        
        int32_t edi_4 = *(arg1 + 0xac)
        int32_t esi_5 = sub_71950d(&var_1c, 1, edi_4, 0x15, &eax_1[3])
            | sub_71950d(&var_1c, 1, edi_4, 0x14, &eax_1[4])
            | sub_71950d(&var_1c, 1, edi_4, 0x16, &eax_1[5])
            | sub_71950d(&var_1c, 1, edi_4, 0x17, &eax_1[6])
        int32_t esi_8 = esi_5 | sub_71950d(&var_1c, 1, edi_4, 0x18, &eax_1[7])
            | sub_71950d(&var_1c, 1, edi_4, 0x50, &eax_1[8])
            | sub_71950d(&var_1c, 1, edi_4, 0x51, &eax_1[9])
        int32_t esi_11 = esi_8 | sub_71950d(&var_1c, 0, edi_4, 0x1a, &eax_1[0xa])
            | sub_71950d(&var_1c, 0, edi_4, 0x19, eax_1 + 0x29)
            | sub_71950d(&var_1c, 0, edi_4, 0x54, eax_1 + 0x2a)
        int32_t esi_14 = esi_11 | sub_71950d(&var_1c, 0, edi_4, 0x55, eax_1 + 0x2b)
            | sub_71950d(&var_1c, 0, edi_4, 0x56, &eax_1[0xb])
            | sub_71950d(&var_1c, 0, edi_4, 0x57, eax_1 + 0x2d)
        int32_t esi_17 = esi_14 | sub_71950d(&var_1c, 0, edi_4, 0x52, eax_1 + 0x2e)
            | sub_71950d(&var_1c, 0, edi_4, 0x53, eax_1 + 0x2f)
            | sub_71950d(&var_1c, 2, edi_4, 0x15, &eax_1[0xe])
        int32_t esi_20 = esi_17 | sub_71950d(&var_1c, 2, edi_4, 0x14, &eax_1[0xf])
            | sub_71950d(&var_1c, 2, edi_4, 0x16, &eax_1[0x10])
            | sub_71950d(&var_1c, 2, edi_4, 0x17, &eax_1[0x11])
        int32_t esi_21 = esi_20 | sub_71950d(&var_1c, 2, edi_4, 0x50, &eax_1[0x12])
        
        if ((sub_71950d(&var_1c, 2, edi_4, 0x51, &eax_1[0x13]) | esi_21) != 0)
            ___acrt_locale_free_monetary(eax_1)
            __free_base(eax_1)
            __free_base(var_c_1)
            __free_base(var_10)
            return 1
        
        char* edx_2 = eax_1[7]
        
        while (*edx_2 != 0)
            int32_t eax_65
            eax_65.b = *edx_2
            
            if (eax_65.b s>= 0x30 && eax_65.b s<= 0x39)
                eax_65.b -= 0x30
                *edx_2 = eax_65.b
            else if (eax_65.b == 0x3b)
                char* esi_22 = edx_2
                
                do
                    eax_65.b = esi_22[1]
                    *esi_22 = eax_65.b
                    esi_22 = &esi_22[1]
                while (*esi_22 != 0)
                
                continue
            
            edx_2 = &edx_2[1]
    
    esi = eax_1
    edi_1 = var_10
    *esi = **(arg1 + 0x88)
    esi[1] = *(*(arg1 + 0x88) + 4)
    esi[2] = *(*(arg1 + 0x88) + 8)
    esi[0xc] = *(*(arg1 + 0x88) + 0x30)
    esi[0xd] = *(*(arg1 + 0x88) + 0x34)
    *var_c_1 = 1
    
    if (edi_1 != 0)
        *edi_1 = 1
else
    edi_1 = nullptr
    var_c_1 = nullptr
    esi = &data_7e14f8

int32_t* eax_79 = *(arg1 + 0x84)

if (eax_79 != 0)
    *eax_79 -= 1

int32_t* ecx_5 = *(arg1 + 0x7c)

if (ecx_5 != 0)
    bool cond:0_1 = *ecx_5 != 1
    *ecx_5
    *ecx_5 -= 1
    
    if (not(cond:0_1))
        __free_base(*(arg1 + 0x88))
        __free_base(*(arg1 + 0x7c))

*(arg1 + 0x7c) = var_c_1
*(arg1 + 0x84) = edi_1
*(arg1 + 0x88) = esi
return 0
