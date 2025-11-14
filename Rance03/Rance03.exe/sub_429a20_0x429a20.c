// 函数: sub_429a20
// 地址: 0x429a20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5138
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_40
int32_t eax_2 = __security_cookie ^ &var_40
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0xf
int32_t var_30 = 0
var_40 = 0
int32_t var_4 = 0
int32_t eax_6
int32_t edx
edx:eax_6 = sx.q(*(arg1 + 0x28))
int32_t var_50 = (eax_6 + (edx & 0x3ff)) s>> 0xa
int32_t var_28
int32_t* eax_9 = sub_4691f0(&var_28, 0x6dace8)

if (&var_40 != eax_9)
    if (var_2c u>= 0x10)
        j__free(var_40.d)
    
    var_2c = 0xf
    int32_t var_30_1 = 0
    var_40 = 0
    sub_4030b0(&var_40, eax_9)

int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28)

if (*(arg1 + 0x3c) == 0)
    sub_4057c0(&var_40, 0x6dad18, 0x10)
else
    void* eax_10 = arg1 + 0x2c
    
    if (*(arg1 + 0x40) u>= 0x10)
        eax_10 = *eax_10
    
    void* var_50_4 = eax_10
    var_4.b = 1
    sub_403110(&var_40, sub_4691f0(&var_28, 0x6dad08), nullptr, 0xffffffff)
    var_4.b = 0
    
    if (var_14 u>= 0x10)
        j__free(var_28)

if (*(arg1 + 0x54) != 0)
    var_4.b = 2
    sub_403110(&var_40, sub_4216c0(arg1 + 0x44, 0x6dacf8, &var_28, arg1 + 0x44), nullptr, 
        0xffffffff)
    var_4.b = 0
    
    if (var_14 u>= 0x10)
        j__free(var_28)

int32_t* lParam = &var_40

if (var_2c u>= 0x10)
    lParam = var_40.d

void* ecx_5

if (*lParam != 0)
    int32_t* lParam_1 = lParam
    void* edx_2 = lParam_1 + 1
    char i
    
    do
        i = *lParam_1
        lParam_1 += 1
    while (i != 0)
    ecx_5 = lParam_1 - edx_2
else
    ecx_5 = nullptr

sub_402110(arg1 + 0xc, lParam, ecx_5)
HWND hWnd = *(arg1 + 8)
*(arg1 + 0x24) = 0
LRESULT result = SendMessageA(hWnd, 0x401, 0x100, lParam)

if (var_2c u>= 0x10)
    result = j__free(var_40.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
