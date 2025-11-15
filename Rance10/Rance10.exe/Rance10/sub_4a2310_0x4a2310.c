// 函数: sub_4a2310
// 地址: 0x4a2310
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731089
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = 0
int32_t var_114 = 0
int32_t result_1 = 0xf
int32_t var_1c = 0
char var_2c = 0
void* ecx

if (*arg2 != 0)
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
(*(*(arg1 + 4) + 0x7c))(eax_2)
HWND eax_5 = (*(*(arg1 + 4) + 0x38))()
HINSTANCE hInstance = *(arg1 + 0x14)
int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
var_8_1.b = 2
int32_t eax_6 = var_1c

if (eax_6 u< 7)
    goto label_4a241c

var_8_1.b = 3
int32_t var_114_1 = 1
int32_t var_8_2 = 4
ebx = 3
int32_t var_114_2 = 3
char var_10d
void* var_10c
char var_a4
char var_8c
char var_74

if (sub_407560(sub_4051e0(&var_a4, sub_405480(&var_2c, &var_10c, 0, 7)), "http://") != 0)
    var_10d = 1
else
    eax_6 = var_1c
label_4a241c:
    char eax_12
    
    if (eax_6 u>= 8)
        int32_t var_8_3 = 5
        int32_t ebx_1 = ebx | 4
        int32_t var_114_3 = ebx_1
        ebx = ebx_1 | 8
        eax_12 = sub_407560(sub_4051e0(&var_74, sub_405480(&var_2c, &var_8c, 0, 8)), "https://")
    
    if (eax_6 u< 8 || eax_12 == 0)
        var_10d = 0
    else
        var_10d = 1

if ((ebx.b & 8) != 0)
    ebx &= 0xfffffff7
    int32_t var_60
    
    if (var_60 u>= 0x10)
        sub_403160(var_74.d, var_60 + 1, 1)
    
    int32_t var_60_1 = 0xf
    int32_t var_64_1 = 0
    var_74 = 0

if ((ebx.b & 4) != 0)
    ebx &= 0xfffffffb
    int32_t var_78
    
    if (var_78 u>= 0x10)
        sub_403160(var_8c.d, var_78 + 1, 1)
    
    int32_t var_78_1 = 0xf
    int32_t var_7c_1 = 0
    var_8c = 0

if ((ebx.b & 2) != 0)
    ebx &= 0xfffffffd
    int32_t var_90
    
    if (var_90 u>= 0x10)
        sub_403160(var_a4.d, var_90 + 1, 1)
    
    int32_t var_90_1 = 0xf
    int32_t var_94_1 = 0
    var_a4 = 0

int32_t var_8_4 = 2
int32_t var_f8

if ((ebx.b & 1) != 0 && var_f8 u>= 0x10)
    sub_403160(var_10c, var_f8 + 1, 1)

char* ecx_11 = &var_5c
void* const var_12c_5
void* var_128_1

if (var_10d == 0)
    sub_403490(ecx_11, 0x7611c0, 0x13)
    var_128_1 = 0x27
    var_12c_5 = &data_761198
else
    sub_403490(ecx_11, 0x761180, 0x16)
    var_128_1 = 0x2c
    var_12c_5 = &data_761150

sub_403490(&var_44, var_12c_5, var_128_1)
int32_t var_f0 = 0
struct win32only::CDialog::usernotice::COpenWebDlg::VTable* dwInitParam =
    &usernotice::COpenWebDlg::`vftable'{for `win32only::CDialog'}
int32_t var_d8 = 0xf
int32_t var_dc = 0
char var_ec = 0
int32_t var_c0 = 0xf
int32_t var_c4 = 0
char var_d4 = 0
int32_t var_a8 = 0xf
int32_t var_ac = 0
char var_bc = 0
var_8_4.b = 6
sub_403590(&var_ec, &var_5c, 0, 0xffffffff)
sub_403590(&var_d4, &var_2c, 0, 0xffffffff)
sub_403590(&var_bc, &var_44, 0, 0xffffffff)
int32_t eax_21 = DialogBoxParamA(hInstance, 0xaa, eax_5, sub_6cce00, &dwInitParam)
int32_t var_f0_1 = eax_21

if (eax_21 == 1)
    char* lpParameters = &var_2c
    
    if (result_1 u>= 0x10)
        lpParameters = var_2c.d
    
    ShellExecuteA(eax_5, "open", "IExplore", lpParameters, nullptr, SW_SHOWNORMAL)

sub_6c4890(&dwInitParam)

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t result = result_1
int32_t var_48_1 = 0xf
int32_t var_4c_1 = 0
var_5c = 0

if (result u>= 0x10)
    result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
