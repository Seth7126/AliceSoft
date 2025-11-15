// 函数: sub_602420
// 地址: 0x602420
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740756
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20
arg1[1] = var_20
int32_t var_18
arg1[3] = var_18
*arg1 = 0xffffffff
int32_t var_1c
arg1[2] = var_1c
int32_t var_14
arg1[4] = var_14
int32_t var_24 = 0xffffffff
int32_t var_8_1 = 0
sub_601c30(&var_24)

if (sub_6015f0(0xffffffff) != 0)
    void* ecx_1 = data_7fcbb0
    
    if (ecx_1 != 0)
        sub_621db0(ecx_1, var_1c)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
