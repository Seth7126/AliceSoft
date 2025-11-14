// 函数: sub_10010760
// 地址: 0x10010760
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_1001947b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2
int32_t result = 0

if (ebx == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0x80004003

int32_t __saved_edi

if ((*(**(arg1 + 0xc) + 0x14))(__security_cookie ^ &__saved_edi) == *(arg1 + 0x10))
    int32_t* eax_6 = sub_10001dc9(0x30)
    arg2 = eax_6
    int32_t var_4 = 0
    struct IEnumPins::CEnumPins::VTable** eax_7
    
    if (eax_6 == 0)
        eax_7 = nullptr
    else
        eax_7 = sub_10010670(eax_6, *(arg1 + 0xc), arg1)
    
    *ebx = eax_7
    
    if (eax_7 == 0)
        result = 0x8007000e
else
    *ebx = 0
    result = 0x80040203

fsbase->NtTib.ExceptionList = ExceptionList
return result
