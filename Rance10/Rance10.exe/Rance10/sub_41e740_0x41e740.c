// 函数: sub_41e740
// 地址: 0x41e740
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728c70
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_84 = ebx
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg3 s< 0)
    result.b = 0
else if (arg3 s>= (***(*(ebx + 4) + 8))(eax_2))
    result.b = 0
else
    result = (*(**(*(ebx + 4) + 8) + 0x10))(arg3)
    
    if (result != 4)
        result.b = 0
    else
        sub_6ca100(arg2, result)
        void* esi_1 = *(ebx + 4)
        int32_t eax_9 = (*(**(esi_1 + 0xc) + 0x20))((*(**(esi_1 + 8) + 0x18))(arg3))
        void* esi_2 = arg2
        sub_6ca100(esi_2, eax_9)
        int32_t var_8_1 = 0
        void var_74
        sub_6ca1a0(esi_2, sub_4201d0(*(ebx + 4), &var_74, arg3))
        int32_t var_8_2 = 0xffffffff
        sub_403320(&var_74)
        int32_t edi_1 = 0
        
        if (eax_9 s<= 0)
        label_41e9d2:
            result.b = 1
        else
            while (true)
                struct _EXCEPTION_REGISTRATION_RECORD** var_30_1 = 0xf
                int32_t var_34_1 = 0
                char var_44 = 0
                int32_t var_8_3 = 1
                
                if (sub_420720(*(ebx + 4), arg3, edi_1, &var_44) != 0)
                    sub_6ca1a0(esi_2, &var_44)
                    int32_t var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    char var_2c = 0
                    var_8_3.b = 2
                    void* esi_3 = *(ebx + 4)
                    char* edx_3 =
                        (*(**(esi_3 + 0xc) + 0x28))((*(**(esi_3 + 8) + 0x18))(arg3), edi_1)
                    
                    if (edx_3 != 0)
                        void* ecx_13
                        
                        if (*edx_3 != 0)
                            char* ecx_14 = edx_3
                            char* eax_14
                            
                            do
                                eax_14.b = *ecx_14
                                ecx_14 = &ecx_14[1]
                            while (eax_14.b != 0)
                            ecx_13 = ecx_14 - &ecx_14[1]
                        else
                            ecx_13 = nullptr
                        
                        sub_403490(&var_2c, edx_3, ecx_13)
                        esi_2 = arg2
                        sub_6ca1a0(esi_2, &var_2c)
                        void* ecx_17 = *(ebx + 4)
                        int32_t var_7c = 0
                        
                        if (sub_420630(ecx_17, arg3, edi_1, &var_7c) != 0)
                            sub_6ca100(esi_2, var_7c)
                            int32_t var_48_1 = 0xf
                            int32_t var_4c_1 = 0
                            char var_5c = 0
                            var_8_3.b = 3
                            
                            if (sub_422800(*(ebx + 4), arg3, edi_1, &var_5c) != 0)
                                sub_6ca1a0(esi_2, &var_5c)
                                int32_t var_8c
                                
                                if (sub_4206e0(*(ebx + 4), arg3, edi_1, &var_8c) != 0)
                                    ebx.b = sub_41f3b0(var_8c)
                                    sub_6ca0a0(esi_2, ebx.b)
                                    
                                    if (ebx.b == 0)
                                        sub_6ca100(esi_2, 0)
                                        ebx = var_84
                                    label_41e9a9:
                                        sub_403320(&var_5c)
                                        sub_403320(&var_2c)
                                        int32_t var_8_4 = 0xffffffff
                                        sub_403320(&var_44)
                                        edi_1 += 1
                                        
                                        if (edi_1 s>= eax_9)
                                            goto label_41e9d2
                                        
                                        continue
                                    else
                                        ebx = var_84
                                        void* ecx_24 = *(ebx + 4)
                                        var_7c = 0xffffffff
                                        
                                        if (sub_420630(ecx_24, arg3, edi_1, &var_7c) != 0)
                                            sub_6ca100(esi_2, 
                                                (*(**(*(ebx + 4) + 8) + 0x34))(var_7c))
                                            goto label_41e9a9
                            
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
