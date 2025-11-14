// 函数: sub_578f10
// 地址: 0x578f10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c68b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t ebx = arg1[1]
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x66666667, ebx - *arg1)
int32_t edx_3 = edx_2 s>> 4
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3

if (ecx_2 u> arg2)
    eax_3 = (arg2 - ecx_2) * 5
    int32_t* edi_2 = ebx + (eax_3 << 3)
    int32_t* esi_1 = edi_2
    
    if (edi_2 != ebx)
        do
            eax_3 = (**esi_1)(0)
            esi_1 = &esi_1[0xa]
        while (esi_1 != ebx)
    
    arg1[1] = edi_2
else if (ecx_2 u< arg2)
    sub_579250(arg1, arg2 - ecx_2)
    int32_t var_8_1 = 0
    void* esi_2 = arg1[1]
    int32_t var_2c_1 = arg2
    int32_t eax_7
    int32_t edx_4
    edx_4:eax_7 = muls.dp.d(0x66666667, esi_2 - *arg1)
    int32_t edx_5 = edx_4 s>> 4
    sub_5798d0(esi_2, arg2 - ((edx_5 u>> 0x1f) + edx_5))
    int32_t esi_3 = arg1[1]
    int32_t eax_11
    int32_t edx_8
    edx_8:eax_11 = muls.dp.d(0x66666667, esi_3 - *arg1)
    int32_t edx_9 = edx_8 s>> 4
    int32_t eax_16 = esi_3 + (arg2 - ((edx_9 u>> 0x1f) + edx_9)) * 0x28
    arg1[1] = eax_16
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_16

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
