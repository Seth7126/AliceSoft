// 函数: ?InitializeCookie@Security@details@Concurrency@@SAKXZ
// 地址: 0x6eb491
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

data_7fc300 = 1
int32_t result = EncodePointer(&data_7fc308) ^ __security_cookie
FILETIME creationTime
FILETIME var_c

if (GetThreadTimes(GetCurrentThread(), &creationTime, &var_c, &var_c, &var_c) == 0)
    return result

return result ^ creationTime.dwHighDateTime ^ creationTime.dwLowDateTime
