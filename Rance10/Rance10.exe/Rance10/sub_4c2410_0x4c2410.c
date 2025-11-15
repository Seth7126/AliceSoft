// 函数: sub_4c2410
// 地址: 0x4c2410
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edx = arg1 + 0x14c

if (*(arg1 + 0x160) u>= 0x10)
    edx = *edx

int32_t* ecx_1

if (arg2[5] u< 0x10)
    ecx_1 = arg2
else
    ecx_1 = *arg2

int32_t edi_1 = edx[4]
int32_t eax_4 = edi_1
int32_t ebx = arg2[4]

if (ebx u< edi_1)
    eax_4 = ebx

int32_t result = arg3
void* edi_2

if (sub_406ac0(eax_4, edx, ecx_1, eax_4) != 0)
    edi_2 = arg1
label_4c24b0:
    sub_4beba0(edi_2 + 0xb8, arg2, result, arg4, arg5, arg6)
    (*(**(*(sub_4efcc0(*(edi_2 + 0xa4)) + 0x44) + 0x80) + 0x3c))(eax_2)
    int32_t result_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, 0x75d035, nullptr)
    int32_t var_8_1 = 0
    void* esi_1 = *(sub_4efcc0(*(edi_2 + 0xa4)) + 0x44)
    sub_555e00(esi_1, 0x13, 1)
    sub_55d4d0(*(esi_1 + 0x80), &var_2c)
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_2c.d, result + 1, 1)
else
    edi_2 = arg1
    
    if (ebx u< edi_1 || ebx u> edi_1 || result != *(edi_2 + 0x1c8))
        goto label_4c24b0
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
