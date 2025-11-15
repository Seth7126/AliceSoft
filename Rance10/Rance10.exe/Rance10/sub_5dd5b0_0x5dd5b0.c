// 函数: sub_5dd5b0
// 地址: 0x5dd5b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741669
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
struct thread::CCriticalLock::VTable* const var_38 = &thread::CCriticalLock::`vftable'
void* var_30 = &arg1[2]
EnterCriticalSection(arg1[3] + 4)
char var_34 = 1
int32_t var_8_1 = 1
int32_t* var_2c
void** arg_8
int32_t* eax_5 = sub_44cfc0(&var_2c, arg_8)
int32_t* var_1c = nullptr
SRWLOCK var_18 = 0
sub_4323a0(&var_1c, eax_5)
SRWLOCK var_28
__seterrormode(&var_28)
var_8_1.b = 3
int32_t* ecx_2 = var_2c

if (ecx_2 != 0)
    var_2c = nullptr
    (*(*ecx_2 + 4))(eax_2)

var_8_1.b = 2
___crtSetUnhandledExceptionFilter(&var_28)
sub_5dd8e0(arg1, &arg_8, &var_1c)
void** eax_7 = arg_8
int32_t* result

if (eax_7 == *arg1)
    int32_t var_24
    sub_5dd9b0(&var_24)
    var_8_1.b = 5
    sub_5ddb30(arg1, &var_2c, &var_1c)
    sub_57f5d0(&var_2c[6], &var_24)
    result = arg2
    int32_t eax_9 = var_24
    var_24 = 0
    int32_t var_14_2 = 1
    *result = eax_9
    int32_t var_20
    result[1] = var_20
    int32_t var_20_1 = 0
    __seterrormode(&var_18)
    var_8_1.b = 7
else
    result = arg2
    std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >(
        result, &eax_7[6])
    int32_t var_14_1 = 1
    __seterrormode(&var_18)
    var_8_1.b = 4

int32_t* ecx_9 = var_1c

if (ecx_9 != 0)
    var_1c = nullptr
    (*(*ecx_9 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&var_18)
LeaveCriticalSection(arg1[3] + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
