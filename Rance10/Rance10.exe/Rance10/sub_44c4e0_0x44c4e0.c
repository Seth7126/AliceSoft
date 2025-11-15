// 函数: sub_44c4e0
// 地址: 0x44c4e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72acd0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = data_7fcb48
int32_t var_1c = 0xf
int32_t var_20 = 0
bool cond:0 = *arg1 != 0
char var_30 = 0
void* ecx

if (cond:0)
    char* ecx_1 = arg1
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_403490(&var_30, arg1, ecx)
int32_t var_8_1 = 0
int32_t var_8_2 = 0xffffffff
int32_t ebx
ebx.b = sub_44d910(edi + 0x50, &var_30)

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

bool result

if (ebx.b == 0)
    result = (*(**(edi + 0x44) + 0x10))(arg1)

if (ebx.b != 0 || result != 0)
    result = true
else
    void* var_48
    sub_403360(&var_48, arg1)
    int32_t var_8_3 = 1
    ebx.b = sub_44d910(edi + 0x60, &var_48)
    int32_t var_34
    
    if (var_34 u>= 0x10)
        sub_403160(var_48, var_34 + 1, 1)
    
    result = ebx.b != 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
