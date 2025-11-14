// 函数: sub_658b60
// 地址: 0x658b60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cf628
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
enum WIN32_ERROR data
int32_t eax_2 = __security_cookie ^ &data
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CRegistry::VTable* const var_30 = &win32only::CRegistry::`vftable'
HKEY phkResult = nullptr
int32_t var_4 = 0
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_402110(&var_28, "Software\AliceSoft\DPParts", 0x1a)
HKEY hKey = phkResult

if (hKey != 0)
    RegCloseKey(hKey)
    phkResult = nullptr

PSTR lpSubKey = &var_28

if (var_14 u>= 0x10)
    lpSubKey = var_28.d

RegCreateKeyExA(0x80000001, lpSubKey, 0, nullptr, REG_OPTION_RESERVED, KEY_ALL_ACCESS, nullptr, 
    &phkResult, nullptr)

if (var_14 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_1 = 0xf
int32_t var_18_1 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsNo", 0x12)
HKEY hKey_1 = phkResult
enum WIN32_ERROR data_1
data_1.b = *(arg1 + 0x454) != 0
data = data_1

if (hKey_1 != 0)
    char* lpValueName = &var_28
    
    if (var_14_1 u>= 0x10)
        lpValueName = var_28.d
    
    RegSetValueExA(hKey_1, lpValueName, 0, REG_DWORD, &data, 4)

if (var_14_1 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_2 = 0xf
int32_t var_18_2 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsType", 0x14)
HKEY hKey_2 = phkResult
enum WIN32_ERROR data_2
data_2.b = *(arg1 + 0x455) != 0
data = data_2

if (hKey_2 != 0)
    char* lpValueName_1 = &var_28
    
    if (var_14_2 u>= 0x10)
        lpValueName_1 = var_28.d
    
    RegSetValueExA(hKey_2, lpValueName_1, 0, REG_DWORD, &data, 4)

if (var_14_2 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_3 = 0xf
int32_t var_18_3 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsPos", 0x13)
HKEY hKey_3 = phkResult
enum WIN32_ERROR data_3
data_3.b = *(arg1 + 0x456) != 0
data = data_3

if (hKey_3 != 0)
    char* lpValueName_2 = &var_28
    
    if (var_14_3 u>= 0x10)
        lpValueName_2 = var_28.d
    
    RegSetValueExA(hKey_3, lpValueName_2, 0, REG_DWORD, &data, 4)

if (var_14_3 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_4 = 0xf
int32_t var_18_4 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsSize", 0x14)
HKEY hKey_4 = phkResult
enum WIN32_ERROR data_4
data_4.b = *(arg1 + 0x457) != 0
data = data_4

if (hKey_4 != 0)
    char* lpValueName_3 = &var_28
    
    if (var_14_4 u>= 0x10)
        lpValueName_3 = var_28.d
    
    RegSetValueExA(hKey_4, lpValueName_3, 0, REG_DWORD, &data, 4)

if (var_14_4 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_5 = 0xf
int32_t var_18_5 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsAlpha", 0x15)
HKEY hKey_5 = phkResult
enum WIN32_ERROR data_5
data_5.b = *(arg1 + 0x458) != 0
data = data_5

if (hKey_5 != 0)
    char* lpValueName_4 = &var_28
    
    if (var_14_5 u>= 0x10)
        lpValueName_4 = var_28.d
    
    RegSetValueExA(hKey_5, lpValueName_4, 0, REG_DWORD, &data, 4)

if (var_14_5 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_6 = 0xf
int32_t var_18_6 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsZ", 0x11)
HKEY hKey_6 = phkResult
enum WIN32_ERROR data_6
data_6.b = *(arg1 + 0x459) != 0
data = data_6

if (hKey_6 != 0)
    char* lpValueName_5 = &var_28
    
    if (var_14_6 u>= 0x10)
        lpValueName_5 = var_28.d
    
    RegSetValueExA(hKey_6, lpValueName_5, 0, REG_DWORD, &data, 4)

if (var_14_6 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_7 = 0xf
int32_t var_18_7 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsAddColor", 0x18)
HKEY hKey_7 = phkResult
enum WIN32_ERROR data_7
data_7.b = *(arg1 + 0x45a) != 0
data = data_7

if (hKey_7 != 0)
    char* lpValueName_6 = &var_28
    
    if (var_14_7 u>= 0x10)
        lpValueName_6 = var_28.d
    
    RegSetValueExA(hKey_7, lpValueName_6, 0, REG_DWORD, &data, 4)

if (var_14_7 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_8 = 0xf
int32_t var_18_8 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsMulColor", 0x18)
HKEY hKey_8 = phkResult
enum WIN32_ERROR data_8
data_8.b = *(arg1 + 0x45b) != 0
data = data_8

if (hKey_8 != 0)
    char* lpValueName_7 = &var_28
    
    if (var_14_8 u>= 0x10)
        lpValueName_7 = var_28.d
    
    RegSetValueExA(hKey_8, lpValueName_7, 0, REG_DWORD, &data, 4)

if (var_14_8 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_9 = 0xf
int32_t var_18_9 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsFilter", 0x16)
HKEY hKey_9 = phkResult
enum WIN32_ERROR data_9
data_9.b = *(arg1 + 0x45c) != 0
data = data_9

if (hKey_9 != 0)
    char* lpValueName_8 = &var_28
    
    if (var_14_9 u>= 0x10)
        lpValueName_8 = var_28.d
    
    RegSetValueExA(hKey_9, lpValueName_8, 0, REG_DWORD, &data, 4)

if (var_14_9 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_10 = 0xf
int32_t var_18_10 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsPassCursor", 0x1a)
HKEY hKey_10 = phkResult
enum WIN32_ERROR data_10
data_10.b = *(arg1 + 0x45d) != 0
data = data_10

if (hKey_10 != 0)
    char* lpValueName_9 = &var_28
    
    if (var_14_10 u>= 0x10)
        lpValueName_9 = var_28.d
    
    RegSetValueExA(hKey_10, lpValueName_9, 0, REG_DWORD, &data, 4)

if (var_14_10 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_11 = 0xf
int32_t var_18_11 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsClick", 0x15)
HKEY hKey_11 = phkResult
enum WIN32_ERROR data_11
data_11.b = *(arg1 + 0x45e) != 0
data = data_11

if (hKey_11 != 0)
    char* lpValueName_10 = &var_28
    
    if (var_14_11 u>= 0x10)
        lpValueName_10 = var_28.d
    
    RegSetValueExA(hKey_11, lpValueName_10, 0, REG_DWORD, &data, 4)

if (var_14_11 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_12 = 0xf
int32_t var_18_12 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsOrigin", 0x16)
HKEY hKey_12 = phkResult
enum WIN32_ERROR data_12
data_12.b = *(arg1 + 0x45f) != 0
data = data_12

if (hKey_12 != 0)
    char* lpValueName_11 = &var_28
    
    if (var_14_12 u>= 0x10)
        lpValueName_11 = var_28.d
    
    RegSetValueExA(hKey_12, lpValueName_11, 0, REG_DWORD, &data, 4)

if (var_14_12 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_13 = 0xf
int32_t var_18_13 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsLinkOnCursor", 0x1c)
HKEY hKey_13 = phkResult
enum WIN32_ERROR data_13
data_13.b = *(arg1 + 0x460) != 0
data = data_13

if (hKey_13 != 0)
    char* lpValueName_12 = &var_28
    
    if (var_14_13 u>= 0x10)
        lpValueName_12 = var_28.d
    
    RegSetValueExA(hKey_13, lpValueName_12, 0, REG_DWORD, &data, 4)

if (var_14_13 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_14 = 0xf
int32_t var_18_14 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsLinkMessageWindow", 0x21)
HKEY hKey_14 = phkResult
enum WIN32_ERROR data_14
data_14.b = *(arg1 + 0x461) != 0
data = data_14

if (hKey_14 != 0)
    char* lpValueName_13 = &var_28
    
    if (var_14_14 u>= 0x10)
        lpValueName_13 = var_28.d
    
    RegSetValueExA(hKey_14, lpValueName_13, 0, REG_DWORD, &data, 4)

if (var_14_14 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_15 = 0xf
int32_t var_18_15 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsOnCursorSound", 0x1d)
HKEY hKey_15 = phkResult
enum WIN32_ERROR data_15
data_15.b = *(arg1 + 0x462) != 0
data = data_15

if (hKey_15 != 0)
    char* lpValueName_14 = &var_28
    
    if (var_14_15 u>= 0x10)
        lpValueName_14 = var_28.d
    
    RegSetValueExA(hKey_15, lpValueName_14, 0, REG_DWORD, &data, 4)

if (var_14_15 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_16 = 0xf
int32_t var_18_16 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsClickSound", 0x1a)
HKEY hKey_16 = phkResult
enum WIN32_ERROR data_16
data_16.b = *(arg1 + 0x463) != 0
data = data_16

if (hKey_16 != 0)
    char* lpValueName_15 = &var_28
    
    if (var_14_16 u>= 0x10)
        lpValueName_15 = var_28.d
    
    RegSetValueExA(hKey_16, lpValueName_15, 0, REG_DWORD, &data, 4)

if (var_14_16 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_17 = 0xf
int32_t var_18_17 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsAlphaClip", 0x19)
HKEY hKey_17 = phkResult
enum WIN32_ERROR data_17
data_17.b = *(arg1 + 0x464) != 0
data = data_17

if (hKey_17 != 0)
    char* lpValueName_16 = &var_28
    
    if (var_14_17 u>= 0x10)
        lpValueName_16 = var_28.d
    
    RegSetValueExA(hKey_17, lpValueName_16, 0, REG_DWORD, &data, 4)

if (var_14_17 u>= 0x10)
    j__free(var_28.d)

sub_401f60(&var_28, "CListWindowShowsHitPixel")
HKEY hKey_18 = phkResult
enum WIN32_ERROR data_18
data_18.b = *(arg1 + 0x465) != 0
data = data_18

if (hKey_18 != 0)
    char* lpValueName_17 = &var_28
    
    if (var_14_17 u>= 0x10)
        lpValueName_17 = var_28.d
    
    RegSetValueExA(hKey_18, lpValueName_17, 0, REG_DWORD, &data, 4)

if (var_14_17 u>= 0x10)
    j__free(var_28.d)

sub_401f60(&var_28, "CListWindowShowsScale")
HKEY hKey_19 = phkResult
enum WIN32_ERROR data_19
data_19.b = *(arg1 + 0x466) != 0
data = data_19

if (hKey_19 != 0)
    char* lpValueName_18 = &var_28
    
    if (var_14_17 u>= 0x10)
        lpValueName_18 = var_28.d
    
    RegSetValueExA(hKey_19, lpValueName_18, 0, REG_DWORD, &data, 4)

if (var_14_17 u>= 0x10)
    j__free(var_28.d)

sub_401f60(&var_28, "CListWindowShowsAngle")
HKEY hKey_20 = phkResult
enum WIN32_ERROR data_20
data_20.b = *(arg1 + 0x467) != 0
data = data_20

if (hKey_20 != 0)
    char* lpValueName_19 = &var_28
    
    if (var_14_17 u>= 0x10)
        lpValueName_19 = var_28.d
    
    RegSetValueExA(hKey_20, lpValueName_19, 0, REG_DWORD, &data, 4)

if (var_14_17 u>= 0x10)
    j__free(var_28.d)

sub_401f60(&var_28, "CListWindowShowsSpeedRate")
HKEY hKey_21 = phkResult
enum WIN32_ERROR result
result.b = *(arg1 + 0x468) != 0
data = result

if (hKey_21 != 0)
    PSTR lpValueName_20 = &var_28
    
    if (var_14_17 u>= 0x10)
        lpValueName_20 = var_28.d
    
    result = RegSetValueExA(hKey_21, lpValueName_20, 0, REG_DWORD, &data, 4)
    hKey_21 = phkResult

if (var_14_17 u>= 0x10)
    result = j__free(var_28.d)
    hKey_21 = phkResult

if (hKey_21 != 0)
    result = RegCloseKey(hKey_21)
    hKey_21 = nullptr
    phkResult = nullptr

struct win32only::CRegistry::VTable* const var_30_1 = &win32only::CRegistry::`vftable'

if (hKey_21 != 0)
    result = RegCloseKey(hKey_21)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &data)
return result
