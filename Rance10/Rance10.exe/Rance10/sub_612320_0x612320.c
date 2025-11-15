// 函数: sub_612320
// 地址: 0x612320
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743640
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[0x7b] != 2)
    void var_60
    sub_6c4a50(&var_60)
    int32_t var_8_1 = 0
    char var_30_1 = 0
    void var_54
    
    if (&var_54 != arg2)
        sub_403590(&var_54, arg2, 0, 0xffffffff)
    
    void var_6c
    int32_t* eax_3 = sub_611e50(arg1, &var_6c)
    var_8_1.b = 1
    int32_t* ecx_3 = data_7fcb88
    HWND eax_4
    
    if (ecx_3 != 0)
        eax_4 = (**ecx_3)(0x76b3ac)
        
        if (eax_4 != 0)
            eax_4 = (*(eax_4->unused + 0x38))(eax_2)
    else
        eax_4 = nullptr
    
    sub_6c4f30(&var_60, arg1[2], eax_4, eax_3)
    var_8_1.b = 0
    sub_417070(&var_6c)
    sub_611fe0(arg1)
    arg1[0x7a].b = 0
    
    if (arg1[0x7b] == 0)
        arg1[0x7b] = 1
    
    sub_612420(&var_60)

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
