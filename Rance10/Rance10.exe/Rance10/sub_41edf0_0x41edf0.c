// 函数: sub_41edf0
// 地址: 0x41edf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7274d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageMaker::VTable* const var_4c = &fileimage::CFileImageMaker::`vftable'
void* var_48 = nullptr
int32_t var_44 = 0
int32_t var_40 = 0
int32_t var_8_1 = 0
WPARAM wParam
struct _EXCEPTION_REGISTRATION_RECORD* lParam
int32_t ebx

if (sub_41dd40(arg1, &var_4c, &wParam, &lParam) != 0)
    sub_6ca100(&var_4c, sub_4209a0(*(arg1 + 4)))
    struct win32only::CFileMapping::VTable* const var_3c = &win32only::CFileMapping::`vftable'
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c_1 = 0
    int32_t var_38_1 = 0
    int32_t var_34_1 = 0
    int32_t var_30_1 = 0
    var_8_1.b = 1
    
    if (sub_41f180(&var_3c, &var_4c) != 0)
        SendMessageA(*(arg1 + 0xc), 0x803, wParam, lParam)
        ebx.b = 1
    else
        ebx.b = 0
    
    var_3c = &win32only::CFileMapping::`vftable'
    sub_6cdf10(&var_3c)
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c_1.d, var_18_1 + 1, 1)
    
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    char var_2c_2 = 0
else
    ebx.b = 0

if (var_48 != 0)
    sub_403160(var_48, var_40 - var_48, 1)

void* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
