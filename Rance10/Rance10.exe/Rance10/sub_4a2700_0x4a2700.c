// 函数: sub_4a2700
// 地址: 0x4a2700
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731128
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_94 = 0
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
var_8_1.b = 1
int32_t var_94_1 = 1
int32_t var_8_2 = 2
int32_t ebx = 3
int32_t var_94_2 = 3
void* var_8c
char var_74
char eax_6 = sub_407560(sub_4051e0(&var_74, sub_405480(&var_2c, &var_8c, var_1c - 4, 4)), "html")
char var_8d_1
char var_5c
char var_44
char eax_10

if (eax_6 == 0)
    int32_t var_8_3 = 3
    int32_t var_94_3 = 7
    ebx = 0xf
    eax_10 = sub_407560(sub_4051e0(&var_44, sub_405480(&var_2c, &var_5c, var_1c - 3, 3)), 0x761390)
    var_8d_1 = 1

if (eax_6 != 0 || eax_10 != 0)
    var_8d_1 = 0

if ((ebx.b & 8) != 0)
    ebx &= 0xfffffff7
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0

if ((ebx.b & 4) != 0)
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c.d, var_48 + 1, 1)
    
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c = 0

int32_t var_60

if (var_60 u>= 0x10)
    sub_403160(var_74.d, var_60 + 1, 1)

int32_t var_8_4 = 0
int32_t var_60_1 = 0xf
int32_t var_64 = 0
var_74 = 0
int32_t var_78

if (var_78 u>= 0x10)
    sub_403160(var_8c, var_78 + 1, 1)

if (var_8d_1 == 0)
    (*(*(arg1 + 4) + 0x7c))(eax_2)
    Sleep(0xc8)
    char* lpFile = &var_2c
    
    if (result_1 u>= 0x10)
        lpFile = var_2c.d
    
    ShellExecuteA(nullptr, nullptr, lpFile, nullptr, nullptr, SW_SHOWNORMAL)

int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
