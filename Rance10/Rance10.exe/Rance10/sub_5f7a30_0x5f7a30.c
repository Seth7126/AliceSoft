// 函数: sub_5f7a30
// 地址: 0x5f7a30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74203f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg1
int32_t var_14 = 0
int32_t var_2c
int32_t* edx
int32_t* eax_3 = sub_5f7ae0(&var_2c, edx)
*arg1 = *eax_3
arg1[1] = eax_3[1]
arg1[2] = eax_3[2]
arg1[3] = eax_3[3]
arg1[4] = eax_3[4]
*eax_3 = 0xffffffff
int32_t var_14_1 = 1
int32_t var_8_1 = 1
sub_601c30(&var_2c)

if (sub_6015f0(var_2c) != 0)
    void* ecx_7 = data_7fcbb0
    int32_t var_24
    
    if (ecx_7 != 0)
        sub_621db0(ecx_7, var_24)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
