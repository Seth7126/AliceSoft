// 函数: sub_630260
// 地址: 0x630260
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745558
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_14 = arg3
int32_t var_18 = 0
int32_t __saved_ebp
char* eax_4 = (**arg2)(__security_cookie ^ &__saved_ebp)
char* eax_5 = (**arg2)()

if (eax_5 != 0)
    char i
    
    do
        i = *eax_5
        eax_5 = &eax_5[1]
    while (i != 0)
    eax_5 -= &eax_5[1]

void* esi_1 = eax_5 + eax_4
void var_38
sub_62d750(&var_38, arg4)
int32_t var_8_1 = 0
char* eax_7 = sub_62d9b0(&var_38, esi_1, eax_4, &var_38)
void* eax_9 = sub_62da60(&var_38, esi_1, eax_7, &var_38)
*(arg3 + 0x14) = 0xf
*(arg3 + 0x10) = 0
*arg3 = 0

if (eax_7 != eax_9)
    sub_403490(arg3, eax_7, eax_9 - eax_7)

void* var_2c

if (var_2c != 0)
    int32_t var_24
    sub_403160(var_2c, (var_24 - var_2c) s>> 2, 4)
    int32_t var_2c_1 = 0
    int32_t var_28_1 = 0
    int32_t var_24_1 = 0

void* var_34
sub_406910(&var_34)
sub_403160(var_34, 1, 0xc)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
