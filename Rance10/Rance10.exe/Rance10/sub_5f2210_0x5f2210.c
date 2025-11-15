// 函数: sub_5f2210
// 地址: 0x5f2210
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741b00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_3c = nullptr
int32_t var_38 = 0
int32_t var_34 = 0
int32_t var_8_1 = 0
var_8_1.b = 1
var_8_1.b = 0
void* var_2c
int32_t ebx
ebx.b = sub_67edf0(sub_5f20c0(&var_2c, arg1), &var_3c)
int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

char* esi = var_3c

if (ebx.b == 0 || esi == var_38)
    ebx.b = 0
else
    char var_2d = 0
    sub_4263a0(&var_3c, &var_2d)
    esi = var_3c
    
    if (*esi != 0)
        char* ecx_6 = esi
        char i
        
        do
            i = *ecx_6
            ecx_6 = &ecx_6[1]
        while (i != 0)
        sub_403490(arg2, esi, ecx_6 - &ecx_6[1])
        ebx.b = 1
    else
        sub_403490(arg2, esi, nullptr)
        ebx.b = 1

if (esi != 0)
    sub_403160(esi, var_34 - esi, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return ebx.b
