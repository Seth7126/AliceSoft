// 函数: sub_516030
// 地址: 0x516030
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7387d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_1c = nullptr
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_8_1 = 0
char eax_3 = sub_524a90(*(arg1 + 8), arg3, &var_1c)
void* esi = var_1c
int32_t ebx

if (eax_3 != 0)
    struct fileimage::CFileImageAnalyser::VTable* const var_28 =
        &fileimage::CFileImageAnalyser::`vftable'
    void* var_24_1 = esi
    void* var_20_1 = var_18
    var_8_1.b = 1
    ebx.b = sub_513180(arg2, &var_28, arg4)
else
    ebx.b = 0

if (esi != 0)
    sub_403160(esi, var_14 - esi, 1)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
