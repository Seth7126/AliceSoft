// 函数: sub_41dcb0
// 地址: 0x41dcb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b45e7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_d4
int32_t eax_2 = __security_cookie ^ &var_d4
int32_t ebx
int32_t var_d8 = ebx
fsbase->NtTib.ExceptionList = &ExceptionList
char var_c4 = 0
int32_t __saved_edi
char* edx = (**arg2)(__security_cookie ^ &__saved_edi)
int32_t var_a8 = 0xf
int32_t var_ac = 0
char var_bc = 0
void* ecx_1

if (*edx != 0)
    char* ecx_2 = edx
    char* eax_6
    
    do
        eax_6.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_6.b != 0)
    ecx_1 = ecx_2 - &ecx_2[1]
else
    ecx_1 = nullptr

sub_402110(&var_bc, edx, ecx_1)
int32_t var_4 = 0
int32_t ecx_4 = 0
char* result
int32_t edx_1
char* result_1

if (var_ac s<= 0)
label_41ddc8:
    
    if (sub_40c250(&var_bc, "NULL").b == 0)
        result = sub_40c250(&var_bc, 0x6da7d4)
        
        if (result.b == 0)
            int32_t var_30_1 = 0xf
            int32_t var_34_1 = 0
            char var_44 = result.b
            int32_t var_60_1 = 0xf
            int32_t var_64_1 = 0
            char var_74 = result.b
            var_4.b = 2
            sub_41fba0(arg2, &var_44, &var_74)
            char var_5c
            sub_401f60(&var_5c, (*(*arg2 + 0x3c))())
            var_4.b = 3
            char var_8c
            sub_402b00(&var_8c, &var_5c)
            var_4.b = 5
            int32_t var_48
            
            if (var_48 u>= 0x10)
                j__free(var_5c.d)
            
            int32_t eax_9 = *arg2
            int32_t var_48_1 = 0xf
            int32_t var_4c_1 = 0
            var_5c = 0
            int32_t eax_10 = (*(eax_9 + 4))()
            int32_t ebx_3 = neg.d(eax_10)
            struct HWND__** esi_3 = arg1 + 0x4c
            struct HWND__** var_cc = esi_3
            struct HWND__** edi_1 = esi_3
            void* var_a4
            sub_402c80(&var_a4, &var_8c)
            var_4.b = 6
            int32_t i
            int32_t var_90
            int32_t var_78
            void* var_2c
            int32_t var_18
            
            if (i != 0)
                do
                    struct HWND__** eax_11 = sub_421bc0(edi_1, &var_a4)
                    
                    if (eax_11 != 0)
                        edi_1 = eax_11
                    else
                        int32_t eax_12 = sub_69adc6(0x38)
                        int32_t var_d0 = eax_12
                        var_4.b = 7
                        int32_t* esi_4
                        
                        if (eax_12 == 0)
                            esi_4 = nullptr
                        else
                            esi_4 = sub_420e30(eax_12, 0, &var_a4, &var_a4, 0)
                        
                        var_4.b = 6
                        int32_t* eax_14 = sub_69adc6(0x3c)
                        int32_t ecx_16
                        
                        if (eax_14 == 0)
                            ecx_16 = 0
                        else
                            ecx_16 = sub_4218a0(eax_14)
                        
                        *ecx_16 = *edi_1
                        int32_t var_ec_5 = edi_1[1]
                        var_d0 = ecx_16
                        sub_421a90(ecx_16, &var_a4, esi_4, 5, var_ec_5)
                        sub_412de0(&edi_1[9], &var_d0)
                        edi_1 = var_d0
                        var_d0 = edi_1[1]
                        *sub_41ff70(arg1 + 8, &var_d0) = esi_4
                    
                    char* eax_19 = sub_402b00(&var_2c, &var_8c)
                    
                    if (&var_8c != eax_19)
                        if (var_78 u>= 0x10)
                            j__free(var_8c.d)
                        
                        var_78 = 0xf
                        int32_t var_7c_1 = 0
                        var_8c = 0
                        sub_4030b0(&var_8c, eax_19)
                    
                    if (var_18 u>= 0x10)
                        j__free(var_2c)
                    
                    var_4.b = 5
                    
                    if (var_90 u>= 0x10)
                        j__free(var_a4)
                    
                    sub_402c80(&var_a4, &var_8c)
                    var_4.b = 6
                while (i != 0)
                
                esi_3 = var_cc
            
            var_4.b = 5
            
            if (var_90 u>= 0x10)
                j__free(var_a4)
            
            sub_401f60(&var_a4, (*(*arg2 + 0x3c))())
            var_4.b = 8
            sub_402b00(&var_2c, &var_a4)
            var_4.b = 0xa
            
            if (var_90 u>= 0x10)
                j__free(var_a4)
            
            int32_t var_90_1 = 0xf
            int32_t var_94 = 0
            var_a4.b = 0
            result = sub_41eef0(&var_2c, esi_3)
            
            if (result != 0)
                int32_t* eax_22 = sub_69adc6(0x38)
                int32_t* var_c0_2 = eax_22
                var_4.b = 0xb
                int32_t* esi_7
                
                if (eax_22 == 0)
                    esi_7 = nullptr
                else
                    sub_401f60(&var_5c, (*(*arg2 + 0x3c))())
                    var_4.b = 0xc
                    var_c4 = 1
                    esi_7 = sub_420e30(eax_22, 4, &var_bc, &var_5c, (*(*arg2 + 0x40))())
                
                int32_t var_4_1 = 0xa
                
                if ((var_c4 & 1) != 0)
                    sub_401fb0(&var_5c)
                
                var_cc =
                    sub_421b10(result, &var_74, neg.d(sbb.d(ebx_3, ebx_3, eax_10 != 0)) + 7, esi_7)
                *sub_41ff70(arg1 + 8, &var_cc) = esi_7
            
            if (var_18 u>= 0x10)
                j__free(var_2c)
            
            if (var_78 u>= 0x10)
                j__free(var_8c.d)
            
            int32_t var_78_1 = 0xf
            int32_t var_7c_2 = 0
            var_8c = 0
            
            if (var_60_1 u>= 0x10)
                j__free(var_74.d)
            
            int32_t var_60_2 = 0xf
            int32_t var_64_2 = 0
            var_74 = 0
            
            if (var_30_1 u>= 0x10)
                j__free(var_44.d)
            
            int32_t var_30_2 = 0xf
            int32_t var_34_2 = 0
            var_44 = 0
    
    result_1 = var_bc.d
    edx_1 = var_a8
