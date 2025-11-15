// 函数: sub_5dfb10
// 地址: 0x5dfb10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741760
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t var_8_1 = 0

if (arg1[1] == 0)
    int32_t var_34 = arg5
    sub_5dfe80(arg1, arg2, 1, *arg1, arg1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2

int32_t* edi = *arg1
int32_t* ecx_3

if (arg3 == *edi)
    char eax_5
    eax_5, ecx_3 = sub_5df310(arg4, &arg3[4])
    
    if (eax_5 != 0)
        int32_t var_34_2 = arg5
        sub_5dfe80(arg1, arg2, 1, arg3, ecx_3)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
else if (arg3 != edi)
    int32_t* ebx_1 = arg4
    void** var_18
    
    if (sub_5df310(ebx_1, &arg3[4]) != 0)
        var_18 = arg3
        sub_429da0(&var_18)
        void** ebx_2 = var_18
        char eax_11
        int32_t* ecx_14
        eax_11, ecx_14 = sub_5df310(&ebx_2[4], ebx_1)
        
        if (eax_11 != 0)
            int32_t var_34_7 = arg5
            
            if (*(ebx_2[2] + 0xd) == 0)
                sub_5dfe80(arg1, arg2, 1, arg3, ecx_14)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg2
            
            sub_5dfe80(arg1, arg2, 0, ebx_2, ecx_14)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg2
        
        ebx_1 = arg4
    
    char eax_15
    eax_15, ecx_3 = sub_5df310(&arg3[4], ebx_1)
    
    if (eax_15 != 0)
        var_18 = arg3
        ecx_3 = sub_429080(&var_18)
        void** ebx_3 = var_18
        char eax_17
        
        if (ebx_3 != edi)
            eax_17, ecx_3 = sub_5df310(arg4, &ebx_3[4])
        
        if (ebx_3 == edi || eax_17 != 0)
            int32_t var_34_10 = arg5
            
            if (*(arg3[2] + 0xd) == 0)
                sub_5dfe80(arg1, arg2, 1, ebx_3, ecx_3)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg2
            
            sub_5dfe80(arg1, arg2, 0, arg3, ecx_3)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg2
else
    void** esi_3 = edi[2]
    char eax_7
    eax_7, ecx_3 = sub_5df310(&esi_3[4], arg4)
    
    if (eax_7 != 0)
        int32_t var_34_4 = arg5
        sub_5dfe80(arg1, arg2, 0, esi_3, ecx_3)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2

int32_t var_34_11 = arg5
int32_t var_8_2 = 0xffffffff
int32_t* var_38_5 = arg4
void* var_1c
*arg2 = *sub_5e00d0(arg1, &var_1c, ecx_3)
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
