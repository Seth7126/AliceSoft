// 函数: sub_43f950
// 地址: 0x43f950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6b6780
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t ebx = arg1[1]
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x4ec4ec4f, ebx - *arg1)
int32_t edx_3 = edx_2 s>> 5
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3

if (ecx_2 u> arg2)
    int32_t* edi_3 = (arg2 - ecx_2) * 0x68 + ebx
    int32_t* esi_1 = edi_3
    
    if (edi_3 != ebx)
        do
            eax_3 = (**esi_1)(0)
            esi_1 = &esi_1[0x1a]
        while (esi_1 != ebx)
    
    arg1[1] = edi_3
else if (ecx_2 u< arg2)
    sub_43fab0(arg1, arg2 - ecx_2)
    int32_t var_8_1 = 0
    struct anteater::CADVMessageElement::VTable** esi_2 = arg1[1]
    int32_t var_2c_1 = arg2
    int32_t eax_7
    int32_t edx_4
    edx_4:eax_7 = muls.dp.d(0x4ec4ec4f, esi_2 - *arg1)
    int32_t edx_5 = edx_4 s>> 5
    sub_43fcc0(esi_2, arg2 - ((edx_5 u>> 0x1f) + edx_5))
    int32_t eax_11
    int32_t edx_8
    edx_8:eax_11 = muls.dp.d(0x4ec4ec4f, arg1[1] - *arg1)
    int32_t edx_9 = edx_8 s>> 5
    int32_t eax_15 = (arg2 - ((edx_9 u>> 0x1f) + edx_9)) * 0x68
    arg1[1] += eax_15
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_15

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
