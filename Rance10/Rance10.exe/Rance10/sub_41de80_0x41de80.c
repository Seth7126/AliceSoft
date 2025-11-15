// 函数: sub_41de80
// 地址: 0x41de80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728c28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_64 = ebx
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg3 s< 0)
    result.b = 0
else if (arg3 s>= (***(*(ebx + 4) + 8))(eax_2))
    result.b = 0
else
    result = (*(**(*(ebx + 4) + 8) + 0x10))(arg3)
    
    if (result != 0)
        result.b = 0
    else
        sub_6ca100(arg2, result)
        int32_t eax_9 = (*(**(*(ebx + 4) + 0xc) + 0x14))()
        sub_6ca100(arg2, eax_9)
        int32_t esi_1 = 0
        
        if (eax_9 s<= 0)
        label_41e0a5:
            result.b = 1
        else
            while (true)
                struct _EXCEPTION_REGISTRATION_RECORD** var_30_1 = 0xf
                int32_t var_34_1 = 0
                char var_44 = 0
                int32_t var_8_1 = 0
                void* eax_10 = *(ebx + 4)
                void* const var_60 = eax_10
                int32_t* eax_12 = (*(**(eax_10 + 0xc) + 0x18))(esi_1)
                
                if (eax_12 != 0)
                    int32_t eax_13 = (**eax_12)()
                    int32_t var_6c
                    
                    if (sub_41fb20(var_60, esi_1, &var_6c) != 0)
                        sub_420330(eax_13, var_6c, &var_44)
                        sub_6ca1a0(arg2, &var_44)
                        int32_t var_18_1 = 0xf
                        int32_t var_1c_1 = 0
                        char var_2c = 0
                        var_8_1.b = 1
                        
                        if (sub_41fbd0(*(ebx + 4), esi_1, &var_2c) != 0)
                            sub_6ca1a0(arg2, &var_2c)
                            void* ecx_12 = *(ebx + 4)
                            var_60 = nullptr
                            
                            if (sub_41fb20(ecx_12, esi_1, &var_60) != 0)
                                sub_6ca100(arg2, var_60)
                                int32_t var_48_1 = 0xf
                                int32_t var_4c_1 = 0
                                char var_5c = 0
                                var_8_1.b = 2
                                
                                if (sub_41fb80(*(ebx + 4), esi_1, &var_5c) != 0)
                                    sub_6ca1a0(arg2, &var_5c)
                                    int32_t var_74
                                    
                                    if (sub_41faf0(*(ebx + 4), esi_1, &var_74) != 0)
                                        ebx.b = sub_41f3b0(var_74)
                                        sub_6ca0a0(arg2, ebx.b)
                                        
                                        if (ebx.b == 0)
                                            sub_6ca100(arg2, 0)
                                            ebx = var_64
                                        label_41e07f:
                                            sub_403320(&var_5c)
                                            sub_403320(&var_2c)
                                            int32_t var_8_2 = 0xffffffff
                                            sub_403320(&var_44)
                                            esi_1 += 1
                                            
                                            if (esi_1 s>= eax_9)
                                                goto label_41e0a5
                                            
                                            continue
                                        else
                                            ebx = var_64
                                            var_60 = 0xffffffff
                                            
                                            if (sub_41fb20(*(ebx + 4), esi_1, &var_60) != 0)
                                                sub_6ca100(arg2, 
                                                    (*(**(*(ebx + 4) + 8) + 0x34))(var_60))
                                                goto label_41e07f
                                
                                sub_403320(&var_5c)
                        
                        if (var_18_1 u>= 0x10)
                            sub_403160(var_2c.d, var_18_1 + 1, 1)
                        
                        int32_t var_18_2 = 0xf
                        int32_t var_1c_2 = 0
                        var_2c = 0
                
                if (var_30_1 u< 0x10)
                    break
                
                sub_403160(var_44.d, var_30_1 + 1, 1)
                break
            
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
