// 函数: sub_59fdb0
// 地址: 0x59fdb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 s< 0)
    result.b = 0
else
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = muls.dp.d(0x4da637d, *(arg1 + 8) - *(arg1 + 4))
    int32_t edx_2 = edx_1 s>> 4
    
    if (arg2 s>= (edx_2 u>> 0x1f) + edx_2)
        result.b = 0
    else
        int32_t eax_6 = arg2 * 0x34c
        
        if (eax_6 == neg.d(*(arg1 + 4)))
            result.b = 0
        else
            void* eax_7 = &(eax_6 + *(arg1 + 4))[2]
            struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            sub_403590(&var_2c, eax_7, 0, 0xffffffff)
            int32_t var_8_1 = 0
            int32_t edi_1 = *(arg1 + 8)
            void* esi_1 = *(arg1 + 4)
            
            if (esi_1 != edi_1)
                int32_t ecx_3 = var_1c_1
                void* ebx_1 = esi_1 + 0x288
                
                do
                    char* eax_8 = &var_2c
                    
                    if (var_18_1 u>= 0x10)
                        eax_8 = var_2c.d
                    
                    int32_t* eax_9
                    
                    if (*ebx_1 u< 0x10)
                        eax_9 = ebx_1 - 0x14
                    else
                        eax_9 = *(ebx_1 - 0x14)
                    
                    int32_t eax_10 = ecx_3
                    
                    if (*(ebx_1 - 4) u< ecx_3)
                        eax_10 = *(ebx_1 - 4)
                    
                    int32_t ecx_5 = var_1c_1
                    
                    if (sub_406ac0(eax_10, eax_8, eax_9, eax_10) == 0)
                        int32_t eax_12 = *(ebx_1 - 4)
                        
                        if (eax_12 u>= ecx_5 && eax_12 u<= ecx_5 && ebx_1 - 0x14 != arg3)
                            sub_403590(ebx_1 - 0x14, arg3, 0, 0xffffffff)
                            ecx_5 = var_1c_1
                    
                    char* eax_14 = &var_2c
                    
                    if (var_18_1 u>= 0x10)
                        eax_14 = var_2c.d
                    
                    int32_t* eax_15
                    
                    if (*(ebx_1 - 0x188) u< 0x10)
                        eax_15 = ebx_1 - 0x19c
                    else
                        eax_15 = *(ebx_1 - 0x19c)
                    
                    int32_t edx_5 = *(ebx_1 - 0x18c)
                    int32_t eax_16 = ecx_5
                    
                    if (edx_5 u< ecx_5)
                        eax_16 = edx_5
                    
                    int32_t ecx_8 = var_1c_1
                    
                    if (sub_406ac0(eax_16, eax_14, eax_15, eax_16) == 0)
                        int32_t eax_18 = *(ebx_1 - 0x18c)
                        
                        if (eax_18 u>= ecx_8 && eax_18 u<= ecx_8 && ebx_1 - 0x19c != arg3)
                            sub_403590(ebx_1 - 0x19c, arg3, 0, 0xffffffff)
                            ecx_8 = var_1c_1
                    
                    int32_t* eax_20 = &var_2c
                    
                    if (var_18_1 u>= 0x10)
                        eax_20 = var_2c.d
                    
                    void* eax_21
                    
                    if (*(ebx_1 - 0x168) u< 0x10)
                        eax_21 = ebx_1 - 0x17c
                    else
                        eax_21 = *(ebx_1 - 0x17c)
                    
                    int32_t edx_8 = *(ebx_1 - 0x16c)
                    int32_t eax_22 = ecx_8
                    
                    if (edx_8 u< ecx_8)
                        eax_22 = edx_8
                    
                    ecx_3 = var_1c_1
                    
                    if (sub_406ac0(eax_22, eax_20, eax_21, eax_22) == 0)
                        int32_t eax_24 = *(ebx_1 - 0x16c)
                        
                        if (eax_24 u>= ecx_3 && eax_24 u<= ecx_3 && ebx_1 - 0x17c != arg3)
                            sub_403590(ebx_1 - 0x17c, arg3, 0, 0xffffffff)
                            ecx_3 = var_1c_1
                    
                    esi_1 += 0x34c
                    ebx_1 += 0x34c
                while (esi_1 != edi_1)
            
            if (eax_7 != arg3)
                sub_403590(eax_7, arg3, 0, 0xffffffff)
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c.d, var_18_1 + 1, 1)
            
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
