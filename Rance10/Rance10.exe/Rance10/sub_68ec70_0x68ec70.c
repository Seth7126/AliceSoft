// 函数: sub_68ec70
// 地址: 0x68ec70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729918
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_1c = nullptr
int32_t var_18 = 0
int32_t var_8_1 = 0
char eax_4 = sub_6cf8e0(&var_1c, 0x6f, *(arg1 + 8), &data_76f448, &var_1c)
char* edi = var_1c
struct common::NotifyRefCounter<class IInterface>::graphengined3d11::CPixelShader::VTable** result

if (eax_4 == 0 || edi == var_18)
    result = nullptr
else
    result = sub_686640(*(arg1 + 4))
    
    if (result == 0)
        result = nullptr
    else
        void* var_30_1 = var_18 - edi
        
        if (sub_6895d0(result, edi) == 0)
            (*result)->vFunc_1(eax_2)
            result = nullptr

if (edi != 0)
    sub_403160(edi, 0 - edi, 1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
