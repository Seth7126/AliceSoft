// 函数: sub_609fa0
// 地址: 0x609fa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742c50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_80 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5 = 0
int32_t var_6c = 0
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
int32_t var_8_1 = 0
void* esi = *arg4
int32_t edi_1 = arg4[1]
char var_48
int32_t var_34

if (esi != edi_1)
    while (true)
        if (eax_5 != 0)
            sub_407430(&var_30, ", ", 2)
        
        var_8_1.b = 1
        sub_4055a0(&var_30, sub_5ffbe0(esi, &var_48, arg1), 0, 0xffffffff)
        var_8_1.b = 0
        eax_5 = var_34
        
        if (eax_5 u>= 0x10)
            eax_5 = sub_403160(var_48.d, eax_5 + 1, 1)
        
        esi += 0x18
        
        if (esi == edi_1)
            break
        
        eax_5 = var_20

int32_t* eax_8 = sub_4175e0(eax_5, arg3, &var_48, U"(")
var_8_1.b = 2
char var_60
char* eax_9 = sub_417750(eax_8, eax_8, &var_60, &var_30)
var_8_1.b = 3
sub_4176f0(eax_9.b, eax_9, arg2, U")")
int32_t var_4c

if (var_4c u>= 0x10)
    sub_403160(var_60.d, var_4c + 1, 1)

int32_t var_4c_1 = 0xf
int32_t var_50 = 0
var_60 = 0

if (var_34 u>= 0x10)
    sub_403160(var_48.d, var_34 + 1, 1)

int32_t var_34_1 = 0xf
int32_t var_38 = 0
var_48 = 0

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
