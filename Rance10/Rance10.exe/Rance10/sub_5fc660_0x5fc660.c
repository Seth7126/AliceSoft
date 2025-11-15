// 函数: sub_5fc660
// 地址: 0x5fc660
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742280
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t ebx = arg1[1]
int32_t esi_1 = ebx - *arg1
int32_t* eax_4
int32_t edx
edx:eax_4 = muls.dp.d(0x92492493, esi_1)
int32_t ecx_2 = esi_1 s/ 0x38

if (ecx_2 u> arg2)
    int32_t* edi_2 = ebx + (arg2 - ecx_2) * 0x38
    int32_t* esi_2 = edi_2
    
    if (edi_2 != ebx)
        do
            (**esi_2)(0)
            esi_2 = &esi_2[0xe]
        while (esi_2 != ebx)
    
    eax_4 = arg1
    eax_4[1] = edi_2
else if (ecx_2 u< arg2)
    sub_5fc9a0(arg1, arg2 - ecx_2)
    int32_t var_8_1 = 0
    int32_t ecx_8 = arg1[1] - *arg1
    int32_t var_2c_1 = arg2
    int32_t var_30 = ecx_8
    sub_5fd330(arg1[1], arg2 - ecx_8 s/ 0x38)
    int32_t eax_20 = (arg2 - (arg1[1] - *arg1) s/ 0x38) * 0x38
    arg1[1] += eax_20
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_20

fsbase->NtTib.ExceptionList = ExceptionList
return eax_4
