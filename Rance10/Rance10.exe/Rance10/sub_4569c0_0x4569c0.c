// 函数: sub_4569c0
// 地址: 0x4569c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b7e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t ebx = arg1[1]
int32_t* eax_4
int32_t edx_2
edx_2:eax_4 = muls.dp.d(0x3e0f83e1, ebx - *arg1)
int32_t edx_3 = edx_2 s>> 5
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3

if (ecx_2 u> arg2)
    int32_t* edi_3 = (arg2 - ecx_2) * 0x84 + ebx
    int32_t* esi_1 = edi_3
    
    if (edi_3 != ebx)
        do
            (*(*esi_1 + 0x30))(0)
            esi_1 = &esi_1[0x21]
        while (esi_1 != ebx)
    
    eax_4 = arg1
    eax_4[1] = edi_3
else if (ecx_2 u< arg2)
    sub_456e70(arg1, arg2 - ecx_2)
    int32_t var_8_1 = 0
    int32_t ecx_8 = arg1[1] - *arg1
    int32_t var_2c_1 = arg2
    int32_t var_30 = ecx_8
    sub_458310(arg1[1], arg2 - ecx_8 s/ 0x84)
    int32_t eax_12
    int32_t edx_8
    edx_8:eax_12 = muls.dp.d(0x3e0f83e1, arg1[1] - *arg1)
    int32_t edx_9 = edx_8 s>> 5
    int32_t eax_16 = (arg2 - ((edx_9 u>> 0x1f) + edx_9)) * 0x84
    arg1[1] += eax_16
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_16

fsbase->NtTib.ExceptionList = ExceptionList
return eax_4
