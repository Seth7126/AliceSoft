// 函数: sub_452100
// 地址: 0x452100
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b2f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = *arg2
int32_t result = arg2[1]

if (edx == result)
    result.b = 1
else
    int32_t edi_2 = ((result - edx) s>> 2) * 6
    
    if ((*(**(arg1 + 0x10) + 0x20))(eax_2) s>= edi_2)
        result.b = 1
    else
        int32_t var_40_1 = 0.d
        int32_t var_20 = 1
        int32_t var_1c_1 = 6
        int32_t var_18_1 = 7
        int32_t var_2c = 0
        int32_t var_28_1 = 0
        int32_t var_24_1 = 0
        sub_452440(&var_2c, &var_20, &var_14)
        int32_t var_8_1 = 0
        int32_t edx_1 = var_2c
        int32_t* ecx_3 = &var_2c
        
        if ((*(**(arg1 + 0x10) + 8))(edi_2, edx_1, (var_28_1 - edx_1) s>> 2, 1) != 0)
            sub_4043e0(ecx_3)
            result.b = 1
        else
            sub_4043e0(ecx_3)
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(var_14 ^ &__saved_ebp)
return result
