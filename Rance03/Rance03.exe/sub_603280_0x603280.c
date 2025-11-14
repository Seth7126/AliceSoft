// 函数: sub_603280
// 地址: 0x603280
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_3c
int32_t eax_1 = __security_cookie ^ &var_3c
void** lpFileName = arg1
uint32_t* var_2c = arg6
*arg2 = 0
*arg3 = 0
*arg4 = 0
*arg5 = 0
*arg6 = 0
*arg7 = 0
*arg8 = 0

if (lpFileName[5] u>= 0x10)
    lpFileName = *lpFileName

HANDLE eax_2 = CreateFileA(lpFileName, 0x80000000, FILE_SHARE_READ, nullptr, OPEN_EXISTING, 
    FILE_ATTRIBUTE_NORMAL, nullptr)

if (eax_2 != 0xffffffff)
    FILETIME var_28
    BOOL eax_3 = GetFileTime(eax_2, nullptr, &var_28, nullptr)
    FILETIME var_20
    BOOL eax_4
    
    if (eax_3 != 0)
        eax_4 = FileTimeToLocalFileTime(&var_28, &var_20)
    
    SYSTEMTIME systemTime
    
    if (eax_3 == 0 || eax_4 == 0)
        CloseHandle(eax_2)
    else if (FileTimeToSystemTime(&var_20, &systemTime) == 0)
        CloseHandle(eax_2)
    else if (CloseHandle(eax_2) != 0)
        *arg2 = zx.d(systemTime.wYear)
        *arg3 = zx.d(systemTime.wMonth)
        *arg4 = zx.d(systemTime.wDay)
        *arg5 = zx.d(systemTime.wDayOfWeek)
        *var_2c = zx.d(systemTime.wHour)
        *arg7 = zx.d(systemTime.wMinute)
        *arg8 = zx.d(systemTime.wSecond)
        uint32_t eax_12
        eax_12.b = 1
        sub_69a5bc(eax_1 ^ &var_3c)
        return eax_12

eax_2.b = 0
sub_69a5bc(eax_1 ^ &var_3c)
return eax_2
