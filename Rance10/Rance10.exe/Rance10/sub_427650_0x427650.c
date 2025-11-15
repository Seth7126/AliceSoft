// 函数: sub_427650
// 地址: 0x427650
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729831
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* i = arg3
struct advengine::CValueSyntax::VTable** result = arg4
struct advengine::CValueSyntax::VTable** result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 0x18)
    struct advengine::CValueSyntax::VTable** result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = &advengine::CValueSyntax::`vftable'
        struct _EXCEPTION_REGISTRATION_RECORD** eax_3
        eax_3.b = *(i + 4)
        result[1].b = eax_3.b
        sub_4275f0(&result[2], i + 8)
        result[5] = *(i + 0x14)
    
    result = &result[6]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
