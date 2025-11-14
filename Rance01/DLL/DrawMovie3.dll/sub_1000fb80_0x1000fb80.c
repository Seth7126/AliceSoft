// 函数: sub_1000fb80
// 地址: 0x1000fb80
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_10019418
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_10_1 = arg1
int32_t* eax_3 = *(arg1 + 0x9c)
int32_t var_4 = 0

if (eax_3 != 0)
    (*(*eax_3 + 8))(eax_3)
    *(arg1 + 0x9c) = 0

int32_t var_4_1 = 0xffffffff
int32_t result = sub_1000f3e0(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
