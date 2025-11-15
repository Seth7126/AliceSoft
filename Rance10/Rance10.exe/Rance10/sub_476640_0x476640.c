// 函数: sub_476640
// 地址: 0x476640
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7270c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = *(arg1 + 0xc)
struct _EXCEPTION_REGISTRATION_RECORD** result

for (void** i = *edi; i != edi; i = *i)
    result = (*(*i[2] + 8))(eax_2)
    
    if (result.b == 0)
        struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = result.b
        sub_403490(&var_2c, 0x75fbc4, 0x26)
        int32_t var_8_1 = 0
        sub_6c52e0(&var_2c)
        int32_t var_8_2 = 0xffffffff
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, var_18_1 + 1, 1)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
