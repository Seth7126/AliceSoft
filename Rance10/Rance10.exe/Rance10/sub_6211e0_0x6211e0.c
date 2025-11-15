// 函数: sub_6211e0
// 地址: 0x6211e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7447e6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = sub_621000(arg1)
int32_t* var_18 = arg1
struct sys43vm::CVarListPage::sys43vm::CArrayPage::VTable** var_1c
struct sys43vm::CVarListPage::sys43vm::CArrayPage::VTable*** eax_5 =
    sub_6225d0(&result_1, &var_18, &var_1c, &result_1)
int32_t result = result_1
var_18 = eax_5
void var_34
void var_28
int32_t* eax_7 = sub_622260(sub_44a580(&arg1[1], &var_34), &var_28, result)
int32_t* esi_1 = *eax_7

if (esi_1 != 0)
    esi_1 = *esi_1

int32_t edx_1 = eax_7[2]
int32_t* ecx_6 = var_18
int32_t* edx_3 = *(esi_1[1] + (((esi_1[2] - 1) & edx_1 u>> 2) << 2)) + ((edx_1 & 3) << 2)
int32_t eax_12 = *ecx_6
*ecx_6 = 0
int32_t* ecx_7 = *edx_3
*edx_3 = eax_12

if (ecx_7 != 0)
    (**ecx_7)(1)

struct sys43vm::CVarListPage::sys43vm::CArrayPage::VTable** ecx_8 = var_1c

if (ecx_8 != 0)
    int32_t var_8_1 = 0
    (*ecx_8)->vFunc_0(1)

int32_t* eax_16 = sub_622260(sub_44a580(&arg1[1], &var_28), &var_34, result)
int32_t* esi_2 = *eax_16

if (esi_2 != 0)
    esi_2 = *esi_2

int32_t edx_4 = eax_16[2]
void* edx_6 = *(*(esi_2[1] + ((edx_4 u>> 2 & (esi_2[2] - 1)) << 2)) + ((edx_4 & 3) << 2))
*(edx_6 + 0x30) = arg3
*(edx_6 + 0x2c) = arg2
*(edx_6 + 0x34) = arg4

if (arg2 == 0x12 || arg2 == 0x33 || arg2 == 0x13 || arg2 == 0x59 || arg2 == 0x5d)
    *(edx_6 + 0x3c) = 2
else
    *(edx_6 + 0x3c) = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
