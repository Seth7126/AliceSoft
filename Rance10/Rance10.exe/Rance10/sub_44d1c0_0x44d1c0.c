// 函数: sub_44d1c0
// 地址: 0x44d1c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ae10
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_24 = nullptr
int32_t var_20 = 0
var_24 = sub_429890()
int32_t var_8_1 = 0
void** arg_4
sub_44d6f0(arg_4, &var_24)
int32_t* esi = var_24
void* i = *esi
void* i_1 = i

for (; i != esi; i = i_1)
    sub_44d310(i + 0x10, arg1 + 8)
    sub_429080(&i_1)

int32_t* var_1c = nullptr
int32_t var_18 = 0
var_1c = sub_429890()
var_8_1.b = 1
sub_44d800(arg_4, &var_1c)
int32_t* esi_1 = var_1c
void** eax_5 = *esi_1
arg_4 = eax_5

if (eax_5 != esi_1)
    do
        sub_44d1c0(&eax_5[4])
        sub_429080(&arg_4)
        eax_5 = arg_4
    while (eax_5 != esi_1)
    
    esi_1 = var_1c

int32_t* var_38_2 = esi_1
sub_44dce0(&var_1c, &arg_4, *esi_1)
sub_403160(var_1c, 1, 0x28)
int32_t* eax_7 = var_24
int32_t* var_38_3 = eax_7
sub_44dce0(&var_24, &arg_4, *eax_7)
int32_t result = sub_403160(var_24, 1, 0x28)
fsbase->NtTib.ExceptionList = ExceptionList
return result
