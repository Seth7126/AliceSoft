// 函数: sub_4d5940
// 地址: 0x4d5940
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72acd0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatData::VTable** result_1

if (*(arg1 + 0x3c) != 0)
    int32_t var_8_1 = 0
    void* var_30
    result_1 = sub_4d5af0(arg1, sub_4d55d0(&var_30, arg2))
    int32_t var_8_2 = 0xffffffff
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        sub_403160(var_30, var_1c + 1, 1)

struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatData::VTable** result

if (*(arg1 + 0x3c) == 0 || result_1 == 0)
    result = sub_4d5a20(arg1, arg2)
    
    if (result == 0)
        struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatData::VTable** 
            result_2
        
        if (*(arg1 + 0x3c) != result.b)
            int32_t var_8_3 = 1
            void var_48
            result_2 = sub_4d5af0(arg1, sub_4d5470(&var_48, arg2))
            sub_403320(&var_48)
        
        if (*(arg1 + 0x3c) == result.b || result_2 == 0)
            result = nullptr
        else
            result = result_2
else
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
