// 函数: sub_621120
// 地址: 0x621120
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7447b6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = sub_621000(arg1)
struct sys43vm::CPage::sys43vm::CStringPage::VTable** var_14
struct sys43vm::CPage::sys43vm::CStringPage::VTable*** eax_3 = sub_622570(&var_14)
void var_2c
void var_20
int32_t* eax_5 = sub_622260(sub_44a580(arg1 + 4, &var_2c), &var_20, result)
int32_t* esi_1 = *eax_5

if (esi_1 != 0)
    esi_1 = *esi_1

int32_t edx = eax_5[2]
struct sys43vm::CPage::sys43vm::CStringPage::VTable*** edx_2 =
    *(esi_1[1] + (((esi_1[2] - 1) & edx u>> 2) << 2)) + ((edx & 3) << 2)
struct sys43vm::CPage::sys43vm::CStringPage::VTable** eax_10 = *eax_3
*eax_3 = nullptr
struct sys43vm::CPage::sys43vm::CStringPage::VTable** ecx_6 = *edx_2
*edx_2 = eax_10

if (ecx_6 != 0)
    (*ecx_6)->__offset(0x0).d(1)

struct sys43vm::CPage::sys43vm::CStringPage::VTable** ecx_7 = var_14

if (ecx_7 != 0)
    int32_t var_8_1 = 0
    (*ecx_7)->__offset(0x0).d(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
