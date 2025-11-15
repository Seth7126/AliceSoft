// 函数: sub_608d90
// 地址: 0x608d90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742a40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* var_18 = arg1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t edi_2 = (arg2[1] - *arg2) s>> 4
*arg1 = 0
arg1[1] = 0
arg1[2] = 0

if (edi_2 != 0)
    if (edi_2 u> 0xfffffff)
        sub_6d0927("vector<T> too long")
        noreturn
    
    int32_t* eax_3
    int32_t ecx
    eax_3, ecx = sub_4ac4a0(edi_2)
    *arg1 = eax_3
    arg1[1] = eax_3
    int32_t var_30_2 = ecx
    int32_t var_8_1 = 0
    int32_t var_34_1 = 0
    arg1[2] = (edi_2 << 4) + *arg1
    int32_t var_38_1 = ecx
    arg1[1] = sub_5dfd50(eax_3, arg2[1], *arg2, eax_3)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
