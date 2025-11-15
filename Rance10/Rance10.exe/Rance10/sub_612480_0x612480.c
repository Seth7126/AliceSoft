// 函数: sub_612480
// 地址: 0x612480
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743680
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if (arg1[0x7a].b != 0)
    char* eax_3
    
    if (arg2[5] u< 0x10)
        eax_3 = arg2
    else
        eax_3 = *arg2
    
    result = sub_618010(arg1, eax_3)

if (arg1[0x7a].b == 0 || result != 0)
    result = 0
else
    void var_60
    sub_6c4a50(&var_60)
    int32_t var_8_1 = 0
    void var_54
    
    if (&var_54 != arg2)
        sub_403590(&var_54, arg2, 0, 0xffffffff)
    
    void var_78
    int32_t* eax_4 = sub_611e50(arg1, &var_78)
    var_8_1.b = 1
    int32_t* ecx_3 = data_7fcb88
    HWND eax_5
    
    if (ecx_3 != 0)
        eax_5 = (**ecx_3)(0x76b3ac)
        
        if (eax_5 != 0)
            eax_5 = (*(eax_5->unused + 0x38))(eax_2)
    else
        eax_5 = nullptr
    
    int32_t eax_8 = sub_6c4f30(&var_60, arg1[2], eax_5, eax_4)
    var_8_1.b = 0
    sub_417070(&var_78)
    sub_611fe0(arg1)
    int32_t* ebx
    
    if (eax_8 != 0)
        char var_1c
        
        if (var_1c != 0)
            int32_t var_64 = arg1[0x74] - arg1[0x75]
            int32_t var_8c_4 = var_64
            int32_t* var_6c
            sub_61c070(&arg1[0x48b], &var_6c, &var_64)
            var_64 = arg1[0x74] - arg1[0x75]
            sub_61c490(&arg1[0x493], &var_6c, &var_64)
            int32_t var_8c_6 = var_64
            void* var_74
            sub_60d320(&var_6c[5], &var_74, arg2)
        
        ebx.b = 1
    else
        arg1[0x7a].b = 0
        
        if (arg1[0x7b] == eax_8)
            arg1[0x7b] = 1
        
        ebx.b = 0
    
    sub_612420(&var_60)
    result = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
