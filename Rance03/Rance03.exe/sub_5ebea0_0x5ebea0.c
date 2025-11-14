// 函数: sub_5ebea0
// 地址: 0x5ebea0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cb9e3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_f8
int32_t eax_2 = __security_cookie ^ &var_f8
int32_t __saved_edi
int32_t var_10c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** lpParameters = arg1
int32_t ebx = 0
int32_t var_f4 = 0
void* ecx = data_75d510

if (ecx != 0)
    sub_5e5700(ecx)
    ecx = data_75d510

HWND edi = nullptr
HINSTANCE hInstance = nullptr

if (ecx != 0)
    hInstance = *(ecx + 0x10)
    edi = **(ecx + 0xc)

int32_t var_c4 = 0xf
int32_t var_c8 = 0
char var_d8 = 0
int32_t var_4 = 0
int32_t var_dc = 0xf
int32_t var_e0 = 0
char var_f0 = 0
var_4.b = 1
char var_a8
int32_t var_28
char eax_8

if (lpParameters[4] u>= 7)
    var_4.b = 2
    int32_t var_f4_1 = 1
    int32_t var_4_1 = 3
    ebx = 3
    int32_t var_f4_2 = 3
    eax_8 = sub_40c250(sub_402d30(&var_a8, sub_403070(lpParameters, &var_28, 0, 7)), "http://")

char var_c0
char var_90
char eax_11

if ((lpParameters[4] u< 7 || eax_8 == 0) && lpParameters[4] u>= 8)
    int32_t var_4_2 = 4
    int32_t ebx_1 = ebx | 4
    int32_t var_f4_3 = ebx_1
    int32_t var_4_3 = 5
    ebx = ebx_1 | 8
    int32_t var_f4_4 = ebx
    eax_11 = sub_40c250(sub_402d30(&var_c0, sub_403070(lpParameters, &var_90, 0, 8)), "https://")

char var_f5

if ((lpParameters[4] u< 7 || eax_8 == 0) && (lpParameters[4] u< 8 || eax_11 == 0))
    var_f5 = 0
else
    var_f5 = 1

if ((ebx.b & 8) != 0)
    ebx &= 0xfffffff7
    int32_t var_ac
    
    if (var_ac u>= 0x10)
        j__free(var_c0.d)
    
    int32_t var_ac_1 = 0xf
    int32_t var_b0_1 = 0
    var_c0 = 0

if ((ebx.b & 4) != 0)
    ebx &= 0xfffffffb
    int32_t var_7c
    
    if (var_7c u>= 0x10)
        j__free(var_90.d)
    
    int32_t var_7c_1 = 0xf
    int32_t var_80_1 = 0
    var_90 = 0

if ((ebx.b & 2) != 0)
    ebx &= 0xfffffffd
    int32_t var_94
    
    if (var_94 u>= 0x10)
        j__free(var_a8.d)
    
    int32_t var_94_1 = 0xf
    int32_t var_98_1 = 0
    var_a8 = 0

int32_t var_4_4 = 1
int32_t var_14

if ((ebx.b & 1) != 0 && var_14 u>= 0x10)
    j__free(var_28)

char* ecx_7 = &var_d8
void* const var_114
void* var_110_5

if (var_f5 == 0)
    sub_402110(ecx_7, 0x6eb914, 0x13)
    var_110_5 = 0x27
    var_114 = &data_6eb928
else
    sub_402110(ecx_7, 0x6eb8cc, 0x16)
    var_110_5 = 0x2c
    var_114 = &data_6eb8e4

sub_402110(&var_f0, var_114, var_110_5)
int32_t var_74 = 0
struct win32only::CDialog::usernotice::COpenWebDlg::VTable* dwInitParam =
    &usernotice::COpenWebDlg::`vftable'{for `win32only::CDialog'}
int32_t var_5c = 0xf
int32_t var_60 = 0
char var_70 = 0
int32_t var_44 = 0xf
int32_t var_48 = 0
char var_58 = 0
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
var_4_4.b = 6
sub_401ff0(&var_70, &var_d8, 0, 0xffffffff)

if (&var_58 != lpParameters)
    sub_401ff0(&var_58, lpParameters, 0, 0xffffffff)

sub_401ff0(&var_40, &var_f0, 0, 0xffffffff)
int32_t eax_12 = DialogBoxParamA(hInstance, 0x9ccc, edi, sub_697100, &dwInitParam)
int32_t var_74_1 = eax_12

if (eax_12 == 1)
    if (lpParameters[5] u>= 0x10)
        lpParameters = *lpParameters
    
    ShellExecuteA(edi, "open", "IExplore", lpParameters, nullptr, SW_SHOWNORMAL)

int32_t result = sub_64af70(&dwInitParam)

if (var_dc u>= 0x10)
    result = j__free(var_f0.d)

int32_t var_dc_1 = 0xf
int32_t var_e0_1 = 0
var_f0 = 0

if (var_c4 u>= 0x10)
    result = j__free(var_d8.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_f8)
return result
