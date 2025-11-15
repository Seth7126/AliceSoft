// 函数: sub_62b130
// 地址: 0x62b130
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744d58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_68 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x1e0) = *(arg1 + 0x1dc)
int32_t var_38 = 0xa
int32_t var_34 = 0xa
int32_t var_30 = 0xc
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, "message", 7)
int32_t var_8_1 = 0
int32_t var_8_2 = 0xffffffff
int32_t ebx
ebx.b = sub_6141d0(arg1, &var_2c, nullptr, &var_38, &var_2c) == 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t result

if (ebx.b == 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_403490(&var_2c, "message::detail::GetMessageSpeedRate", 0x24)
    int32_t var_8_3 = 1
    int32_t var_8_4 = 0xffffffff
    ebx.b = sub_6141d0(arg1, &var_2c, 0xb, nullptr, 0) == 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    if (ebx.b != 0)
        result.b = 0
    else
        int32_t var_44 = 0x12
        int32_t var_40_1 = 0x12
        int32_t var_3c_1 = 0x12
        void* var_5c
        sub_403360(&var_5c, "message::detail::GetReadMessageTextColor")
        int32_t var_8_5 = 2
        ebx.b = sub_6141d0(arg1, &var_5c, nullptr, &var_44, &var_38) == 0
        int32_t var_48
        
        if (var_48 u>= 0x10)
            sub_403160(var_5c, var_48 + 1, 1)
        
        result.b = ebx.b == 0
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
