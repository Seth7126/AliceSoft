// 函数: sub_58cd30
// 地址: 0x58cd30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c7c20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t edi = arg1[1]
int32_t* eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x2e8ba2e9, edi - *arg1)
int32_t edx_3 = edx_2 s>> 4
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3

if (ecx_2 u> 3)
    eax_3 = (3 - ecx_2) * 0x58 + edi
    int32_t* esi_1 = eax_3
    
    if (eax_3 != edi)
        do
            (*(*esi_1 + 0x18))(0)
            esi_1 = &esi_1[0x16]
        while (esi_1 != edi)
    
    arg1[1] = eax_3
else if (ecx_2 u< 3)
    sub_58ce50(arg1, 3 - ecx_2)
    int32_t var_8_1 = 0
    int32_t* var_2c_1 = arg1
    int32_t eax_8
    int32_t edx_4
    edx_4:eax_8 = muls.dp.d(0x2e8ba2e9, arg1[1] - *arg1)
    int32_t edx_5 = edx_4 s>> 4
    sub_58d060(arg1[1], 3 - ((edx_5 u>> 0x1f) + edx_5))
    int32_t eax_12
    int32_t edx_7
    edx_7:eax_12 = muls.dp.d(0x2e8ba2e9, arg1[1] - *arg1)
    int32_t edx_8 = edx_7 s>> 4
    int32_t eax_16 = (3 - ((edx_8 u>> 0x1f) + edx_8)) * 0x58
    arg1[1] += eax_16
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_16

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
