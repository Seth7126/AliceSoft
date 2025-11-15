// 函数: sub_50e1e0
// 地址: 0x50e1e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737ca8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_90 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0xbc) != 0xffffffff)
    int32_t eax_5 = sub_50e5e0(arg1 + 0xcc)
    int32_t var_7c
    int32_t* ecx = &var_7c
    bool cond:1_1 = eax_5 s>= *(arg1 + 0xbc)
    int32_t* eax_6 = &var_7c
    var_7c = eax_5
    
    if (cond:1_1)
        ecx = arg1 + 0xbc
    
    if (*(arg1 + 0xbc) s>= eax_5)
        eax_6 = arg1 + 0xbc
    
    int32_t var_94_2 = *eax_6
    int32_t var_98_1 = *ecx
    eax_3 = sub_50dd00(arg1)

char var_48
int32_t* eax_7 = sub_4079d0(eax_3, arg1 + 0xcc, &var_48, arg2)
int32_t var_8_1 = 0
void* var_78
sub_417750(eax_7, eax_7, &var_78, arg1 + 0xe4)
var_8_1.b = 2
int32_t var_34

if (var_34 u>= 0x10)
    sub_403160(var_48.d, var_34 + 1, 1)

int32_t var_34_1 = 0xf
int32_t var_38 = 0
var_48 = 0
int32_t eax_10 = sub_50e5e0(&var_78)
int32_t ebx_1 = *(arg1 + 0x170)
void* var_60
int32_t var_4c

if (ebx_1 s>= eax_10)
    sub_4055a0(arg1 + 0xcc, arg2, 0, 0xffffffff)
else
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    sub_403590(&var_30, arg2, 0, 0xffffffff)
    var_8_1.b = 3
    var_8_1.b = 4
    sub_508fe0(&var_30, 
        ebx_1 - sub_50e5e0(sub_4079d0(arg1 + 0xe4, arg1 + 0xcc, &var_60, arg1 + 0xe4)))
    var_8_1.b = 3
    
    if (var_4c u>= 0x10)
        sub_403160(var_60, var_4c + 1, 1)
    
    sub_4055a0(arg1 + 0xcc, &var_30, 0, 0xffffffff)
    var_8_1.b = 2
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30.d, var_1c_1 + 1, 1)

*(arg1 + 0xba) = 1
var_8_1.b = 5
sub_508ce0(arg1 + 0x114, sub_4079d0(arg1 + 0xe4, arg1 + 0xcc, &var_60, arg1 + 0xe4))

if (var_4c u>= 0x10)
    sub_403160(var_60, var_4c + 1, 1)

int32_t result_1
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_78, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
