// 函数: sub_5bc1a0
// 地址: 0x5bc1a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73fae3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_ac = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edx = arg1
void* var_68 = edx
int32_t* result = *arg3
int32_t ecx_1 = arg3[1]
int32_t* result_1 = result
int32_t var_a0 = ecx_1

if (result != ecx_1)
    while (true)
        void* edi_1 = *result
        int32_t** esi_1 = *(edi_1 + 0x24)
        int32_t edi_2 = *(edi_1 + 0x28)
        
        if (esi_1 != edi_2)
            while (true)
                int128_t var_3c
                int128_t* var_64_1 = &var_3c
                __builtin_memset(&var_3c, 0, 0x24)
                int32_t var_70_1 = 0
                int32_t** eax_4 = esi_1
                int32_t** var_74_1 = esi_1
                
                while (true)
                    result = *eax_4
                    void* var_90
                    __builtin_memset(&var_90, 0, 0x18)
                    int32_t var_8_1 = 0
                    var_8_1.b = 1
                    
                    if (result s>= 0)
                        int32_t eax_5
                        int32_t edx_1
                        edx_1:eax_5 = muls.dp.d(0x38e38e39, *(edx + 0x70) - *(edx + 0x6c))
                        int32_t edx_2 = edx_1 s>> 3
                        
                        if (result s< (edx_2 u>> 0x1f) + edx_2)
                            int32_t ecx_6 = *(var_68 + 0x6c)
                            int32_t eax_8 = *(ecx_6 + ((result * 9 + 3) << 2) - 4)
                            *var_64_1 = *(ecx_6 + ((result * 9 + 3) << 2) - 0xc)
                            *(var_64_1 + 8) = eax_8
                            sub_4274a0(&var_90, ecx_6 + ((result * 9 + 3) << 2))
                            void* var_84
                            sub_4274a0(&var_84, ecx_6 + ((result * 9 + 6) << 2))
                            void* ecx_10 = var_84
                            
                            if (ecx_10 != 0)
                                int32_t var_7c_1
                                sub_403160(ecx_10, (var_7c_1 - ecx_10) s>> 2, 4)
                                var_84 = nullptr
                                int32_t var_80_1 = 0
                                int32_t var_7c_2 = 0
                            
                            int32_t var_8_2 = 0xffffffff
                            void* ecx_11 = var_90
                            
                            if (ecx_11 != 0)
                                int32_t var_88_1
                                sub_403160(ecx_11, (var_88_1 - ecx_11) s>> 2, 4)
                                var_90 = nullptr
                                int32_t var_8c_1 = 0
                                int32_t var_88_2 = 0
                            
                            int32_t ecx_13 = var_70_1 + 1
                            var_64_1 += 0xc
                            eax_4 = &var_74_1[0xa]
                            edx = var_68
                            var_70_1 = ecx_13
                            var_74_1 = eax_4
                            
                            if (ecx_13 s>= 3)
                                break
                            
                            continue
                    
                    result.b = 0
                    goto label_5bc3eb
                
                int128_t var_60 = var_3c
                int128_t var_50
                __builtin_memset(&var_50, 0, 0x14)
                sub_5bcaf0(arg2, &var_60)
                edx = var_68
                esi_1 = &esi_1[0x1e]
                
                if (esi_1 == edi_2)
                    break
            
            result = result_1
            ecx_1 = var_a0
        
        result = &result[1]
        result_1 = result
        
        if (result == ecx_1)
            break

result.b = 1
label_5bc3eb:
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
