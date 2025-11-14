// 函数: sub_4d9280
// 地址: 0x4d9280
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6bf9d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x3e0f83e1, arg1[1] - *arg1)
int32_t edx_3 = edx_2 s>> 5
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3

if (ecx_2 u> arg2)
    int32_t edx_4 = arg1[1]
    int32_t var_2c_1 = arg2
    int32_t var_30_1 = ecx_2
    void* esi_2 = (arg2 - ecx_2) * 0x84 + edx_4
    eax_3 = sub_4d98b0(esi_2, edx_4)
    arg1[1] = esi_2
else if (ecx_2 u< arg2)
    sub_4d8750(arg1, arg2 - ecx_2)
    int32_t var_8_1 = 0
    int32_t var_2c_3 = arg2
    int32_t eax_6
    int32_t edx_5
    edx_5:eax_6 = muls.dp.d(0x3e0f83e1, arg1[1] - *arg1)
    int32_t edx_6 = edx_5 s>> 5
    sub_4d9c10(arg1[1], arg2 - ((edx_6 u>> 0x1f) + edx_6))
    int32_t eax_10
    int32_t edx_9
    edx_9:eax_10 = muls.dp.d(0x3e0f83e1, arg1[1] - *arg1)
    int32_t edx_10 = edx_9 s>> 5
    int32_t eax_14 = (arg2 - ((edx_10 u>> 0x1f) + edx_10)) * 0x84
    arg1[1] += eax_14
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_14

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
