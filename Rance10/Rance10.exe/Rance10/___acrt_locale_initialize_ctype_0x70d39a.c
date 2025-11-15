// 函数: ___acrt_locale_initialize_ctype
// 地址: 0x70d39a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result_1 = 0
int32_t edi
int32_t var_58 = edi
void* var_20 = nullptr
int32_t ecx = arg1[0x2a]
void* var_24 = nullptr
uint32_t var_28 = 0
uint8_t* var_34 = nullptr
wchar16** var_4c = arg1
int32_t var_48 = 0
int32_t result

if (ecx == 0)
    int32_t* eax_35 = arg1[0x23]
    
    if (eax_35 != 0)
        *eax_35 -= 1
    
    arg1[0x23] = 0
    result = 0
    arg1[0x24] = 0
    *arg1 = u"         (((((                  H"
    arg1[0x25] = 0x755518
    arg1[0x26] = 0x755698
    arg1[1] = 1
else
    int32_t* var_2c_1 = nullptr
    
    if (arg1[2] != 0)
    label_70d407:
        var_2c_1 = __calloc_base(1, 4)
        __free_base(0)
        var_20 = __calloc_base(0x180, 2)
        __free_base(0)
        var_24 = __calloc_base(0x180, 1)
        __free_base(0)
        var_28 = __calloc_base(0x180, 1)
        __free_base(0)
        uint8_t* eax_8 = __calloc_base(0x101, 1)
        var_34 = eax_8
        __free_base(0)
        
        if (var_2c_1 == 0 || var_20 == 0 || eax_8 == 0 || var_24 == 0 || var_28 == 0)
            goto label_70d6bb
        
        for (char* i = nullptr; i s< 0x100; i = &i[1])
            *(i + eax_8) = i.b
        
        CPINFO cPInfo
        
        if (GetCPInfo(arg1[2], &cPInfo) == 0)
            goto label_70d6bb
        
        uint32_t MaxCharSize = cPInfo.MaxCharSize
        
        if (MaxCharSize u> 5)
            goto label_70d6bb
        
        uint32_t eax_10 = zx.d(MaxCharSize.w)
        
        if (___acrt_LCMapStringA(nullptr, arg1[0x2a], 0x100, &eax_8[1], 0xff, var_24 + 0x81, 0xff, 
                arg1[2], 0) == 0)
            goto label_70d6bb
        
        if (___acrt_LCMapStringA(nullptr, arg1[0x2a], 0x200, &eax_8[1], 0xff, var_28 + 0x81, 0xff, 
                arg1[2], 0) == 0)
            goto label_70d6bb
        
        var_15
        
        if (eax_10 s> 1 && cPInfo.LeadByte[0] != 0)
            void* ecx_2 = &var_15
            
            do
                int32_t i_1
                i_1.b = *ecx_2
                
                if (i_1.b == 0)
                    break
                
                uint32_t edx_1 = zx.d(*(ecx_2 - 1))
                
                for (i_1 = zx.d(i_1.b); edx_1 s<= i_1; i_1 = zx.d(*ecx_2))
                    eax_8[edx_1] = 0x20
                    edx_1 += 1
                
                ecx_2 += 2
            while (*(ecx_2 - 1) != 0)
        
        if (___acrt_GetStringTypeA(nullptr, 1, eax_8, 0x100, var_20 + 0x100, arg1[2], 0) == 0)
            goto label_70d6bb
        
        *(var_20 + 0xfe) = 0
        uint32_t eax_21 = var_28
        *(var_24 + 0x7f) = 0
        *(eax_21 + 0x7f) = 0
        *(var_24 + 0x80) = 0
        void* ecx_5 = eax_21 + 0x80
        *ecx_5 = 0
        
        if (eax_10 s> 1 && cPInfo.LeadByte[0] != 0)
            void* ecx_6 = &var_15
            
            do
                eax_21.b = *ecx_6
                
                if (eax_21.b == 0)
                    break
                
                uint32_t i_2 = zx.d(*(ecx_6 - 1))
                
                if (i_2 s<= zx.d(eax_21.b))
                    int16_t* edi_3 = var_20 + 0x100 + (i_2 << 1)
                    
                    do
                        i_2 += 1
                        *edi_3 = 0x8000
                        edi_3 = &edi_3[1]
                    while (i_2 s<= zx.d(*ecx_6))
                
                ecx_6 += 2
            while (*(ecx_6 - 1) != 0)
            
            eax_21 = var_28
        
        int16_t* esi_2
        int16_t* edi_5
        edi_5, esi_2 = __builtin_memcpy(var_20, var_20 + 0x200, 0xfc)
        *edi_5 = *esi_2
        int16_t* esi_5
        int16_t* edi_8
        edi_8, esi_5 = __builtin_memcpy(var_24, var_24 + 0x100, 0x7c)
        *edi_8 = *esi_5
        edi_8[1].b = esi_5[1].b
        int16_t* esi_9
        int16_t* edi_12
        edi_12, esi_9 = __builtin_memcpy(eax_21, eax_21 + 0x100, 0x7c)
        *edi_12 = *esi_9
        edi_12[1].b = esi_9[1].b
        int32_t* ecx_7 = arg1[0x23]
        
        if (ecx_7 != 0)
            bool cond:1_1 = *ecx_7 != 1
            *ecx_7
            *ecx_7 -= 1
            
            if (not(cond:1_1))
                __free_base(arg1[0x24] - 0xfe)
                __free_base(arg1[0x25] - 0x80)
                __free_base(arg1[0x26] - 0x80)
                __free_base(arg1[0x23])
        
        *var_2c_1 = 1
        arg1[0x23] = var_2c_1
        *arg1 = var_20 + 0x100
        arg1[0x24] = var_20 + 0xfe
        arg1[0x25] = var_24 + 0x80
        arg1[0x26] = ecx_5
        arg1[1] = eax_10
    else
        if (sub_71950d(&var_4c, 0, ecx, 0x1004, &arg1[2]) == 0)
            goto label_70d407
        
    label_70d6bb:
        __free_base(var_2c_1)
        __free_base(var_20)
        __free_base(var_24)
        __free_base(var_28)
        result_1 = 1
    
    __free_base(var_34)
    result = result_1

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
