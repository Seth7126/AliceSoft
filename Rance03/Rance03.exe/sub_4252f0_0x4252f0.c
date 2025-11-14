// 函数: sub_4252f0
// 地址: 0x4252f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b2eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_34
int32_t eax_2 = __security_cookie ^ &var_34
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
uint32_t result

if (arg3 s< 0 || arg3 s>= (***(arg1[0x38] + 8))(__security_cookie ^ &__saved_edi))
    result.b = 0
else
    int32_t var_20_1 = 0xf
    int32_t var_24_1 = 0
    var_34 = 0
    int32_t var_c_1 = 0
    HWND ebx_1 = sub_42ca60(arg1[0x38], arg3, &var_34)
    sub_423ef0(arg1[0x39], arg3, &var_34, 1)
    void* eax_7 = arg1[0x38]
    arg1[0x3b] = arg3
    
    if ((*(**(eax_7 + 8) + 0x14))(arg3) == 2)
        result, ebx_1 = sub_431730(arg1, ebx_1, arg3)
        ebx_1.b = 1
    else
        ebx_1.b = 0
    
    if (var_20_1 u>= 0x10)
        j__free(var_34.d)
    
    result.b = ebx_1.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
