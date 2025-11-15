// 函数: sub_6818b0
// 地址: 0x6818b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_34
int32_t eax_1 = __security_cookie ^ &var_34
var_34 = arg6
int32_t* eax_4 = var_34
uint32_t* var_2c = arg7
*arg2 = 0
*arg4 = 0
*arg5 = 0
*eax_4 = 0
*arg7 = 0
*arg8 = 0
*arg9 = 0

if (arg3[5] u>= 0x10)
    arg3 = *arg3

HANDLE eax_6 = CreateFileA(arg3, 0x80000000, FILE_SHARE_READ, nullptr, OPEN_EXISTING, 
    FILE_ATTRIBUTE_NORMAL, nullptr)

if (eax_6 != 0xffffffff)
    FILETIME var_24
    BOOL eax_7 = GetFileTime(eax_6, nullptr, nullptr, &var_24)
    FILETIME var_1c
    BOOL eax_8
    
    if (eax_7 != 0)
        eax_8 = FileTimeToLocalFileTime(&var_24, &var_1c)
    
    SYSTEMTIME systemTime
    
    if (eax_7 == 0 || eax_8 == 0)
        CloseHandle(eax_6)
    else if (FileTimeToSystemTime(&var_1c, &systemTime) == 0)
        CloseHandle(eax_6)
    else if (CloseHandle(eax_6) != 0)
        int32_t* ecx_2 = var_34
        *arg2 = zx.d(systemTime.wYear)
        *arg4 = zx.d(systemTime.wMonth)
        *arg5 = zx.d(systemTime.wDay)
        *ecx_2 = zx.d(systemTime.wDayOfWeek)
        *var_2c = zx.d(systemTime.wHour)
        *arg8 = zx.d(systemTime.wMinute)
        *arg9 = zx.d(systemTime.wSecond)
        uint32_t eax_16
        eax_16.b = 1
        @__security_check_cookie@4(eax_1 ^ &var_34)
        return eax_16

eax_6.b = 0
@__security_check_cookie@4(eax_1 ^ &var_34)
return eax_6
