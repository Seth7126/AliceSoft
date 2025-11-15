// 函数: sub_54be00
// 地址: 0x54be00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73a50b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_e8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax_3

if (arg2[5] u< 0x10)
    eax_3 = arg2
else
    eax_3 = *arg2

bool result = sub_44c4e0(eax_3)

if (result != 0)
    struct partsengine::CConstructionProcess::VTable* var_dc
    sub_4c3030(&var_dc)
    int32_t var_8_1 = 0
    sub_4c35c0(&var_dc, arg2, 0, 0, arg3, arg4, 0, 0, arg5, arg6, 1)
    sub_4c52a0(arg1 + 0x7c, &var_dc)
    sub_4c3130(&var_dc)
    result = true

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
