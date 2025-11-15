// 函数: sub_423f60
// 地址: 0x423f60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7293f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0xc) != 0)
    void** i_1
    sub_67f950(&i_1, arg2)
    int32_t var_8_1 = 0
    int32_t var_18
    
    for (void** i = i_1; i != var_18; i = &i[6])
        sub_427910(arg1 + 0x14)
        
        if (sub_427ba0(arg1 + 0x14, i, arg3) != 0)
            sub_417070(&i_1)
            int32_t eax_5
            eax_5.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_5
    
    sub_417070(&i_1)

struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
