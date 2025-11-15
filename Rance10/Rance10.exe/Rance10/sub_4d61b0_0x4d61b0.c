// 函数: sub_4d61b0
// 地址: 0x4d61b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_30
sub_405070(&var_30, arg2)
int32_t var_8_1 = 0
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatData::VTable** result =
    sub_4d5cf0(arg1, &var_30)

if (result == 0)
    result = sub_4d5940(arg1, &var_30)
    
    if (result != 0)
        void* var_54 = nullptr
        int32_t var_50_1 = 0
        int32_t var_4c_1 = 0
        var_8_1.b = 1
        char eax_5 = sub_4d5e60(arg1, &var_30, &var_54)
        int32_t ebx
        
        if (eax_5 != 0)
            void var_48
            sub_403360(&var_48, 0x75d04b)
            var_8_1.b = 2
            var_8_1.b = 1
            ebx.b = sub_4cdbd0(result, &var_48, &var_54) == 0
            sub_403320(&var_48)
        
        if (eax_5 == 0 || ebx.b == 0)
            result = sub_4d5c20(arg1, &var_30, result)
        else
            (*result)->vFunc_1(eax_2)
            result = nullptr
        
        void* eax_9 = var_54
        
        if (eax_9 != 0)
            sub_403160(eax_9, var_4c_1 - eax_9, 1)

int32_t var_1c

if (var_1c u>= 0x10)
    sub_403160(var_30, var_1c + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
