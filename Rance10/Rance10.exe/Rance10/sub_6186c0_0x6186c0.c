// 函数: sub_6186c0
// 地址: 0x6186c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744178
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_70 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_7fcbb8

if (arg3[4] == 0)
    *arg4 = 0
    int32_t* eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

int32_t var_8_1 = 0
struct sys43vm::CGlobalSaver::VTable* var_64
int32_t ebx
ebx.b = sub_607260(sub_6070b0(&var_64, esi + 0x28), arg3, arg1, arg2, arg4, esi + 0x44, esi + 0x148)
sub_607160(&var_64)
int32_t eax_7
eax_7.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_7
