// 函数: sub_5cef80
// 地址: 0x5cef80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** eax_3 = sub_5d0530(arg1, arg2)
struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** result

if (eax_3.b == 0)
    result = sub_5cf030(arg1, arg2, arg3)
    
    if (result.b != 0)
        result.b = 1
else
    int32_t var_8_1 = 0
    void* var_2c
    struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** esi_1 =
        sub_67eeb0(sub_4079d0(eax_3, arg1 + 4, &var_2c, arg2))
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    *arg3 = esi_1
    
    if (esi_1 != 0)
        result.b = 1
    else
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
