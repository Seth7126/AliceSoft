// 函数: sub_5fe670
// 地址: 0x5fe670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7423f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = (arg2 - arg1) s/ 0x38

if (result s>= 2)
    struct sys43vm::CCallFuncCount::VTable* var_50
    sub_5fe030(&var_50, arg2 - 0x38)
    int32_t var_8_1 = 0
    
    if (arg2 - 0x30 != arg1 + 8)
        sub_403590(arg2 - 0x30, arg1 + 8, 0, 0xffffffff)
    
    *(arg2 - 0x18) = *(arg1 + 0x20)
    sub_5fe0d0(arg2 - 0x14, arg1 + 0x24)
    *(arg2 - 8) = *(arg1 + 0x30)
    int32_t ecx_6 = *(arg1 + 0x34)
    *(arg2 - 4) = ecx_6
    int32_t var_64_3 = ecx_6
    void* eax_12 = (arg2 - 0x38 - arg1) s/ 0x38
    sub_5fe4c0(eax_12, nullptr, arg1, eax_12, &var_50)
    result = sub_5fb5a0(&var_50)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
