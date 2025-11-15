// 函数: sub_41e500
// 地址: 0x41e500
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728cb0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_58 = ebx
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg3 s< 0)
label_41e715:
    result.b = 0
else if (arg3 s>= (***(*(ebx + 4) + 8))(eax_2))
label_41e715_1:
    result.b = 0
else
    result = (*(**(*(ebx + 4) + 8) + 0x10))(arg3)
    
    if (result != 3)
    label_41e715_2:
        result.b = 0
    else
        sub_6ca100(arg2, result)
        uint32_t eax_9 = (*(**(*(ebx + 4) + 8) + 4))(arg3)
        int32_t* ecx_4 = eax_9
        
        if (ecx_4 != 0)
            eax_9 = (*(*ecx_4 + 0x14))() u>> 2
        
        sub_6ca100(arg2, eax_9)
        int32_t var_8_1 = 0
        void var_44
        sub_6ca1a0(arg2, sub_41fce0(*(ebx + 4), &var_44, arg3, 0))
        int32_t var_8_2 = 0xffffffff
        sub_403320(&var_44)
        int32_t esi_1 = 0
        
        if (eax_9 u> 0)
            while (true)
                result = (*(**(*(ebx + 4) + 8) + 4))(arg3)
                struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
                
                if (result == 0)
                    goto label_41e715_2
                
                if (esi_1 s< 0)
                    goto label_41e715_2
                
                int32_t eax_16
                int32_t edx_2
                edx_2:eax_16 = sx.q((*result)->__offset(0x14).d())
                
                if (esi_1 s>= (eax_16 + (edx_2 & 3)) s>> 2)
                    goto label_41e715_2
                
                result = (*result_1)->__offset(0x18).d()
                
                if (result == 0)
                    goto label_41e715_2
                
                sub_6ca100(arg2, result[esi_1])
                struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = 0xf
                int32_t var_1c_1 = 0
                char var_2c = 0
                int32_t var_8_3 = 1
                
                if (sub_422890(*(ebx + 4), arg3, esi_1, &var_2c) != 0)
                    sub_6ca1a0(arg2, &var_2c)
                    void* ebx_1 = *(ebx + 4)
                    int32_t eax_22
                    
                    if ((*(**(ebx_1 + 8) + 0x20))(arg3) s<= 0)
                        eax_22 = (*(**(ebx_1 + 8) + 0x24))(arg3)
                    else
                        eax_22 = 0x4f
                    
                    ebx_1.b = sub_41f3b0(eax_22)
                    bool var_45 = ebx_1.b != 0
                    sub_4263a0(arg2 + 4, &var_45)
                    
                    if (ebx_1.b == 0)
                        sub_6ca100(arg2, 0)
                        ebx = var_58
                    label_41e6e4:
                        int32_t var_8_4 = 0xffffffff
                        sub_403320(&var_2c)
                        esi_1 += 1
                        
                        if (esi_1 s>= eax_9)
                            break
                        
                        continue
                    else
                        ebx = var_58
                        void* ecx_20 = *(ebx + 4)
                        result_1 = 0xffffffff
                        
                        if (sub_420630(ecx_20, arg3, esi_1, &result_1) != 0)
                            sub_6ca100(arg2, (*(**(*(ebx + 4) + 8) + 0x34))(result_1))
                            goto label_41e6e4
                
                if (var_18_1 u< 0x10)
                    goto label_41e715_2
                
                sub_403160(var_2c.d, var_18_1 + 1, 1)
                goto label_41e715_2
        
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
