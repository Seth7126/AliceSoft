// 函数: sub_4f3360
// 地址: 0x4f3360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736218
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_20 = nullptr
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_8_1 = 0
sub_4f0590(*(arg1 + 4), &var_20)
void* var_38
sub_4f1e00(*(arg1 + 8), sub_4275f0(&var_38, &var_20))
int32_t esi_1 = *(*(arg1 + 4) + 0x40)
int32_t var_30_1 = esi_1
struct partsengine::CPartsList::VTable** eax_4 = sub_4f14d0(*(arg1 + 8))

if (eax_4 != 0)
    sub_5267c0(eax_4, esi_1)

int32_t esi_2 = *(*(arg1 + 0xc) + 0x40)
int32_t var_30_3 = esi_2
struct partsengine::CPartsList::VTable** eax_6 = sub_4f14d0(*(arg1 + 8))

if (eax_6 != 0)
    sub_5267c0(eax_6, esi_2)

(*(**(arg1 + 4) + 4))(eax_2)
int32_t result = (*(**(arg1 + 0xc) + 4))()
void* ecx_10 = var_20

if (ecx_10 != 0)
    int32_t var_30_5 = 4
    var_38 = ecx_10
    result = sub_403160(var_38, (var_18 - ecx_10) s>> 2, var_30_5)

fsbase->NtTib.ExceptionList = ExceptionList
return result
