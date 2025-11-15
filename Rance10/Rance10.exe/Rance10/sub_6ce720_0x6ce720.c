// 函数: sub_6ce720
// 地址: 0x6ce720
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_454 = 0xffffffff
int32_t (* var_458)(void* arg1) = sub_748ff6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HWND var_460 = arg1
void* var_450
int32_t eax_2 = __security_cookie ^ &var_450
int32_t var_46c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char lParam
_memset(&lParam, 0, 0x400)
SendMessageA(GetParent(arg1), 0x465, 0x400, &lParam)
bool cond:0 = lParam != 0
int32_t var_424 = 0xf
int32_t var_428 = 0
char var_438 = 0
void* ecx

if (cond:0)
    char* ecx_1 = &lParam
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    void var_407
    ecx = ecx_1 - &var_407
else
    ecx = nullptr

sub_403490(&var_438, &lParam, ecx)
int32_t var_454_1 = 0
char var_420
sub_405130(&var_420, &var_438)
var_454_1.b = 2

if (var_424 u>= 0x10)
    sub_403160(var_438.d, var_424 + 1, 1)

int32_t var_424_1 = 0xf
int32_t var_428_1 = 0
var_438 = 0
char* eax_6 = sub_405070(&var_450, &var_420)
int32_t result_1

if (&var_420 != eax_6)
    if (result_1 u>= 0x10)
        sub_403160(var_420.d, result_1 + 1, 1)
    
    result_1 = 0xf
    int32_t var_410_1 = 0
    var_420 = 0
    sub_4056a0(&var_420, eax_6)

var_454_1.b = 2
int32_t var_43c

if (var_43c u>= 0x10)
    sub_403160(var_450, var_43c + 1, 1)

int32_t eax_13 = *(*(arg2 + 0xc) + 0x18)

if (eax_13 == 1)
    int32_t var_470_4 = 4
    sub_407430(&var_420, ".bmp", 4)
else if (eax_13 == 2)
    int32_t var_470_3 = 4
    sub_407430(&var_420, ".jpg", 4)

LPARAM lParam_1 = &var_420

if (result_1 u>= 0x10)
    lParam_1 = var_420.d

SendMessageA(GetParent(arg1), 0x468, 0x480, lParam_1)
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_420.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_450)
return result
