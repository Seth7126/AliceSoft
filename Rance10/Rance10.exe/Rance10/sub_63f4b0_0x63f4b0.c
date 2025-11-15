// 函数: sub_63f4b0
// 地址: 0x63f4b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729918
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** eax_3

if (arg2 s>= 0 && arg2 s< (*(arg1 + 0x1c) - *(arg1 + 0x18)) s>> 4)
    void* edx_2 = (arg2 << 4) + *(arg1 + 0x18)
    
    for (void* i = *(edx_2 + 4); i != *(edx_2 + 8); i += 0x14)
        if (*(i + 4) == arg3)
            struct _EXCEPTION_REGISTRATION_RECORD** ebx_1 = sub_63ec50(i, arg4)
            
            if (ebx_1 != 0)
                int32_t ecx_2 = ebx_1[2]
                int32_t edx_3 = *(arg1 + 0x14)
                eax_3 = ebx_1[3]
                
                if (ecx_2 u< edx_3 && eax_3 s> 0 && eax_3 + ecx_2 u<= edx_3
                        && sub_5f23c0(arg1 + 4, ecx_2).b != 0)
                    uint8_t* var_1c
                    sub_431b80(&var_1c, eax_3)
                    int32_t var_8_1 = 0
                    uint8_t* ecx_5 = var_1c
                    int32_t var_18
                    uint32_t eax_8 = var_18 - ecx_5
                    
                    if (sub_5f2320(arg1 + 4, ecx_5, eax_8) != 0)
                        int32_t eax_13
                        int32_t edx_4
                        edx_4:eax_13 = sx.q((&ebx_1[1]->Handler + 3) & 0xfffffff8)
                        sub_405950(arg6, ((((eax_13 + (edx_4 & 7)) s>> 3) + 3) & 0xfffffffc) * arg3)
                        int32_t* ecx_8 = *(arg1 + 0x28)
                        
                        if (ecx_8 != 0
                                && (*(*ecx_8 + 8))(*arg6, arg6[1] - *arg6, var_1c, eax_8) != 0)
                            *arg5 = ebx_1[1]
                            sub_4059a0(&var_1c)
                            int32_t eax_23
                            eax_23.b = 1
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_23
                    
                    sub_4059a0(&var_1c)
                    int32_t eax_24
                    eax_24.b = 0
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_24
            
            break

eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
