// 函数: sub_60bc40
// 地址: 0x60bc40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742e70
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t ebx = arg1[1]
int32_t* eax_4
int32_t edx_2
edx_2:eax_4 = muls.dp.d(0x38e38e39, ebx - *arg1)
int32_t edx_3 = edx_2 s>> 4
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3

if (ecx_2 u> arg2)
    void* edi_2 = ebx + (arg2 - ecx_2) * 0x48
    void* esi_1 = edi_2
    
    if (edi_2 != ebx)
        do
            sub_60e560(esi_1)
            esi_1 += 0x48
        while (esi_1 != ebx)
    
    eax_4 = arg1
    eax_4[1] = edi_2
else if (ecx_2 u< arg2)
    sub_60c570(arg1, arg2 - ecx_2)
    int32_t var_8_1 = 0
    int32_t ecx_8 = arg1[1] - *arg1
    int32_t var_2c_1 = arg2
    int32_t var_30 = ecx_8
    sub_60d620(arg1[1], arg2 - ecx_8 s/ 0x48)
    int32_t eax_12
    int32_t edx_8
    edx_8:eax_12 = muls.dp.d(0x38e38e39, arg1[1] - *arg1)
    int32_t edx_9 = edx_8 s>> 4
    int32_t eax_17 = (arg2 - ((edx_9 u>> 0x1f) + edx_9)) * 0x48
    arg1[1] += eax_17
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_17

fsbase->NtTib.ExceptionList = ExceptionList
return eax_4
