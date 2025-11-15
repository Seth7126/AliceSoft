// 函数: sub_55ca70
// 地址: 0x55ca70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73b4f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_78 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = *(arg1 + 0xa0)
int32_t* edi = *(arg1 + 0x9c)
int32_t result_3 = 0
int32_t result_1 = result

if (edi != result)
    do
        void* ebx_1 = *edi
        int32_t* ecx = ebx_1 + 4
        
        if (*(ebx_1 + 0x18) u>= 0x10)
            ecx = *ecx
        
        int32_t esi_2 = ecx[4]
        int32_t eax_3 = 1
        
        if (esi_2 u< 1)
            eax_3 = esi_2
        
        result = sub_406ac0(eax_3, &(*U"\n\n\n\n\n")[1], ecx, eax_3)
        
        if (result != 0 || esi_2 u< 1 || esi_2 u> 1)
            sub_55ac20(ebx_1)
            void var_4c
            int32_t* eax_4 = sub_55a920(&var_4c, *edi + 4)
            int32_t eax_5
            int32_t edx_3
            edx_3:eax_5 = muls.dp.d(0x2aaaaaab, eax_4[1] - *eax_4)
            int32_t edx_4 = edx_3 s>> 2
            sub_417070(&var_4c)
            int32_t result_4 = result_3
            result = (edx_4 u>> 0x1f) + edx_4 + result_4
            void* i = *(arg1 + 0x88)
            int32_t ebx_2 = *(arg1 + 0x8c)
            int32_t result_2 = result
            
            for (; i != ebx_2; i += 0x1c)
                int32_t ecx_7 = *(i + 4)
                char var_11_1
                
                if (ecx_7 s<= result_4)
                    var_11_1 = 1
                
                if (ecx_7 s> result_4 || result_4 s> *(i + 0xc))
                    var_11_1 = 0
                
                char var_12_1
                
                if (ecx_7 s<= result)
                    var_12_1 = 1
                
                if (ecx_7 s> result || result s> *(i + 0xc))
                    var_12_1 = 0
                
                if (result_4 s> ecx_7 || *(i + 0xc) s> result)
                    result.b = 0
                else
                    result.b = 1
                
                if (var_11_1 != 0 || var_12_1 != 0 || result.b != 0)
                    bool cond:3_1 = ecx_7 s>= result_3
                    int32_t* eax_6 = &result_3
                    int32_t var_20 = ecx_7
                    
                    if (cond:3_1)
                        eax_6 = &var_20
                    
                    int32_t* ecx_8 = &result_2
                    int32_t edx_6 = *eax_6 - result_3
                    int32_t eax_8 = *(i + 0xc) + 1
                    bool cond:4_1 = result_2 s>= eax_8
                    int32_t var_28 = eax_8
                    
                    if (cond:4_1)
                        ecx_8 = &var_28
                    
                    var_20 = edx_6
                    int32_t eax_9 = *(i + 0x18)
                    int32_t eax_10 = *(i + 0x14)
                    int32_t ecx_10 = *ecx_8 - result_3
                    int32_t eax_11 = *(i + 0x10)
                    void* eax_12 = *edi
                    var_28 = ecx_10 - edx_6
                    sub_559960(eax_12 + 0xcc)
                    int32_t var_64_1 = var_20
                    int32_t var_60_1 = var_28
                    struct partsengine::CTextHighlightModel::VTable* const var_68 =
                        &partsengine::CTextHighlightModel::`vftable'
                    int32_t var_5c_1 = ecx_10 - 1
                    int32_t var_58_1 = eax_11
                    int32_t var_54_1 = eax_10
                    int32_t var_50_1 = eax_9
                    int32_t var_8_1 = 0
                    sub_55be10(eax_12 + 0xd8, &var_68)
                    int32_t var_8_2 = 0xffffffff
                    result_4 = result_3
                
                result = result_2
            
            result_3 = result
        
        edi = &edi[1]
    while (edi != result_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
