// 函数: sub_40b3c0
// 地址: 0x40b3c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727698
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_84 = ebx
int32_t esi
int32_t var_88 = esi
int32_t edi
int32_t var_8c = edi
int32_t var_90 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi_1 = *(*(arg1 + 0x10) + 4)
int32_t* var_54 = esi_1
int32_t eax_5 = (*(*esi_1 + 0x1c))(var_90)
sub_6ca100(arg2, eax_5)
int32_t* esp_1 = &var_90
int32_t ecx_2 = 0
int32_t var_50 = 0
void* result

if (eax_5 s<= 0)
label_40b8d9:
    result.b = 1
else
    void* edi_2 = arg2 + 4
    
    while (true)
        int32_t eax_6 = *esi_1
        *(esp_1 - 4) = ecx_2
        char* edx_1 = (*(eax_6 + 0x20))()
        int32_t var_1c_1 = 0xf
        void* var_20_1 = nullptr
        char var_30 = 0
        void* ecx_4
        
        if (*edx_1 != 0)
            char* ecx_5 = edx_1
            char* eax_7
            
            do
                eax_7.b = *ecx_5
                ecx_5 = &ecx_5[1]
            while (eax_7.b != 0)
            ecx_4 = ecx_5 - &ecx_5[1]
        else
            ecx_4 = nullptr
        
        *(esp_1 - 4) = ecx_4
        *(esp_1 - 8) = edx_1
        sub_403490(&var_30)
        int32_t var_8_1 = 0
        char* esi_3 = &var_30
        char* edx_2 = &var_30
        
        if (var_1c_1 u>= 0x10)
            esi_3 = var_30.d
        
        if (var_1c_1 u>= 0x10)
            edx_2 = var_30.d
        
        *(esp_1 - 4) = 0.d
        *(esp_1 - 8) = var_20_1 + esi_3
        *(esp_1 - 0xc) = edx_2
        *(esp_1 - 0x10) = *(arg2 + 8)
        sub_6ca200(edi_2)
        char var_49 = 0
        *(esp_1 - 4) = &var_49
        sub_4263a0(edi_2)
        void* esp_13 = esp_1
        int32_t var_8_2 = 0xffffffff
        
        if (var_1c_1 u>= 0x10)
            *(esp_13 - 4) = 1
            *(esp_13 - 8) = var_1c_1 + 1
            *(esp_13 - 0xc) = var_30.d
            sub_403160()
        
        *(esp_13 - 4) = var_50
        int32_t* eax_13 = (*(*var_54 + 0x24))()
        int32_t eax_14
        
        if (eax_13 != 0)
            eax_14 = (*(*eax_13 + 0x14))()
        
        void* const var_20_2
        int32_t var_1c_2
        void* esp_22
        
        if (eax_13 == 0 || eax_14 == 0)
            *(esp_13 - 4) = 0
            *(esp_13 - 8) = 0x75cce7
            var_1c_2 = 0xf
            var_20_2 = nullptr
            var_30 = 0
            sub_403490(&var_30)
            int32_t var_8_4 = 1
            *(esp_13 - 4) = 0.d
            esp_22 = esp_13 - 4
        else
            char* edx_4 = (*(*eax_13 + 0x18))()
            var_1c_2 = 0xf
            var_20_2 = nullptr
            var_30 = 0
            void* ecx_12
            
            if (*edx_4 != 0)
                char* ecx_13 = edx_4
                char* eax_16
                
                do
                    eax_16.b = *ecx_13
                    ecx_13 = &ecx_13[1]
                while (eax_16.b != 0)
                ecx_12 = ecx_13 - &ecx_13[1]
            else
                ecx_12 = nullptr
            
            *(esp_13 - 4) = ecx_12
            *(esp_13 - 8) = edx_4
            sub_403490(&var_30)
            int32_t var_8_3 = 2
            *(esp_13 - 4) = 0.d
            esp_22 = esp_13 - 4
        
        char* esi_6 = &var_30
        char* edx_5 = &var_30
        
        if (var_1c_2 u>= 0x10)
            esi_6 = var_30.d
        
        if (var_1c_2 u>= 0x10)
            edx_5 = var_30.d
        
        *(esp_22 - 4) = var_20_2 + esi_6
        *(esp_22 - 8) = edx_5
        *(esp_22 - 0xc) = *(arg2 + 8)
        sub_6ca200(edi_2)
        var_49 = 0
        *esp_22 = &var_49
        sub_4263a0(edi_2)
        void* esp_31 = esp_22 + 4
        int32_t var_8_5 = 0xffffffff
        
        if (var_1c_2 u>= 0x10)
            *(esp_31 - 4) = 1
            *(esp_31 - 8) = var_1c_2 + 1
            *(esp_31 - 0xc) = var_30.d
            sub_403160()
        
        esi_1 = var_54
        *(esp_31 - 4) = var_50
        int32_t eax_22 = (*(*esi_1 + 0x28))()
        *(esp_31 - 8) = eax_22
        sub_6ca100(arg2)
        esp_1 = esp_31 - 4
        int32_t ecx_20 = 0
        int32_t var_58_1 = 0
        
        if (eax_22 s> 0)
            while (true)
                int32_t eax_23 = *esi_1
                *(esp_1 - 4) = ecx_20
                *(esp_1 - 8) = var_50
                result = (*(eax_23 + 0x2c))()
                
                if (result == 0)
                    result.b = 0
                    break
                
                *(esp_1 - 4) = (**result)()
                sub_6ca100(arg2)
                int32_t* eax_26 = (*(*result + 4))()
                void* const var_20_3
                int32_t var_1c_3
                void* esp_46
                
                if (eax_26 == 0)
                    *(esp_1 - 4) = 0xffffffff
                    sub_6ca100(arg2)
                    *(esp_1 - 4) = 0
                    *(esp_1 - 8) = 0x75ccea
                    var_1c_3 = 0xf
                    var_20_3 = nullptr
                    var_30 = 0
                    sub_403490(&var_30)
                    int32_t var_8_7 = 4
                    *(esp_1 - 4) = 0.d
                    esp_46 = esp_1 - 4
                else
                    *(esp_1 - 4) = (**eax_26)()
                    sub_6ca100(arg2)
                    char* edx_8 = (*(*eax_26 + 4))()
                    var_1c_3 = 0xf
                    var_20_3 = nullptr
                    var_30 = 0
                    void* ecx_28
                    
                    if (*edx_8 != 0)
                        char* ecx_29 = edx_8
                        char* eax_29
                        
                        do
                            eax_29.b = *ecx_29
                            ecx_29 = &ecx_29[1]
                        while (eax_29.b != 0)
                        ecx_28 = ecx_29 - &ecx_29[1]
                    else
                        ecx_28 = nullptr
                    
                    *(esp_1 - 4) = ecx_28
                    *(esp_1 - 8) = edx_8
                    sub_403490(&var_30)
                    int32_t var_8_6 = 3
                    *(esp_1 - 4) = 0.d
                    esp_46 = esp_1 - 4
                
                char* esi_9 = &var_30
                char* edx_9 = &var_30
                
                if (var_1c_3 u>= 0x10)
                    esi_9 = var_30.d
                
                if (var_1c_3 u>= 0x10)
                    edx_9 = var_30.d
                
                *(esp_46 - 4) = var_20_3 + esi_9
                *(esp_46 - 8) = edx_9
                *(esp_46 - 0xc) = *(arg2 + 8)
                sub_6ca200(arg2 + 4)
                var_49 = 0
                *esp_46 = &var_49
                sub_4263a0(arg2 + 4)
                void* esp_57 = esp_46 + 4
                int32_t var_8_8 = 0xffffffff
                
                if (var_1c_3 u>= 0x10)
                    *(esp_57 - 4) = 1
                    *(esp_57 - 8) = var_1c_3 + 1
                    *(esp_57 - 0xc) = var_30.d
                    sub_403160()
                
                char* edx_10 = (*(*result + 8))()
                int32_t var_1c_4 = 0xf
                void* var_20_4 = nullptr
                var_30 = 0
                void* ecx_36
                
                if (*edx_10 != 0)
                    char* ecx_37 = edx_10
                    char* eax_35
                    
                    do
                        eax_35.b = *ecx_37
                        ecx_37 = &ecx_37[1]
                    while (eax_35.b != 0)
                    ecx_36 = ecx_37 - &ecx_37[1]
                else
                    ecx_36 = nullptr
                
                *(esp_57 - 4) = ecx_36
                *(esp_57 - 8) = edx_10
                sub_403490(&var_30)
                int32_t var_8_9 = 5
                char* esi_11 = &var_30
                char* edx_11 = &var_30
                
                if (var_1c_4 u>= 0x10)
                    esi_11 = var_30.d
                
                if (var_1c_4 u>= 0x10)
                    edx_11 = var_30.d
                
                *(esp_57 - 4) = 0.d
                *(esp_57 - 8) = var_20_4 + esi_11
                *(esp_57 - 0xc) = edx_11
                *(esp_57 - 0x10) = *(arg2 + 8)
                sub_6ca200(arg2 + 4)
                var_49 = 0
                *(esp_57 - 4) = &var_49
                sub_4263a0(arg2 + 4)
                int32_t var_8_10 = 0xffffffff
                
                if (var_1c_4 u>= 0x10)
                    *(esp_57 - 4) = 1
                    *(esp_57 - 8) = var_1c_4 + 1
                    *(esp_57 - 0xc) = var_30.d
                    sub_403160()
                
                *(esp_57 - 4) = (*(*result + 0xc))()
                sub_6ca100(arg2)
                *(esp_57 - 4) = (*(*result + 0x10))()
                sub_6ca100(arg2)
                *(esp_57 - 4) = (*(*result + 0x14))()
                sub_6ca100(arg2)
                *(esp_57 - 4) = (*(*result + 0x10))()
                sub_6ca100(arg2)
                *(esp_57 - 4) = (*(*result + 0x1c))()
                sub_6ca100(arg2)
                *(esp_57 - 4) = (*(*result + 0x20))()
                sub_6ca100(arg2)
                *(esp_57 - 4) = (*(*result + 0x24))()
                sub_6ca100(arg2)
                (*(*result + 0x28))()
                float var_78_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x74], st0})
                unimplemented  {fstp dword [ebp-0x74], st0}
                int16_t top = top + 1
                *(esp_57 - 4) = var_78_1
                sub_6ca100(arg2)
                char* esi_12 = (*(*result + 0x2c))()
                void* var_34_1 = 0xf
                void* var_38_1 = nullptr
                char var_48 = 0
                void* ecx_58
                
                if (*esi_12 != 0)
                    char* ecx_59 = esi_12
                    char* eax_57
                    
                    do
                        eax_57.b = *ecx_59
                        ecx_59 = &ecx_59[1]
                    while (eax_57.b != 0)
                    ecx_58 = ecx_59 - &ecx_59[1]
                else
                    ecx_58 = nullptr
                
                *(esp_57 - 4) = ecx_58
                *(esp_57 - 8) = esi_12
                sub_403490(&var_48)
                int32_t var_8_11 = 6
                char* esi_13 = &var_48
                char* edx_13 = &var_48
                edi_2 = arg2 + 4
                
                if (var_34_1 u>= 0x10)
                    esi_13 = var_48.d
                
                if (var_34_1 u>= 0x10)
                    edx_13 = var_48.d
                
                *(esp_57 - 4) = 0.d
                *(esp_57 - 8) = var_38_1 + esi_13
                *(esp_57 - 0xc) = edx_13
                void* esp_91
                *(esp_91 - 8) = *(arg2 + 8)
                sub_6ca200(edi_2)
                var_49 = 0
                *(esp_91 + 4) = &var_49
                sub_4263a0(edi_2)
                esp_1 = esp_91 + 8
                int32_t var_8_12 = 0xffffffff
                
                if (var_34_1 u>= 0x10)
                    *(esp_1 - 4) = 1
                    *(esp_1 - 8) = var_34_1 + 1
                    *(esp_1 - 0xc) = var_48.d
                    sub_403160()
                
                esi_1 = var_54
                ecx_20 = var_58_1 + 1
                int32_t var_34_2 = 0xf
                int32_t var_38_2 = 0
                var_48 = 0
                var_58_1 = ecx_20
                
                if (ecx_20 s>= eax_22)
                    goto label_40b8cc
            
            break
        
    label_40b8cc:
        ecx_2 = var_50 + 1
        var_50 = ecx_2
        
        if (ecx_2 s>= eax_5)
            goto label_40b8d9

fsbase->NtTib.ExceptionList = ExceptionList
esp_1[1]
esp_1[2]
esp_1[3]
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
