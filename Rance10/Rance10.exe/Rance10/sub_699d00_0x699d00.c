// 函数: sub_699d00
// 地址: 0x699d00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_748458
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_78 = arg2
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 == 0 || arg3 == 0)
    result.b = 0
else
    result = (*(*arg2 + 0x28))(eax_2)
    
    if (result == 0)
        result.b = 0
    else
        *(arg1 + 0x74) = arg3
        (**arg3)()
        int32_t eax_8 = (*(**(arg1 + 0x74) + 0xc))()
        
        if (eax_8 != 1)
            result = (*(**(arg1 + 0x74) + 0xc))()
        
        if (eax_8 != 1 && result != 2)
            result.b = 0
        else
            int32_t eax_13 = (*(**(arg1 + 0x74) + 0x1c))()
            
            if (eax_13 != 8)
                result = (*(**(arg1 + 0x74) + 0x1c))()
            
            if (eax_13 != 8 && result != 0x10)
                result.b = 0
            else
                int32_t eax_18 = (*(**(arg1 + 0x74) + 0x10))()
                
                if (eax_18 != 0x5622)
                    result = (*(**(arg1 + 0x74) + 0x10))()
                
                if (eax_18 != 0x5622 && result != 0xac44)
                    result.b = 0
                else
                    int32_t eax_23 = (*(*arg2 + 0x28))()
                    int32_t* ecx_9 = *(arg1 + 0x74)
                    *(arg1 + 0x30) = eax_23
                    uint32_t eax_24 = sub_484fb0(ecx_9, eax_23)
                    bool cond:0_1 = *(arg1 + 0x14) == 0
                    *(arg1 + 0x2c) = eax_24
                    int32_t eax_43
                    
                    if (not(cond:0_1))
                        int32_t* ecx_10 = *(arg1 + 0x74)
                        int16_t var_38 = 1
                        int16_t eax_27 = (*(*ecx_10 + 0xc))()
                        int32_t eax_30 = (*(**(arg1 + 0x74) + 0x10))()
                        int16_t eax_33 = (*(**(arg1 + 0x74) + 0x1c))()
                        int16_t var_2a_1 = eax_33
                        int32_t* ecx_14 = *(arg1 + 0x14)
                        int128_t var_74
                        __builtin_memset(&var_74, 0, 0x20)
                        int32_t eax_36
                        int32_t edx_2
                        edx_2:eax_36 = sx.q(zx.d(eax_33) * zx.d(eax_27))
                        var_74.d = 0x24
                        var_74:4.d = 0x8188
                        int16_t eax_38 = ((eax_36 + (edx_2 & 7)) s>> 3).w
                        int16_t var_2c_1 = eax_38
                        int128_t var_64 = data_74e6f0
                        int32_t var_30_1 = zx.d(eax_38) * eax_30
                        int16_t var_28_1 = 0
                        var_74:8.d = *(arg1 + 0x30)
                        var_64.d = &var_38
                        eax_43 = (*(*ecx_14 + 0xc))(ecx_14, &var_74, arg1 + 0x18, 0)
                    
                    if (cond:0_1 || eax_43 s>= 0)
                        int32_t edx_5 = (**arg2)()
                        void* var_7c = arg1
                        void var_84
                        ___std_bulk_submit_threadpool_work@8(arg1 + 0x34, 
                            sub_69b0a0(&var_7c, edx_5, &var_84, &var_7c, &var_78))
                        ??0?$WriteOnlyArray@E$00@Platform@@I$AAA@PAEI@Z(&var_84)
                        result.b = 1
                    else
                        sub_4073f0(0x76fa34)
                        
                        if (**(arg1 + 0xc) == 0)
                            void var_50
                            sub_403360(&var_50, "DirectSound")
                            int32_t var_14_1 = 0
                            sub_6c52e0(&var_50)
                            sub_403320(&var_50)
                            **(arg1 + 0xc) = 1
                        
                        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
