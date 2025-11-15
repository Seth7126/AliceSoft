// 函数: sub_68cd00
// 地址: 0x68cd00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729e78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_34 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::NotifyRefCounter<class IInterface>::graphengined3d11::CVertexShader::VTable** result

if (*(arg1 + 0x48) != 0)
    result.b = 0
else
    void* var_38_1 = arg1
    result = sub_68df70(arg1, arg2)
    *(arg1 + 0x48) = result
    
    if (result == 0)
        result.b = 0
    else if (sub_694c00(result).b != 0)
        result.b = 1
    else
        void var_2c
        sub_403360(&var_2c, 0x76f26c)
        int32_t var_8_1 = 0
        sub_6c52e0(&var_2c)
        sub_403320(&var_2c)
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
