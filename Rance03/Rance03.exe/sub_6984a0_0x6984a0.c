// 函数: sub_6984a0
// 地址: 0x6984a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6d1ae6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
LPARAM lParam_2
int32_t eax_2 = __security_cookie ^ &lParam_2
int32_t __saved_edi
int32_t var_474 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg2 != 0x4e || arg3 == 0 || *(arg3 + 8) != 0xfffffda1)
    result = 0
else
    char lParam = 0
    char var_41f[0x403]
    _memset(&var_41f, 0, 0x3ff)
    SendMessageA(GetParent(arg1), 0x465, 0x400, &lParam)
    char var_450
    sub_401f60(&var_450, &lParam)
    int32_t var_c_1 = 0
    sub_402bc0(&lParam_2, &var_450)
    var_c_1.b = 2
    int32_t var_43c
    
    if (var_43c u>= 0x10)
        j__free(var_450.d)
    
    int32_t var_43c_1 = 0xf
    int32_t var_440_1 = 0
    var_450 = 0
    char var_438
    sub_408340(&lParam_2, sub_402a20(&var_438, &lParam_2))
    int32_t var_424
    
    if (var_424 u>= 0x10)
        j__free(var_438.d)
    
    void* eax_7 = *(arg3 + 0xc)
    int32_t var_424_1 = 0xf
    int32_t var_428_1 = 0
    var_438 = 0
    int32_t eax_8 = *(eax_7 + 0x18)
    
    if (eax_8 == 1)
        sub_405780(&lParam_2, ".bmp")
    else if (eax_8 == 2)
        sub_405780(&lParam_2, ".jpg")
    
    LPARAM lParam_1 = &lParam_2
    int32_t var_454
    
    if (var_454 u>= 0x10)
        lParam_1 = lParam_2
    
    SendMessageA(GetParent(arg1), 0x468, 0x480, lParam_1)
    
    if (var_454 u>= 0x10)
        j__free(lParam_2)
    
    result = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &lParam_2)
return result
