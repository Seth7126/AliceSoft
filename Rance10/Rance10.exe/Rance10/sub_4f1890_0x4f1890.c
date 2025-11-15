// 函数: sub_4f1890
// 地址: 0x4f1890
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736096
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* esi = *(arg1 + 0x1c)
void* i = *esi
void* i_1 = i

for (; i != esi; i = i_1)
    struct _EXCEPTION_REGISTRATION_RECORD** ebx_1 = *(i + 0x14)
    void var_54
    void* var_18_1 = &var_54
    int32_t var_1c_1 = *(i + 0x10)
    int32_t var_30_1 = 0
    var_8_1.b = 1
    
    if (arg2 != 0)
        int32_t var_30_2 = (**arg2)(&var_54)
    
    var_8_1.b = 0
    sub_526650(ebx_1, var_54)
    sub_429080(&i_1)

int32_t var_8_2 = 2
void arg_4

if (arg2 != 0)
    i = (*(*arg2 + 0x10))(arg2 != &arg_4)
fsbase->NtTib.ExceptionList = ExceptionList
return i
