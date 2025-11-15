// 函数: sub_621790
// 地址: 0x621790
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7447b6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x18) = sub_621000(arg1)
void* var_14 = arg1
int32_t* var_18
void** eax_4 = sub_622470(&var_18, &var_14)
void var_30
void var_24
int32_t* eax_6 = sub_622260(sub_44a580(arg1 + 4, &var_30), &var_24, *(arg1 + 0x18))
int32_t* esi_1 = *eax_6

if (esi_1 != 0)
    esi_1 = *esi_1

int32_t edx_1 = eax_6[2]
int32_t* edx_3 = *(esi_1[1] + (((esi_1[2] - 1) & edx_1 u>> 2) << 2)) + ((edx_1 & 3) << 2)
void* result = *eax_4
*eax_4 = nullptr
int32_t* ecx_6 = *edx_3
*edx_3 = result

if (ecx_6 != 0)
    result = (**ecx_6)(1)

int32_t* ecx_7 = var_18

if (ecx_7 != 0)
    int32_t var_8_1 = 0
    result = (**ecx_7)(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
