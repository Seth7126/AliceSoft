// 函数: sub_46e7f0
// 地址: 0x46e7f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729896
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* i_1 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *(arg1 + 4)
void* i = *esi
i_1 = i

for (; i != esi; i = i_1)
    int32_t* ecx = *(i + 0x28)
    
    if (ecx != 0)
        (**ecx)(1)
    
    sub_429080(&i_1)

int32_t var_8_1 = 0
sub_432200(*(*(arg1 + 4) + 4))
void* eax_5 = *(arg1 + 4)
*(eax_5 + 4) = eax_5
int32_t* eax_6 = *(arg1 + 4)
*eax_6 = eax_6
void* result = *(arg1 + 4)
*(result + 8) = result
*(arg1 + 8) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
