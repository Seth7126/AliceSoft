// 函数: sub_4742d0
// 地址: 0x4742d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72dd40
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
int32_t ecx_1 = arg2[1] - *arg2
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x92492493, ecx_1)
*arg1 = 0
arg1[1] = 0
int32_t edx_2 = (edx + ecx_1) s>> 5
arg1[2] = 0
int32_t edi_2 = ecx_1 s/ 0x38

if (edx_2 u>> 0x1f != neg.d(edx_2))
    if (edi_2 u> 0x4924924)
        sub_6d0927("vector<T> too long")
        noreturn
    
    void* eax_4 = sub_467970(edi_2)
    *arg1 = eax_4
    arg1[1] = eax_4
    int32_t ecx_3 = edi_2 * 7
    int32_t var_8_1 = 0
    int32_t var_30_2 = ecx_3
    int32_t var_34_1 = 0
    int32_t eax_6 = *arg1 + (ecx_3 << 3)
    arg1[2] = eax_6
    int32_t var_38_1 = ecx_3
    arg1[1] = sub_469260(eax_6, arg2[1], *arg2, *arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
