// 函数: ??1_Fac_node@std@@QAE@XZ
// 地址: 0x6d4452
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = *(**(arg1 + 4) + 8)
j_sub_4033e0()
int32_t* result = esi(eax_2)

if (result != 0)
    int32_t esi_1 = **result
    j_sub_4033e0()
    result = esi_1(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
