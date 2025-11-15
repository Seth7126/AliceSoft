// 函数: sub_4f1730
// 地址: 0x4f1730
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736050
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t arg_4
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg_4 s> 0)
    result.b = 1
else
    struct _EXCEPTION_REGISTRATION_RECORD** var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    sub_403490(&var_30, 0x7653c4, 0x1d)
    int32_t var_8_1 = 0
    char var_48
    char* esi_1 = sub_409350(&arg_4, &var_30, &var_48, &arg_4)
    var_8_1.b = 1
    int32_t* ecx_3 = data_7fcb88
    
    if (ecx_3 != 0)
        int32_t* eax_5 = (**ecx_3)(0x765400)
        
        if (eax_5 != 0)
            int32_t* eax_6 = (*(*eax_5 + 0x14))(0x7653f0)
            
            if (eax_6 != 0)
                if (*(esi_1 + 0x14) u>= 0x10)
                    esi_1 = *esi_1
                
                (**eax_6)(esi_1)
    
    int32_t var_34
    
    if (var_34 u>= 0x10)
        sub_403160(var_48.d, var_34 + 1, 1)
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30.d, var_1c_1 + 1, 1)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
