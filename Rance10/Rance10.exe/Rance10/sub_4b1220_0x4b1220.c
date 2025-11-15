// 函数: sub_4b1220
// 地址: 0x4b1220
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg2

for (int32_t* i = arg1; i != edi; i = &i[3])
    edi -= 0xc
    
    if (i == edi)
        break
    
    void* const var_1c
    sub_4275f0(&var_1c, i)
    int32_t var_8_1 = 0
    sub_4274a0(i, edi)
    result = sub_4274a0(edi, &var_1c)
    int32_t var_8_2 = 0xffffffff
    void* const ecx_3 = var_1c
    
    if (ecx_3 != 0)
        int32_t var_14
        result = sub_403160(ecx_3, (var_14 - ecx_3) s>> 2, 4)
        var_1c = nullptr
        int32_t var_18_1 = 0
        var_14 = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
