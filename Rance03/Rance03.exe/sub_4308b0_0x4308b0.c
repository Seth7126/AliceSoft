// 函数: sub_4308b0
// 地址: 0x4308b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6b5570
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t var_8_1 = 0

if (arg1[1] == 0)
    int32_t var_34 = arg5
    sub_420680(arg1, arg2, 1, *arg1, arg1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2

int32_t* edi = *arg1
int32_t* ecx_2 = arg4

if (arg3 != *edi)
    if (arg3 != edi)
        int32_t* eax_8 = *ecx_2
        ecx_2 = arg3[4]
        bool cond:0_1 = ecx_2 s>= eax_8
        void** var_18
        
        if (ecx_2 s> eax_8)
            var_18 = arg3
            sub_418580(&var_18)
            void** eax_9 = var_18
            
            if (eax_9[4] s< eax_8)
                int32_t* ecx_11 = eax_9[2]
                int32_t var_34_3 = arg5
                
                if (*(ecx_11 + 0xd) == 0)
                    sub_420680(arg1, arg2, 1, arg3, ecx_11)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return arg2
                
                sub_420680(arg1, arg2, 0, eax_9, ecx_11)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg2
            
            ecx_2 = arg3[4]
            cond:0_1 = ecx_2 s>= eax_8
        
        if (not(cond:0_1))
            var_18 = arg3
            sub_418380(&var_18)
            void** eax_13 = var_18
            
            if (eax_13 != edi)
                ecx_2 = eax_8
            
            if (eax_13 == edi || ecx_2 s< eax_13[4])
                int32_t* ecx_18 = arg3[2]
                int32_t var_34_4 = arg5
                
                if (*(ecx_18 + 0xd) == 0)
                    sub_420680(arg1, arg2, 1, eax_13, ecx_18)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return arg2
                
                sub_420680(arg1, arg2, 0, arg3, ecx_18)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg2
    else
        void** edx_1 = edi[2]
        
        if (edx_1[4] s< *ecx_2)
            int32_t var_34_2 = arg5
            sub_420680(arg1, arg2, 0, edx_1, ecx_2)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg2
else if (*ecx_2 s< arg3[4])
    int32_t var_34_1 = arg5
    sub_420680(arg1, arg2, 1, arg3, ecx_2)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2

int32_t var_34_5 = arg5
int32_t var_8_2 = 0xffffffff
int32_t* var_38_5 = arg4
void*** eax_17 = arg2
void** var_20
*eax_17 = *sub_430ad0(arg1, &var_20, ecx_2)
fsbase->NtTib.ExceptionList = ExceptionList
return eax_17
