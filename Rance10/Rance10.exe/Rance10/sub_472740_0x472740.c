// 函数: sub_472740
// 地址: 0x472740
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72db50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_8c = ebx
int32_t esi
int32_t var_90 = esi
int32_t edi
int32_t var_94 = edi
int32_t var_98 = eax_2
int32_t* esp_1 = &var_98
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg2
int32_t* var_80 = ecx
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx != 0)
    int32_t* edi_1 = *(arg1 + 0x1c)
    result.b = 0
    char var_79_1 = 0
    
    for (void** i = *edi_1; i != edi_1; i = *i)
        if (i[0xe] == 0x1f)
            int32_t* var_84_1
            int32_t* edx_1
            
            if (i[7] u< 0x10)
                edx_1 = &i[2]
                var_84_1 = &i[2]
            else
                edx_1 = i[2]
                var_84_1 = edx_1
            
            void* eax_3 = *ecx
            *(esp_1 - 4) = edx_1
            bool cond:2_1 = (*(eax_3 + 0x30))() == 0
            *(esp_1 - 4) = var_84_1
            esp_1 -= 4
            void* eax_6 = *var_80
            int32_t var_30
            char* eax_8
            
            if (cond:2_1)
                bool cond:1_1 = (*(eax_6 + 0x38))() == 0
                *(esp_1 - 4) = var_84_1
                esp_1 -= 4
                void* eax_12 = *var_80
                
                if (not(cond:1_1))
                    (*(eax_12 + 0x3c))()
                    float var_84_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x80], st0})
                    unimplemented  {fstp dword [ebp-0x80], st0}
                    int16_t top = top + 1
                    eax_8 = sub_6ca450(&var_30)
                    int32_t var_8_3 = 1
                    goto label_4727e9
                
                bool cond:3_1 = (*(eax_12 + 0x48))() == 0
                *(esp_1 - 4) = var_84_1
                void* eax_16 = *var_80
                
                if (cond:3_1)
                    if ((*(eax_16 + 0x40))() == 0)
                        *(esp_1 - 8) = "Asra"
                        sub_403360(&var_30)
                        *(esp_1 - 8) = &i[2]
                        int32_t var_8_8 = 4
                        *(esp_1 - 0xc) = &var_30
                        sub_45ebd0(*(arg1 + 0x28))
                        int32_t var_8_9 = 0xffffffff
                        sub_403320(&var_30)
                        *(esp_1 - 8) = &data_75f984
                        void var_78
                        sub_403360(&var_78)
                        esp_1 -= 4
                        int32_t var_8_10 = 5
                        
                        if (&i[2] != &var_78)
                            *(esp_1 - 4) = 0xffffffff
                            *(esp_1 - 8) = 0
                            *(esp_1 - 0xc) = &var_78
                            sub_403590(&i[2])
                        
                        int32_t var_8_11 = 0xffffffff
                        sub_403320(&var_78)
                        result.b = 1
                        var_79_1 = 1
                        i[0xe] = 0x11
                    else
                        *(esp_1 - 8) = var_84_1
                        *(esp_1 - 8) = (*(*var_80 + 0x44))()
                        void var_60
                        sub_403360(&var_60)
                        esp_1 -= 4
                        int32_t var_8_6 = 3
                        
                        if (&i[2] != &var_60)
                            *(esp_1 - 4) = 0xffffffff
                            *(esp_1 - 8) = 0
                            *(esp_1 - 0xc) = &var_60
                            sub_403590(&i[2])
                        
                        int32_t var_8_7 = 0xffffffff
                        sub_403320(&var_60)
                        result.b = var_79_1
                        i[0xe] = 0x12
                else
                    void* const ecx_7 = &data_75f8a8
                    
                    if ((*(eax_16 + 0x4c))() == 0)
                        ecx_7 = &data_75f978
                    
                    *(esp_1 - 8) = ecx_7
                    void var_48
                    sub_403360(&var_48)
                    esp_1 -= 4
                    int32_t var_8_4 = 2
                    
                    if (&i[2] != &var_48)
                        *(esp_1 - 4) = 0xffffffff
                        *(esp_1 - 8) = 0
                        *(esp_1 - 0xc) = &var_48
                        sub_403590(&i[2])
                    
                    int32_t var_8_5 = 0xffffffff
                    sub_403320(&var_48)
                    result.b = var_79_1
                    i[0xe] = 0x11
            else
                eax_8 = sub_6ca3a0(&var_30, (*(eax_6 + 0x34))())
                int32_t var_8_1 = 0
            label_4727e9:
                
                if (&i[2] != eax_8)
                    *(esp_1 - 4) = 0xffffffff
                    *(esp_1 - 8) = 0
                    *(esp_1 - 0xc) = eax_8
                    sub_403590(&i[2])
                
                int32_t var_8_2 = 0xffffffff
                struct _EXCEPTION_REGISTRATION_RECORD** var_1c
                
                if (var_1c u>= 0x10)
                    *(esp_1 - 4) = 1
                    *(esp_1 - 8) = var_1c + 1
                    *(esp_1 - 0xc) = var_30
                    sub_403160()
                
                result.b = var_79_1
                i[0xe] = 0x11
            ecx = var_80
    
    result.b = result.b == 0
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
esp_1[1]
esp_1[2]
esp_1[3]
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
