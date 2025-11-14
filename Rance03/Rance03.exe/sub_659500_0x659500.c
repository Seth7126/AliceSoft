// 函数: sub_659500
// 地址: 0x659500
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cf658
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_8c
int32_t eax_2 = __security_cookie ^ &var_8c
int32_t __saved_edi
int32_t var_9c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CRegistry::VTable* const var_80 = &win32only::CRegistry::`vftable'
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

char* lpSubKey = &var_28

if (var_14 u>= 0x10)
    lpSubKey = var_28.d

RegOpenKeyExA(0x80000001, lpSubKey, 0, KEY_READ, &phkResult)

if (var_14 u>= 0x10)
    j__free(var_28.d)

int32_t data_8 = 1
int32_t data_11 = 1
int32_t data_13 = 1
int32_t data_15 = 1
int32_t data_9 = 1
int32_t data_3 = 1
int32_t data_16 = 0
int32_t data_10 = 0
int32_t data_14 = 0
int32_t data = 0
int32_t data_12 = 0
int32_t data_1 = 0
int32_t data_2 = 0
int32_t data_4
__builtin_memset(&data_4, 0, 0x14)
int32_t var_50 = 0
int32_t var_48 = 0
int32_t var_14_1 = 0xf
int32_t var_18_1 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsNo", 0x12)
HKEY hKey_2 = phkResult
uint32_t var_88
enum REG_VALUE_TYPE var_84

if (hKey_2 != 0)
    var_84 = REG_DWORD
    var_88 = 4
    char* lpValueName = &var_28
    
    if (var_14_1 u>= 0x10)
        lpValueName = var_28.d
    
    RegQueryValueExA(hKey_2, lpValueName, nullptr, &var_84, &data_8, &var_88)

if (var_14_1 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_2 = 0xf
int32_t var_18_2 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsType", 0x14)
HKEY hKey_3 = phkResult

if (hKey_3 != 0)
    var_88 = 4
    var_84 = REG_DWORD
    char* lpValueName_1 = &var_28
    
    if (var_14_2 u>= 0x10)
        lpValueName_1 = var_28.d
    
    RegQueryValueExA(hKey_3, lpValueName_1, nullptr, &var_88, &data_11, &var_84)

if (var_14_2 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_3 = 0xf
int32_t var_18_3 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsPos", 0x13)
HKEY hKey_4 = phkResult

if (hKey_4 != 0)
    var_88 = 4
    var_84 = REG_DWORD
    char* lpValueName_2 = &var_28
    
    if (var_14_3 u>= 0x10)
        lpValueName_2 = var_28.d
    
    RegQueryValueExA(hKey_4, lpValueName_2, nullptr, &var_88, &data_13, &var_84)

if (var_14_3 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_4 = 0xf
int32_t var_18_4 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsSize", 0x14)
HKEY hKey_5 = phkResult

if (hKey_5 != 0)
    var_88 = 4
    var_84 = REG_DWORD
    char* lpValueName_3 = &var_28
    
    if (var_14_4 u>= 0x10)
        lpValueName_3 = var_28.d
    
    RegQueryValueExA(hKey_5, lpValueName_3, nullptr, &var_88, &data_15, &var_84)

if (var_14_4 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_5 = 0xf
int32_t var_18_5 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsAlpha", 0x15)
HKEY hKey_6 = phkResult

if (hKey_6 != 0)
    var_88 = 4
    var_84 = REG_DWORD
    char* lpValueName_4 = &var_28
    
    if (var_14_5 u>= 0x10)
        lpValueName_4 = var_28.d
    
    RegQueryValueExA(hKey_6, lpValueName_4, nullptr, &var_88, &data_9, &var_84)

if (var_14_5 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_6 = 0xf
int32_t var_18_6 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsZ", 0x11)
HKEY hKey_7 = phkResult

if (hKey_7 != 0)
    var_88 = 4
    var_84 = REG_DWORD
    char* lpValueName_5 = &var_28
    
    if (var_14_6 u>= 0x10)
        lpValueName_5 = var_28.d
    
    RegQueryValueExA(hKey_7, lpValueName_5, nullptr, &var_88, &data_3, &var_84)

if (var_14_6 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_7 = 0xf
int32_t var_18_7 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsAddColor", 0x18)
HKEY hKey_8 = phkResult

if (hKey_8 != 0)
    var_88 = 4
    var_84 = REG_DWORD
    char* lpValueName_6 = &var_28
    
    if (var_14_7 u>= 0x10)
        lpValueName_6 = var_28.d
    
    RegQueryValueExA(hKey_8, lpValueName_6, nullptr, &var_88, &data_16, &var_84)

if (var_14_7 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_8 = 0xf
int32_t var_18_8 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsMulColor", 0x18)
HKEY hKey_9 = phkResult
int32_t data_5

if (hKey_9 != 0)
    var_88 = 4
    var_84 = REG_DWORD
    char* lpValueName_7 = &var_28
    
    if (var_14_8 u>= 0x10)
        lpValueName_7 = var_28.d
    
    RegQueryValueExA(hKey_9, lpValueName_7, nullptr, &var_88, &data_5, &var_84)

if (var_14_8 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_9 = 0xf
int32_t var_18_9 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsFilter", 0x16)
HKEY hKey_10 = phkResult

if (hKey_10 != 0)
    var_88 = 4
    var_84 = REG_DWORD
    char* lpValueName_8 = &var_28
    
    if (var_14_9 u>= 0x10)
        lpValueName_8 = var_28.d
    
    RegQueryValueExA(hKey_10, lpValueName_8, nullptr, &var_88, &data_10, &var_84)

if (var_14_9 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_10 = 0xf
int32_t var_18_10 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsPassCursor", 0x1a)
HKEY hKey_11 = phkResult
int32_t data_7

if (hKey_11 != 0)
    var_88 = 4
    var_84 = REG_DWORD
    char* lpValueName_9 = &var_28
    
    if (var_14_10 u>= 0x10)
        lpValueName_9 = var_28.d
    
    RegQueryValueExA(hKey_11, lpValueName_9, nullptr, &var_88, &data_7, &var_84)

if (var_14_10 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_11 = 0xf
int32_t var_18_11 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsClick", 0x15)
HKEY hKey_12 = phkResult

if (hKey_12 != 0)
    var_88 = 4
    var_84 = REG_DWORD
    char* lpValueName_10 = &var_28
    
    if (var_14_11 u>= 0x10)
        lpValueName_10 = var_28.d
    
    RegQueryValueExA(hKey_12, lpValueName_10, nullptr, &var_88, &data_14, &var_84)

if (var_14_11 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_12 = 0xf
int32_t var_18_12 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsOrigin", 0x16)
HKEY hKey_13 = phkResult

if (hKey_13 != 0)
    var_88 = 4
    var_84 = REG_DWORD
    char* lpValueName_11 = &var_28
    
    if (var_14_12 u>= 0x10)
        lpValueName_11 = var_28.d
    
    RegQueryValueExA(hKey_13, lpValueName_11, nullptr, &var_88, &data, &var_84)

if (var_14_12 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_13 = 0xf
int32_t var_18_13 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsLinkOnCursor", 0x1c)
HKEY hKey_14 = phkResult

if (hKey_14 != 0)
    var_88 = 4
    var_84 = REG_DWORD
    char* lpValueName_12 = &var_28
    
    if (var_14_13 u>= 0x10)
        lpValueName_12 = var_28.d
    
    RegQueryValueExA(hKey_14, lpValueName_12, nullptr, &var_88, &data_12, &var_84)

if (var_14_13 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_14 = 0xf
int32_t var_18_14 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsLinkMessageWindow", 0x21)
HKEY hKey_15 = phkResult

if (hKey_15 != 0)
    var_88 = 4
    var_84 = REG_DWORD
    char* lpValueName_13 = &var_28
    
    if (var_14_14 u>= 0x10)
        lpValueName_13 = var_28.d
    
    RegQueryValueExA(hKey_15, lpValueName_13, nullptr, &var_88, &data_1, &var_84)

if (var_14_14 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_15 = 0xf
int32_t var_18_15 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsOnCursorSound", 0x1d)
HKEY hKey_16 = phkResult

if (hKey_16 != 0)
    var_88 = 4
    var_84 = REG_DWORD
    char* lpValueName_14 = &var_28
    
    if (var_14_15 u>= 0x10)
        lpValueName_14 = var_28.d
    
    RegQueryValueExA(hKey_16, lpValueName_14, nullptr, &var_88, &data_2, &var_84)

if (var_14_15 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_16 = 0xf
int32_t var_18_16 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsClickSound", 0x1a)
HKEY hKey_17 = phkResult

if (hKey_17 != 0)
    var_88 = 4
    var_84 = REG_DWORD
    PSTR lpValueName_15 = &var_28
    
    if (var_14_16 u>= 0x10)
        lpValueName_15 = var_28.d
    
    RegQueryValueExA(hKey_17, lpValueName_15, nullptr, &var_88, &data_4, &var_84)

if (var_14_16 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_17 = 0xf
int32_t var_18_17 = 0
var_28 = 0
sub_402110(&var_28, "CListWindowShowsAlphaClip", 0x19)
HKEY hKey_18 = phkResult
int32_t data_6

if (hKey_18 != 0)
    var_88 = 4
    var_84 = REG_DWORD
    char* lpValueName_16 = &var_28
    
    if (var_14_17 u>= 0x10)
        lpValueName_16 = var_28.d
    
    RegQueryValueExA(hKey_18, lpValueName_16, nullptr, &var_88, &data_6, &var_84)

if (var_14_17 u>= 0x10)
    j__free(var_28.d)

sub_401f60(&var_28, "CListWindowShowsHitPixel")
int32_t var_58
sub_698380(&var_80, &var_28, &var_58)

if (var_14_17 u>= 0x10)
    j__free(var_28.d)

sub_401f60(&var_28, "CListWindowShowsScale")
sub_698380(&var_80, &var_28, &var_50)

if (var_14_17 u>= 0x10)
    j__free(var_28.d)

sub_401f60(&var_28, "CListWindowShowsSpeedRate")
sub_698380(&var_80, &var_28, &var_48)

if (var_14_17 u>= 0x10)
    j__free(var_28.d)

bool cond:18 = data_8 == 1
*(arg1 + 0x467) = 0
bool cond:19 = data_11 == 1
*(arg1 + 0x454) = cond:18
bool cond:20 = data_13 == 1
*(arg1 + 0x455) = cond:19
bool cond:21 = data_15 == 1
*(arg1 + 0x456) = cond:20
bool cond:22 = data_9 == 1
*(arg1 + 0x457) = cond:21
bool cond:23 = data_3 == 1
*(arg1 + 0x458) = cond:22
bool cond:24 = data_16 == 1
*(arg1 + 0x459) = cond:23
bool cond:25 = data_5 == 1
*(arg1 + 0x45a) = cond:24
bool cond:26 = data_10 == 1
*(arg1 + 0x45b) = cond:25
bool cond:27 = data_7 == 1
*(arg1 + 0x45c) = cond:26
bool cond:28 = data_14 == 1
*(arg1 + 0x45d) = cond:27
bool cond:29 = data == 1
*(arg1 + 0x45e) = cond:28
bool cond:30 = data_12 == 1
*(arg1 + 0x45f) = cond:29
bool cond:31 = data_1 == 1
*(arg1 + 0x460) = cond:30
bool cond:32 = data_2 == 1
*(arg1 + 0x461) = cond:31
bool cond:33 = data_4 == 1
*(arg1 + 0x462) = cond:32
bool cond:34 = data_6 == 1
*(arg1 + 0x463) = cond:33
bool cond:35 = var_58 == 1
*(arg1 + 0x464) = cond:34
bool cond:36 = var_50 == 1
*(arg1 + 0x465) = cond:35
bool cond:37 = var_48 == 1
*(arg1 + 0x466) = cond:36
*(arg1 + 0x468) = cond:37
HKEY hKey_1 = phkResult

if (hKey_1 != 0)
    RegCloseKey(hKey_1)
    hKey_1 = nullptr
    phkResult = nullptr

var_80 = &win32only::CRegistry::`vftable'

if (hKey_1 != 0)
    hKey_1 = RegCloseKey(hKey_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_8c)
return hKey_1
