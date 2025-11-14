// 函数: sub_5dab20
// 地址: 0x5dab20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca7c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_40
int32_t eax_2 = __security_cookie ^ &var_40
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result

if (sub_5db290(arg1, arg3) == 0)
    char var_28[0x10]
    char* eax_8 = sub_4028a0(&var_28, arg2)
    int32_t var_4 = 0
    sub_410ad0(eax_8, eax_8, &var_40, arg3)
    var_4.b = 2
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28[0].d)
    
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    var_28[0] = 0
    
    if (arg5 != 0)
        int32_t eax_9
        
        if (*(arg4 + 0x10) != 0)
            eax_9 = *(arg4 + 0xc)
        else
            eax_9 = 0
        
        if (sub_5d1390(*(arg1 + 0x24), &var_40, eax_9, *(arg4 + 0x18)).b == 0)
            goto label_5dac7f
        
        goto label_5dac34
    
    int32_t var_2c
    
    if (sub_5de8c0(arg4, &var_40).b != 0)
    label_5dac34:
        
        if (var_2c u< 0x10)
            result.b = 1
        else
            j__free(var_40)
            result.b = 1
    else
    label_5dac7f:
        
        if (var_2c u>= 0x10)
            j__free(var_40)
        
        result.b = 0
else
    sub_403540(sub_5db330(arg1 + 0x1c, arg3), *(arg4 + 0x18))
    result = sub_5db330(arg1 + 0x1c, arg3)
    
    if (*result != *(result + 4))
        int32_t* esi_1
        
        if (*(arg4 + 0x10) != 0)
            esi_1 = *(arg4 + 0xc)
        else
            esi_1 = nullptr
        
        sub_69d850(*sub_5db330(arg1 + 0x1c, arg3), esi_1, *(arg4 + 0x18), eax_4)
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
