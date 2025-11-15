// 函数: sub_69bcd0
// 地址: 0x69bcd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7487c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_34
int32_t* var_1c = arg1
int32_t var_8_1 = 0
int32_t* ecx = arg1[0x29]

if (ecx == 0)
    sub_6d090a()
    noreturn

char eax_5
int32_t ecx_1
eax_5, ecx_1 = (*(*ecx + 8))()
char var_15 = eax_5
int32_t var_38 = ecx_1
int32_t result = sub_69be80(arg1, &var_15)
fsbase->NtTib.ExceptionList = ExceptionList
return result
