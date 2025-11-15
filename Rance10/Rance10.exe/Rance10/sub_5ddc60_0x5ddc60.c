// 函数: sub_5ddc60
// 地址: 0x5ddc60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7416d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_34
int32_t var_8_1 = 0

if (arg1[1] == 0)
    int32_t var_38 = arg5
    sub_5ddeb0(arg1, arg2, 1, *arg1, arg1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2

int32_t* ecx_2 = *arg1
int32_t* ecx_3

if (arg3 == *ecx_2)
    char eax_6
    eax_6, ecx_3 = sub_5dd960(arg4, &arg3[4])
    
    if (eax_6 != 0)
        int32_t var_38_2 = arg5
        sub_5ddeb0(arg1, arg2, 1, arg3, ecx_3)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
else if (arg3 != ecx_2)
    char eax_14 = sub_5dd960(arg4, &arg3[4])
    void** var_18
    char eax_17
    int32_t* ecx_11
    void** esi_4
    
    if (eax_14 != 0)
        var_18 = arg3
        sub_429da0(&var_18)
        esi_4 = var_18
        eax_17, ecx_11 = sub_5dd960(&esi_4[4], arg4)
    
    int32_t* var_3c_7
    int32_t* ecx_12
    
    if (eax_14 != 0 && eax_17 != 0)
        int32_t var_38_7 = arg5
        var_3c_7 = ecx_11
        ecx_12 = arg1
        
        if (*(esi_4[2] + 0xd) != 0)
            goto label_5ddd98
        
        sub_5ddeb0(ecx_12, arg2, 1, arg3, var_3c_7)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
    
    char eax_21
    eax_21, ecx_3 = sub_5dd960(&arg3[4], arg4)
    
    if (eax_21 != 0)
        esi_4 = arg3
        var_18 = esi_4
        ecx_3 = sub_429080(&var_18)
        void** edi_2 = var_18
        
        if (edi_2 == *arg1)
            goto label_5dde0f
        
        char eax_23
        eax_23, ecx_3 = sub_5dd960(arg4, &edi_2[4])
        
        if (eax_23 != 0)
            esi_4 = arg3
        label_5dde0f:
            int32_t var_38_10 = arg5
            var_3c_7 = ecx_3
            ecx_12 = arg1
            
            if (*(esi_4[2] + 0xd) == 0)
                sub_5ddeb0(ecx_12, arg2, 1, edi_2, var_3c_7)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg2
            
        label_5ddd98:
            sub_5ddeb0(ecx_12, arg2, 0, esi_4, var_3c_7)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg2
else
    char eax_10
    eax_10, ecx_3 = sub_5dd960(ecx_2[2] + 0x10, arg4)
    
    if (eax_10 != 0)
        int32_t var_38_4 = arg5
        sub_5ddeb0(arg1, arg2, 0, *(*arg1 + 8), ecx_3)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2

int32_t var_38_11 = arg5
int32_t var_8_2 = 0xffffffff
int32_t* var_3c_10 = arg4
void*** eax_27 = arg2
void** var_20
*eax_27 = *sub_5de0d0(arg1, &var_20, ecx_3)
fsbase->NtTib.ExceptionList = ExceptionList
return eax_27
