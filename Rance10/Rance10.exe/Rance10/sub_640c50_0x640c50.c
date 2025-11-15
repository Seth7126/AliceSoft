// 函数: sub_640c50
// 地址: 0x640c50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734898
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi_1 = *(arg1 + 0x48) * *(arg2 + 8)
HFONT result

if (*(arg1 + 0xe4) == 0 || *(arg1 + 0x110) != edi_1 || *(arg1 + 0x10c) != *(arg2 + 4))
    void* var_30
    char* eax_3 = sub_643a80(arg2, &var_30)
    int32_t var_8_1 = 0
    
    if (arg1 + 0xec != eax_3)
        sub_403590(arg1 + 0xec, eax_3, 0, 0xffffffff)
    
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        sub_403160(var_30, var_1c + 1, 1)
    
    *(arg1 + 0xe8) = edi_1
    *(arg1 + 0x104) = 0
    result = sub_6ce000(arg1 + 0xe0)
    
    if (result.b != 0)
        *(arg1 + 0x10c) = *(arg2 + 4)
        *(arg1 + 0x110) = edi_1
        result.b = 1
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
