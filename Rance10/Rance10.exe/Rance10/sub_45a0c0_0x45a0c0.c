// 函数: sub_45a0c0
// 地址: 0x45a0c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bbb0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t ebx = arg1[1]
int32_t* eax_4
int32_t edx_2
edx_2:eax_4 = muls.dp.d(0x2e8ba2e9, ebx - *arg1)
int32_t edx_3 = edx_2 s>> 3
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3

if (ecx_2 u> arg2)
    int32_t* edi_3 = (arg2 - ecx_2) * 0x2c + ebx
    int32_t* esi_1 = edi_3
    
    if (edi_3 != ebx)
        do
            (*(*esi_1 + 0x10))(0)
            esi_1 = &esi_1[0xb]
        while (esi_1 != ebx)
    
    eax_4 = arg1
    eax_4[1] = edi_3
else if (ecx_2 u< arg2)
    sub_45a390(arg1, arg2 - ecx_2)
    int32_t var_8_1 = 0
    int32_t ecx_8 = arg1[1] - *arg1
    int32_t var_2c_1 = arg2
    int32_t var_30 = ecx_8
    sub_45a580(arg1[1], arg2 - ecx_8 s/ 0x2c)
    int32_t eax_12
    int32_t edx_8
    edx_8:eax_12 = muls.dp.d(0x2e8ba2e9, arg1[1] - *arg1)
    int32_t edx_9 = edx_8 s>> 3
    int32_t eax_16 = (arg2 - ((edx_9 u>> 0x1f) + edx_9)) * 0x2c
    arg1[1] += eax_16
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_16

fsbase->NtTib.ExceptionList = ExceptionList
return eax_4
