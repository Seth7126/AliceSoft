// 函数: sub_559ae0
// 地址: 0x559ae0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73b151
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_34 = arg3
int32_t var_38 = 0
int32_t* var_40 = arg3
*arg3 = 0
arg3[1] = 0
arg3[2] = 0
int32_t var_8_1 = 0
int32_t eax_4
int32_t edx
edx:eax_4 = muls.dp.d(0x2aaaaaab, arg2[1] - *arg2)
int32_t var_38_1 = 1
int32_t edx_1 = edx s>> 2
int32_t esi_2 = (edx_1 u>> 0x1f) + edx_1
int32_t eax_5
int32_t edx_2
edx_2:eax_5 = muls.dp.d(0x92492493, arg3[2])
int32_t edx_4 = (edx_2 + arg3[2]) s>> 4

if ((edx_4 u>> 0x1f) + edx_4 u< esi_2)
    if (esi_2 u> 0x9249249)
        sub_6d0927("vector<T> too long")
        noreturn
    
    sub_55c070(arg3, esi_2)

void** i = *arg2

for (int32_t edi_1 = arg2[1]; i != edi_1; i = &i[6])
    var_34 = sub_641870(arg4, i)
    int32_t var_8_2 = 1
    void var_30
    sub_55bd70(arg3, sub_55c390(&var_34, i, &var_30, &var_34))
    var_8_2.b = 0
    int32_t var_18
    void* var_2c
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg3
