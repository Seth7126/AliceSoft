// 函数: sub_54b920
// 地址: 0x54b920
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73a48b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_f0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_54b7a0(arg1)
char* eax_3

if (arg2[5] u< 0x10)
    eax_3 = arg2
else
    eax_3 = *arg2

bool result = sub_44c4e0(eax_3)

if (result != 0)
    struct partsengine::CConstructionProcess::VTable* var_e0
    sub_4c3030(&var_e0)
    int32_t var_8_1 = 0
    int32_t var_dc_1 = 2
    void var_34
    
    if (&var_34 != arg2)
        sub_403590(&var_34, arg2, 0, 0xffffffff)
    
    sub_4c52a0(arg1 + 0x7c, &var_e0)
    sub_4c3130(&var_e0)
    result = true

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
