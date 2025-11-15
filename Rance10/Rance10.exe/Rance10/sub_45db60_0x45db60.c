// 函数: sub_45db60
// 地址: 0x45db60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bd60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg4 + 0x2c) == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 1

int32_t result = *(arg4 + 0x20)

if (result != 0x18 && result != 0x20)
    result.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

void* var_28
sub_431b80(&var_28, 
    ((*(arg4 + 0x1c) & 1) + *(arg4 + 0x1c)) * ((*(arg4 + 0x18) & 1) + *(arg4 + 0x18)) * 3)
int32_t var_8_1 = 0
int32_t* ebx

if (sub_45df70(&var_28, arg4) != 0)
    int32_t eax_14 = (*(arg4 + 0x18) & 1) + *(arg4 + 0x18)
    void* var_1c
    sub_45e1a0(eax_14, &var_28, &var_1c, eax_14, (*(arg4 + 0x1c) & 1) + *(arg4 + 0x1c))
    var_8_1.b = 1
    void* eax_15 = var_1c
    arg3[1] - *arg3
    int32_t var_18
    char eax_8 = sub_45ded0(eax_15, var_18 - eax_15, arg2)
    void* ecx_13 = var_1c
    ebx.b = eax_8 != 0
    
    if (ecx_13 != 0)
        int32_t var_14
        sub_403160(ecx_13, var_14 - ecx_13, 1)
        var_1c = nullptr
        int32_t var_18_1 = 0
        int32_t var_14_1 = 0
else
    ebx.b = 0

void* edx_5 = var_28
int32_t var_20

if (edx_5 != 0)
    sub_403160(edx_5, var_20 - edx_5, 1)
fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
