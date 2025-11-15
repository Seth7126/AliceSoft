// 函数: sub_5d5830
// 地址: 0x5d5830
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
float var_30 = 0f
int32_t result_1 = 0xf
int32_t var_1c = 0
bool cond:0 = *arg2 != 0
char var_2c = 0
void* ecx

if (cond:0)
    char* ecx_1 = arg2
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_403490(&var_2c, arg2, ecx)
int32_t var_8_1 = 0

if (sub_5d5000(arg1 - 4, &var_30, &var_2c) != 0)
    char* edx_1 = &var_2c
    
    if (result_1 u>= 0x10)
        edx_1 = var_2c.d
    
    int32_t* var_40_2 = var_30 i+ 4
    (*(*(var_30 i+ 4) + 0xc))(edx_1, arg3)
else
    var_30 = arg3

int32_t result = result_1
var_30 = fconvert.s(unimplemented  {fst dword [ebp-0x2c], st0})

if (result u>= 0x10)
    unimplemented  {fstp st0, st0}
    unimplemented  {fstp st0, st0}
    result = sub_403160(var_2c.d, result + 1, 1)
    unimplemented  {fld st0, dword [ebp-0x2c]}

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
