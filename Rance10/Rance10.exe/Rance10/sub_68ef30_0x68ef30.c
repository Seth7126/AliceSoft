// 函数: sub_68ef30
// 地址: 0x68ef30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7478d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_54 = nullptr
int32_t var_50 = 0
int32_t var_4c = 0
int32_t var_8_1 = 0
int32_t* var_6c = &var_54
int32_t* arg_4
bool eax_3 = sub_682290(arg1 + 0x10, arg_4)
char* edi = var_54
struct common::NotifyRefCounter<class IInterface>::graphengined3d11::CPixelShader::VTable** result
char var_30

if (eax_3 == 0 || edi == var_50)
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    sub_403490(&var_48, 0x76f3ec, 0x30)
    var_8_1.b = 1
    var_8_1.b = 2
    sub_6c52e0(sub_4351a0(&arg_4, &var_48, &var_30, &arg_4))
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        sub_403160(var_30.d, var_1c + 1, 1)
    
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    var_30 = 0
    
    if (var_34_1 u>= 0x10)
        sub_403160(var_48.d, var_34_1 + 1, 1)
    
    result = nullptr
else
    result = sub_686640(*(arg1 + 4))
    
    if (result == 0)
        result = nullptr
    else
        void* var_6c_1 = var_50 - edi
        
        if (sub_6895d0(result, edi) == 0)
            sub_403360(&var_30, 0x76f420)
            var_8_1.b = 3
            sub_6c52e0(&var_30)
            var_8_1.b = 0
            sub_403320(&var_30)
            (*result)->vFunc_1(eax_2)
            result = nullptr

if (edi != 0)
    sub_403160(edi, var_4c - edi, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