else
    edx_1 = var_a8
    result_1 = var_bc.d
    
    while (true)
        char* result_2 = &var_bc
        
        if (edx_1 u>= 0x10)
            result_2 = result_1
        
        char* result_3
        
        if (result_2[ecx_4] u>= 0x81)
            result_3 = &var_bc
            
            if (edx_1 u>= 0x10)
                result_3 = result_1
        
        char* result_4
        char* result_5
        
        if (result_2[ecx_4] u< 0x81 || result_3[ecx_4] u> 0x9f)
            result_4 = &var_bc
            
            if (edx_1 u>= 0x10)
                result_4 = result_1
            
            if (result_4[ecx_4] u>= 0xe0)
                result_5 = &var_bc
                
                if (edx_1 u>= 0x10)
                    result_5 = result_1
        
        if ((result_2[ecx_4] u< 0x81 || result_3[ecx_4] u> 0x9f)
                && (result_4[ecx_4] u< 0xe0 || result_5[ecx_4] u> 0xef))
            result = &var_bc
            
            if (edx_1 u>= 0x10)
                result = result_1
            
            if (result[ecx_4] == 0x40)
                break
            
            ecx_4 += 1
        else
            ecx_4 += 2
        
        if (ecx_4 s>= var_ac)
            goto label_41ddc8

if (edx_1 u>= 0x10)
    j__free(result_1)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_d4)
return result
