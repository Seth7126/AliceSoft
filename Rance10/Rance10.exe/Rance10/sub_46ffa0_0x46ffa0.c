// 函数: sub_46ffa0
// 地址: 0x46ffa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7278a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
void* ecx

if (*arg2 != 0)
    char* ecx_1 = arg2
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

int32_t ecx_3 = sub_403490(&var_2c, arg2, ecx)
int32_t var_44_1 = 1
int32_t var_8_1 = 0
char var_30 = 0x2e
void* result

if (sub_42cb30(&var_2c, &var_30, ecx_3) == 0xffffffff)
    result = sub_46eb40(arg1 + 8, &var_2c)
else
    result = Concurrency::details::_StructuredTaskCollection::~_StructuredTaskCollection(arg1 + 8)

int32_t ebx
ebx.b = result != 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
