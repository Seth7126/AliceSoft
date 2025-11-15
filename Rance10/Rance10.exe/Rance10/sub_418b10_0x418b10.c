// 函数: sub_418b10
// 地址: 0x418b10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7284d1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
void* var_104 = esi
int32_t i_2 = (*(**(esi + 8) + 0x28))(eax_2) - 1
char* result

if (i_2 s> 0)
    void* eax_5 = esi + 0x10
    result = sub_419350(eax_5, i_2)
    
    if (i_2 s> 0)
        int32_t edx_1 = i_2 - 1
        int32_t ebx_1 = 0
        int32_t var_100_1 = edx_1
        int32_t i
        
        do
            int32_t eax_7 = (*(**(esi + 8) + 0x2c))(edx_1)
            char* eax_9 = (***(esi + 0xc))((*(**(esi + 8) + 0x14))(eax_7))
            
            if (eax_9 != 0)
                bool cond:0_1 = *eax_9 != 0
                char* result_2 = 0xf
                int32_t var_34_1 = 0
                char var_44 = 0
                void* eax_15
                
                if (cond:0_1)
                    char* eax_16 = eax_9
                    char j
                    
                    do
                        j = *eax_16
                        eax_16 = &eax_16[1]
                    while (j != 0)
                    eax_15 = eax_16 - &eax_16[1]
                else
                    eax_15 = nullptr
                
                sub_403490(&var_44, eax_9, eax_15)
                int32_t var_8_3 = 3
                char var_8c
                int32_t* var_108_1 = sub_418ff0(&var_8c, &var_44)
                var_8_3.b = 4
                bool cond:1_1 = *eax_9 != 0
                int32_t var_18_1 = 0xf
                int32_t var_1c_1 = 0
                char var_2c = 0
                void* ecx_14
                
                if (cond:1_1)
                    char* ecx_15 = eax_9
                    int32_t* eax_17
                    
                    do
                        eax_17.b = *ecx_15
                        ecx_15 = &ecx_15[1]
                    while (eax_17.b != 0)
                    ecx_14 = ecx_15 - &ecx_15[1]
                else
                    ecx_14 = nullptr
                
                sub_403490(&var_2c, eax_9, ecx_14)
                var_8_3.b = 5
                int32_t var_f4 = eax_7
                int32_t var_dc_1 = 0xf
                int32_t var_e0_1 = 0
                char var_f0 = 0
                sub_403590(&var_f0, &var_2c, 0, 0xffffffff)
                var_8_3.b = 6
                int32_t var_c4_1 = 0xf
                int32_t var_c8_1 = 0
                char var_d8 = 0
                sub_403590(&var_d8, var_108_1, 0, 0xffffffff)
                sub_418f10(*eax_5 + ebx_1, &var_f4)
                sub_418e90(&var_f4)
                
                if (var_18_1 u>= 0x10)
                    sub_403160(var_2c.d, var_18_1 + 1, 1)
                
                int32_t var_18_2 = 0xf
                int32_t var_1c_2 = 0
                var_2c = 0
                int32_t var_78
                
                if (var_78 u>= 0x10)
                    sub_403160(var_8c.d, var_78 + 1, 1)
                
                int32_t var_8_4 = 0xffffffff
                result = result_2
                var_78 = 0xf
                int32_t var_7c_1 = 0
                var_8c = 0
                
                if (result u>= 0x10)
                    result = sub_403160(var_44.d, &result[1], 1)
                
                int32_t var_30_1 = 0xf
                int32_t var_34_2 = 0
                var_44 = 0
            else
                char* result_1 = 0xf
                char* var_64_1 = eax_9
                char var_74 = eax_9.b
                char* var_8_1 = eax_9
                int32_t var_48_1 = 0xf
                char* var_4c_1 = eax_9
                char var_5c = eax_9.b
                var_8_1.b = 1
                int32_t var_c0 = eax_7
                int32_t var_a8_1 = 0xf
                char* var_ac_1 = eax_9
                char var_bc = 0
                sub_403590(&var_bc, &var_5c, eax_9, 0xffffffff)
                var_8_1.b = 2
                int32_t var_90_1 = 0xf
                char* var_94_1 = eax_9
                char var_a4 = 0
                sub_403590(&var_a4, &var_74, eax_9, 0xffffffff)
                sub_418f10(*eax_5 + ebx_1, &var_c0)
                sub_418e90(&var_c0)
                
                if (var_48_1 u>= 0x10)
                    sub_403160(var_5c.d, var_48_1 + 1, 1)
                
                int32_t var_8_2 = 0xffffffff
                result = result_1
                
                if (result u>= 0x10)
                    result = sub_403160(var_74.d, &result[1], 1)
            
            ebx_1 += 0x34
            esi = var_104
            edx_1 = var_100_1 - 1
            var_100_1 = edx_1
            i = i_2
            i_2 -= 1
        while (i != 1)
else
    int32_t edi = *(esi + 0x14)
    
    for (void* i_1 = *(esi + 0x10); i_1 != edi; i_1 += 0x34)
        sub_418e90(i_1)
    
    result = *(var_104 + 0x10)
    *(var_104 + 0x14) = result

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
