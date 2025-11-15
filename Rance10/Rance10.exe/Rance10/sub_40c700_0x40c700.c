// 函数: sub_40c700
// 地址: 0x40c700
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = *(arg1 + 0x10)
int32_t result = sub_40a000(esi + 0x2c, arg2, arg3)

if (result != 0xffffffff)
    int32_t* ecx_2 = *(esi + 0x30) + (result << 2)
    void* ecx_3 = *ecx_2
    void* eax_4
    eax_4.b = *(*ecx_2 + 0x28)
    eax_4.b = eax_4.b == 0
    *(ecx_3 + 0x28) = eax_4.b
    sub_407000(ecx_3)
    void* var_2c
    char* eax_5 = sub_40cf70(*(arg1 + 0x10), &var_2c, arg2)
    int32_t var_8_1 = 0
    sub_408460(*(arg1 + 0x10) + 0x3c, eax_5, arg3, eax_4.b)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
