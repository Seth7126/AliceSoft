// 函数: sub_510c10
// 地址: 0x510c10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737ed6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg1
int32_t* esi = *edi
int32_t i = *esi
int32_t i_1 = i

for (; i != esi; i = i_1)
    int32_t i_2 = i_1
    int32_t var_34_1 = i + 0x10
    void* var_1c
    sub_44e4f0(&edi[6], &var_1c, arg1)
    arg1 = sub_429080(&i_1)

int32_t var_8_1 = 0
sub_432200(*(*edi + 4))
void* eax_5 = *edi
*(eax_5 + 4) = eax_5
int32_t* eax_6 = *edi
*eax_6 = eax_6
void* result = *edi
*(result + 8) = result
edi[1] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
