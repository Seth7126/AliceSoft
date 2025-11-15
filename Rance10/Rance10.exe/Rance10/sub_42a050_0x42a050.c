// 函数: sub_42a050
// 地址: 0x42a050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729bb0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t var_8_1 = 0

if (arg1[1] == 0)
    int32_t var_34 = arg5
    sub_429e00(arg1, arg2, 1, *arg1, arg1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2

int32_t* edi = *arg1
int32_t* eax_4 = arg4
char var_18 = 0
int32_t var_34_1 = var_18.d
int32_t* var_38_1 = arg1
int32_t* ecx_3

if (arg3 == *edi)
    char eax_5
    eax_5, ecx_3 = sub_42a380(eax_4, eax_4[1], *eax_4, arg3[4], arg3[5])
    
    if (eax_5 != 0)
        int32_t var_34_2 = arg5
        sub_429e00(arg1, arg2, 1, arg3, ecx_3)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
else if (arg3 != edi)
    if (sub_42a380(eax_4, eax_4[1], *eax_4, arg3[4], arg3[5]) != 0)
        var_18.d = arg3
        sub_429da0(&var_18)
        void** ebx_1 = var_18.d
        char eax_11
        int32_t* ecx_13
        eax_11, ecx_13 = sub_429110(&ebx_1[4], arg4)
        
        if (eax_11 != 0)
            int32_t var_34_5 = arg5
            
            if (*(ebx_1[2] + 0xd) == 0)
                sub_429e00(arg1, arg2, 1, arg3, ecx_13)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg2
            
            sub_429e00(arg1, arg2, 0, ebx_1, ecx_13)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg2
    
    char eax_16
    eax_16, ecx_3 = sub_429110(&arg3[4], arg4)
    
    if (eax_16 != 0)
        var_18.d = arg3
        ecx_3 = sub_429080(&var_18)
        void** ebx_2 = var_18.d
        char eax_18
        
        if (ebx_2 != edi)
            eax_18, ecx_3 = sub_429110(arg4, &ebx_2[4])
        
        if (ebx_2 == edi || eax_18 != 0)
            int32_t var_34_8 = arg5
            
            if (*(arg3[2] + 0xd) == 0)
                sub_429e00(arg1, arg2, 1, ebx_2, ecx_3)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg2
            
            sub_429e00(arg1, arg2, 0, arg3, ecx_3)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg2
else
    void** esi_3 = edi[2]
    char eax_7
    eax_7, ecx_3 = sub_42a380(eax_4, esi_3[5], esi_3[4], *eax_4, eax_4[1])
    
    if (eax_7 != 0)
        int32_t var_34_3 = arg5
        sub_429e00(arg1, arg2, 0, esi_3, ecx_3)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2

int32_t var_34_9 = arg5
int32_t var_8_2 = 0xffffffff
int32_t** var_38_9 = arg4
void* var_1c
*arg2 = *sub_429b00(arg1, &var_1c, ecx_3)
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
