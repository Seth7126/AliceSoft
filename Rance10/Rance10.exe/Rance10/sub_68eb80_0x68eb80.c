// 函数: sub_68eb80
// 地址: 0x68eb80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747830
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_1c = nullptr
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_8_1 = 0
bool eax_4 = sub_6cf8e0(&var_1c, 0x78, *(arg1 + 8), 0x76f3a8, &var_1c)
char* edi = var_1c
struct common::NotifyRefCounter<class IInterface>::graphengined3d11::CVertexShader::VTable** result

if (eax_4 == 0 || edi == var_18)
    result = nullptr
else
    void* var_28
    sub_690e20(&var_28)
    var_8_1.b = 1
    result = sub_6867b0(*(arg1 + 4))
    
    if (result == 0)
        result = nullptr
    else
        int32_t* var_40_1 = &var_28
        
        if (sub_694b30(result, edi, var_18 - edi) == 0)
            (*result)->vFunc_1(eax_2)
            result = nullptr
    
    void* ecx_5 = var_28
    int32_t var_20
    
    if (ecx_5 != 0)
        sub_403160(ecx_5, (var_20 - ecx_5) s>> 2, 4)

if (edi != 0)
    sub_403160(edi, var_14 - edi, 1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
