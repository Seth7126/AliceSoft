// 函数: sub_4750b0
// 地址: 0x4750b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72dee8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void* var_44
void* var_2c
sub_462db0(&var_2c, sub_46d8e0(&var_44, arg2))
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44, var_30 + 1, 1)

void** result = sub_432330(arg1 + 0x2c, &var_2c)
void** result_2 = *(arg1 + 0x2c)
void** result_1 = result

if (result_1 != result_2)
    result = sub_412ca0(&var_2c, &result_1[4])

if (result_1 == result_2 || result.b != 0)
    result_1 = result_2

void* ebx

if (result_1 != result_2)
    int32_t eax_7 = *(arg1 + 0x24)
    int32_t* edx_2 = *(arg1 + 0x20)
    
    if (edx_2 != eax_7)
        while (*edx_2 != result_1[0xa])
            edx_2 = &edx_2[1]
            
            if (edx_2 == eax_7)
                break
        
        if (edx_2 != eax_7)
            sub_6feca0(edx_2, &edx_2[1], eax_7 - &edx_2[1])
            *(arg1 + 0x24) -= 4
    
    int32_t* ecx_5 = result_1[0xa]
    
    if (ecx_5 != 0)
        (*(*ecx_5 + 0x30))(1)
    
    void var_48
    sub_46f200(arg1 + 0x2c, &var_48, result_1)
    ebx.b = 1
else
    ebx.b = 0

int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
