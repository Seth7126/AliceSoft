// 函数: sub_4f14d0
// 地址: 0x4f14d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73601f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg1
int32_t arg_4
int32_t ecx = arg_4

if (ecx s<= 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

int32_t var_34 = ecx
int32_t edi_2 = ecx s/ 0x2710
arg_4 = edi_2
struct partsengine::CPartsList::VTable** result = sub_4f15e0(esi)

if (result == 0)
    result = sub_6e810c(0x2c)
    struct partsengine::CPartsList::VTable** result_1 = result
    int32_t var_8_1 = 0
    int32_t eax_7 = arg_4 * 0x2710
    int32_t edi_3 = esi[3]
    int32_t esi_1 = esi[1]
    *result = &partsengine::CPartsList::`vftable'
    result[1] = 0x2710
    result[2] = eax_7
    sub_526770(&result[3])
    void** eax_8 = esi
    result[7] = esi_1
    esi = eax_8
    result[6] = eax_8
    result[8] = 0
    int32_t var_8_2 = 0xffffffff
    result[9] = edi_3
    result[0xa] = &esi[0xb]
    result[8] = esi[2]
    void* var_20
    sub_42ebc0(&esi[7], &var_20, &arg_4)
    *(var_20 + 0x14) = result
    edi_2 = arg_4

esi[9] = edi_2
esi[0xa] = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
