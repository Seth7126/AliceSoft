// 函数: sub_45ee50
// 地址: 0x45ee50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** edx = arg1

if (edx[5] u>= 0x10)
    edx = *edx

int32_t result_1 = 0xf
int32_t var_1c = 0
char var_2c = 0
void* ecx

if (*edx != 0)
    void** ecx_1 = edx
    void* esi_1 = ecx_1 + 1
    char i
    
    do
        i = *ecx_1
        ecx_1 += 1
    while (i != 0)
    ecx = ecx_1 - esi_1
else
    ecx = nullptr

int32_t var_8_1 = 0
var_8_1.b = 1
void* var_44
sub_45aae0(sub_4175e0(sub_403490(&var_2c, edx, ecx), &var_2c, &var_44, U"\n"))
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44, var_30 + 1, 1)

int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
