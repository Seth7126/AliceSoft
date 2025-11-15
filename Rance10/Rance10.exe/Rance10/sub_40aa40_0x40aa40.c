// 函数: sub_40aa40
// 地址: 0x40aa40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727550
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = *(arg1 + 0x10)
void* esi = nullptr
struct fileimage::CFileImageMaker::VTable* const var_54 = &fileimage::CFileImageMaker::`vftable'
void* var_50 = nullptr
int32_t var_4c = 0
int32_t* ebx = *(eax_3 + 4)
int32_t var_48 = 0
int32_t var_8_1 = 0
WPARAM wParam = 0xffffffff
LPARAM lParam = 0xffffffff
int32_t* ecx = *(eax_3 + 8)
int32_t eax_4

if (ecx != 0)
    eax_4 = (**ecx)(eax_2)
else
    eax_4 = 0xffffffff

(**ebx)(&wParam, &lParam, eax_4)

if (wParam == 0xffffffff || lParam == 0xffffffff)
    ebx.b = 0
else if (sub_40c7d0(arg1, &var_54) == 0)
    esi = var_50
    ebx.b = 0
else
    struct win32only::CFileMapping::VTable* var_3c = &win32only::CFileMapping::`vftable'
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c_1 = 0
    int32_t var_38_1 = 0
    int32_t var_34_1 = 0
    int32_t var_30_1 = 0
    var_8_1.b = 1
    
    if (sub_40cb00(&var_3c, &var_54) != 0)
        SendMessageA(*(arg1 + 8), 0x906, wParam, lParam)
        ebx.b = 1
        sub_6cddb0(&var_3c)
        esi = var_50
    else
        ebx.b = 0
        sub_6cddb0(&var_3c)
        esi = var_50

if (esi != 0)
    sub_403160(esi, var_48 - esi, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return ebx.b
