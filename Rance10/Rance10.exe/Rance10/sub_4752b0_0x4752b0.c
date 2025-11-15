// 函数: sub_4752b0
// 地址: 0x4752b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72df3b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0

if (*(arg1 + 0x1c) == 0)
    struct exfile::CDefineData::VTable** eax_3 = sub_6e810c(0xa4)
    struct exfile::CDefineData::VTable** var_38_1 = eax_3
    int32_t var_8_1 = 0
    var_8_1.b = 1
    int32_t var_34_1 = 1
    void* var_30
    *(arg1 + 0x1c) = sub_46da00(eax_3, sub_46de30(arg1, &var_30), arg2)
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        sub_403160(var_30, var_1c + 1, 1)

int32_t result = *(arg1 + 0x1c)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
