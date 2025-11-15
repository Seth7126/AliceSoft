// 函数: sub_41ea40
// 地址: 0x41ea40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = arg3
struct _EXCEPTION_REGISTRATION_RECORD** result

if (esi s< 0)
    result.b = 0
else if (esi s>= (***(*(arg1 + 4) + 8))(eax_2))
    result.b = 0
else
    result = (*(**(*(arg1 + 4) + 8) + 0x10))(esi)
    
    if (result != 5)
        result.b = 0
    else
        sub_6ca100(arg2, result)
        uint32_t eax_9 = (*(**(*(arg1 + 4) + 8) + 4))(esi)
        int32_t* ecx_4 = eax_9
        
        if (ecx_4 != 0)
            int32_t eax_12
            int32_t edx_1
            edx_1:eax_12 = mulu.dp.d(0xaaaaaaab, (*(*ecx_4 + 0x14))() u>> 2)
            eax_9 = edx_1 u>> 1
        
        sub_6ca100(arg2, eax_9)
        result = nullptr
        struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
        
        if (eax_9 s<= 0)
        label_41ebde:
            result.b = 1
        else
            int32_t ebx_1 = 0
            
            while (true)
                struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = 0xf
                int32_t var_1c_1 = 0
                char var_2c = 0
                int32_t var_8_1 = 0
                
                if (sub_4207f0(*(arg1 + 4), esi, result, &var_2c) != 0)
                    sub_6ca1a0(arg2, &var_2c)
                    int32_t* eax_17 = (*(**(*(arg1 + 4) + 8) + 4))(esi)
                    
                    if (eax_17 != 0 && ebx_1 s>= 0)
                        int32_t eax_19
                        int32_t edx_3
                        edx_3:eax_19 = sx.q((*(*eax_17 + 0x14))())
                        
                        if (ebx_1 s< (eax_19 + (edx_3 & 3)) s>> 2)
                            int32_t eax_23 = (*(*eax_17 + 0x18))()
                            
                            if (eax_23 != 0)
                                int32_t esi_2 = *(eax_23 + (ebx_1 << 2))
                                sub_6ca100(arg2, esi_2)
                                sub_6ca100(arg2, (*(**(*(arg1 + 4) + 8) + 0x34))(esi_2))
                                int32_t var_8_2 = 0xffffffff
                                sub_403320(&var_2c)
                                ebx_1 += 3
                                result = result_1 + 1
                                result_1 = result
                                
                                if (result s>= eax_9)
                                    goto label_41ebde
                                
                                esi = arg3
                                continue
                
                if (var_18_1 u< 0x10)
                    break
                
                sub_403160(var_2c.d, var_18_1 + 1, 1)
                break
            
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
