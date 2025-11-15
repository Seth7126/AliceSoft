// 函数: sub_575150
// 地址: 0x575150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c980
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t var_8_1 = 0

if (arg1[1] == 0)
    int32_t var_34 = arg5
    sub_5753a0(arg1, arg2, 1, *arg1, arg1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2

int32_t* edi = *arg1
int32_t* ecx_2 = arg4

if (arg3 != *edi)
    if (arg3 != edi)
        ecx_2 = *ecx_2
        int32_t eax_8 = arg3[4]
        int32_t* var_18_1 = ecx_2
        bool cond:0_1 = eax_8 u>= ecx_2
        
        if (eax_8 u> ecx_2)
            void** var_1c = arg3
            sub_429da0(&var_1c)
            void** eax_9 = var_1c
            ecx_2 = var_18_1
            
            if (eax_9[4] u< ecx_2)
                int32_t* ecx_10 = eax_9[2]
                int32_t var_34_3 = arg5
                
                if (*(ecx_10 + 0xd) == 0)
                    sub_5753a0(arg1, arg2, 1, arg3, ecx_10)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return arg2
                
                sub_5753a0(arg1, arg2, 0, eax_9, ecx_10)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg2
            
            cond:0_1 = arg3[4] u>= ecx_2
        
        if (not(cond:0_1))
            void** i = arg3
            
            if (*(arg3 + 0xd) == 0)
                void** i_1 = arg3[2]
                
                if (*(i_1 + 0xd) != 0)
                    void** i_3 = arg3[1]
                    
                    if (*(i_3 + 0xd) == 0)
                        while (i == i_3[2])
                            i = i_3
                            i_3 = i_3[1]
                            
                            if (*(i_3 + 0xd) != 0)
                                break
                    
                    i = i_3
                else
                    i = i_1
                    void** i_2 = *i
                    
                    while (*(i_2 + 0xd) == 0)
                        i = i_2
                        i_2 = *i
                
                ecx_2 = var_18_1
            
            if (i == edi || ecx_2 u< i[4])
                int32_t* ecx_16 = arg3[2]
                int32_t var_34_4 = arg5
                
                if (*(ecx_16 + 0xd) == 0)
                    sub_5753a0(arg1, arg2, 1, i, ecx_16)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return arg2
                
                sub_5753a0(arg1, arg2, 0, arg3, ecx_16)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg2
    else
        void** edx_1 = edi[2]
        
        if (edx_1[4] u< *ecx_2)
            int32_t var_34_2 = arg5
            sub_5753a0(arg1, arg2, 0, edx_1, ecx_2)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg2
else if (*ecx_2 u< arg3[4])
    int32_t var_34_1 = arg5
    sub_5753a0(arg1, arg2, 1, arg3, ecx_2)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2

int32_t var_34_5 = arg5
int32_t var_8_2 = 0xffffffff
int32_t* var_38_5 = arg4
void*** eax_16 = arg2
void** var_20
*eax_16 = *sub_5755b0(arg1, &var_20, ecx_2)
fsbase->NtTib.ExceptionList = ExceptionList
return eax_16
