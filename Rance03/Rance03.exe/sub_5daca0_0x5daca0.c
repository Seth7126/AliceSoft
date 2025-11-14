// 函数: sub_5daca0
// 地址: 0x5daca0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca800
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** result

if (sub_5db290(arg1, arg3) == 0)
    char var_28[0x10]
    int32_t* eax_11 = sub_4028a0(&var_28, arg2)
    int32_t var_4 = 0
    void* var_40
    sub_410ad0(eax_11, eax_11, &var_40, arg3)
    var_4.b = 2
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28[0].d)
    
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    var_28[0] = 0
    int32_t var_2c
    
    if (arg5 == 0)
        if (sub_5d7860(arg4, &var_40).b != 0)
            goto label_5dadc8
        
    label_5dae0e:
        
        if (var_2c u< 0x10)
            result.b = 0
        else
            j__free(var_40)
            result.b = 0
    else
        if (sub_5d1280(*(arg1 + 0x24), &var_40, arg4 + 4).b == 0 || *(arg4 + 0xc) s<= 0)
            goto label_5dae0e
        
        *(arg4 + 0x14) = 0
    label_5dadc8:
        
        if (var_2c u< 0x10)
            result.b = 1
        else
            j__free(var_40)
            result.b = 1
else
    void** eax_6 = sub_417ed0(arg1 + 0x1c, arg3)
    char eax_8
    
    if (eax_6 != *(arg1 + 0x1c))
        eax_8 = sub_40c3a0(arg3, &eax_6[4])
    
    void** var_44_1
    
    if (eax_6 == *(arg1 + 0x1c) || eax_8 != 0)
        var_44_1 = *(arg1 + 0x1c)
    else
        var_44_1 = eax_6
    
    if (var_44_1 == *(arg1 + 0x1c))
        result.b = 0
    else
        int32_t* ecx_1 = var_44_1[0xa]
        result = var_44_1[0xb]
        
        if (ecx_1 == result)
            *(arg4 + 0xc) = 0
            *(arg4 + 0x14) = 0
        else
            sub_5d79b0(arg4, ecx_1, result - ecx_1)
        
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
