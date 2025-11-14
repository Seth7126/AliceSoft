// 函数: sub_5dbc20
// 地址: 0x5dbc20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6ca940
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1
int32_t esi = arg1[1]
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x2aaaaaab, esi - *arg1)
int32_t edx_3 = edx_2 s>> 2
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3

if (ecx_2 u> arg2)
    int32_t var_2c_1 = arg2
    int32_t var_30_1 = ecx_2
    int32_t* esi_1 = esi + (arg2 - ecx_2) * 0x18
    eax_3 = sub_5bf8f0(esi_1, arg1[1])
    arg1[1] = esi_1
else if (ecx_2 u< arg2)
    sub_5dbd30(arg1, arg2 - ecx_2)
    int32_t var_8_1 = 0
    int32_t var_2c_3 = arg2
    int32_t eax_7
    int32_t edx_5
    edx_5:eax_7 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
    int32_t edx_6 = edx_5 s>> 2
    sub_5dbe90(arg1[1], arg2 - ((edx_6 u>> 0x1f) + edx_6))
    int32_t esi_2 = arg1[1]
    int32_t eax_11
    int32_t edx_9
    edx_9:eax_11 = muls.dp.d(0x2aaaaaab, esi_2 - *arg1)
    int32_t edx_10 = edx_9 s>> 2
    int32_t eax_16 = esi_2 + (arg2 - ((edx_10 u>> 0x1f) + edx_10)) * 0x18
    arg1[1] = eax_16
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_16

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
