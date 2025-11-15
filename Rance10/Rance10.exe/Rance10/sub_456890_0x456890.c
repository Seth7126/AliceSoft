// 函数: sub_456890
// 地址: 0x456890
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b7c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t ebx = arg1[1]
int32_t* eax_4
int32_t edx_2
edx_2:eax_4 = muls.dp.d(0x78787879, ebx - *arg1)
int32_t edx_3 = edx_2 s>> 5
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3

if (ecx_2 u> arg2)
    int32_t* edi_2 = ebx + (arg2 - ecx_2) * 0x44
    int32_t* esi_1 = edi_2
    
    if (edi_2 != ebx)
        do
            (*(*esi_1 + 0x14))(0)
            esi_1 = &esi_1[0x11]
        while (esi_1 != ebx)
    
    eax_4 = arg1
    eax_4[1] = edi_2
else if (ecx_2 u< arg2)
    sub_456d70(arg1, arg2 - ecx_2)
    int32_t var_8_1 = 0
    int32_t ecx_8 = arg1[1] - *arg1
    int32_t var_2c_1 = arg2
    int32_t var_30 = ecx_8
    sub_4582b0(arg1[1], arg2 - ecx_8 s/ 0x44)
    int32_t eax_15
    int32_t edx_8
    edx_8:eax_15 = muls.dp.d(0x78787879, arg1[1] - *arg1)
    int32_t edx_9 = edx_8 s>> 5
    int32_t eax_22 = (arg2 - ((edx_9 u>> 0x1f) + edx_9)) * 0x44
    arg1[1] += eax_22
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_22

fsbase->NtTib.ExceptionList = ExceptionList
return eax_4
