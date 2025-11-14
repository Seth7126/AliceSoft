// 函数: sub_6967a0
// 地址: 0x6967a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6d19e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t var_8_1 = 0

if (data_75de98 == 0)
    int32_t var_30 = arg4
    sub_6969d0(arg2, 1, data_75de94, arg1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2

int32_t* ebx = data_75de94
void** arg_c
int32_t* edi = arg_c
int32_t* var_34_1

if (arg3 != *ebx)
    if (arg3 != ebx)
        int32_t eax_8 = *edi
        arg1 = arg3[4]
        bool cond:0_1 = arg1 u>= eax_8
        
        if (arg1 u> eax_8)
            arg_c = arg3
            sub_418580(&arg_c)
            void** eax_9 = arg_c
            int32_t ecx_7 = *edi
            
            if (eax_9[4] u< ecx_7)
                int32_t* ecx_8 = eax_9[2]
                int32_t var_30_3 = arg4
                var_34_1 = ecx_8
                
                if (*(ecx_8 + 0xd) == 0)
                    goto label_69682c
                
                sub_6969d0(arg2, 0, eax_9, var_34_1)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg2
            
            arg1 = arg3[4]
            cond:0_1 = arg1 u>= ecx_7
        
        if (not(cond:0_1))
            arg_c = arg3
            sub_418380(&arg_c)
            void** eax_12 = arg_c
            
            if (eax_12 != ebx)
                arg1 = *edi
            
            if (eax_12 == ebx || arg1 u< eax_12[4])
                int32_t* ecx_12 = arg3[2]
                int32_t var_30_4 = arg4
                
                if (*(ecx_12 + 0xd) == 0)
                    sub_6969d0(arg2, 1, eax_12, ecx_12)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return arg2
                
                sub_6969d0(arg2, 0, arg3, ecx_12)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg2
    else
        arg1 = ebx[2]
        
        if (arg1[4] u< *edi)
            int32_t var_30_2 = arg4
            sub_6969d0(arg2, 0, arg1, arg1)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg2
else if (*edi u< arg3[4])
    int32_t var_30_1 = arg4
    var_34_1 = arg1
label_69682c:
    sub_6969d0(arg2, 1, arg3, var_34_1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2
int32_t var_30_5 = arg4
int32_t var_8_2 = 0xffffffff
int32_t* var_34_4 = edi
void*** eax_16 = arg2
void* var_1c
*eax_16 = *sub_696b50(&var_1c, arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return eax_16
