// 函数: sub_6f7410
// 地址: 0x6f7410
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 4)
    int32_t eax_3
    int32_t edx_1
    eax_3, edx_1 = sub_6f754f(data_7fc348, arg2)
    data_7fc340 = eax_3
    data_7fc344 = edx_1
    
    if (eax_3 == 0xffffffff)
        return GetLastError()
    
    SetLastError(NO_ERROR)
    char eax_4 = sub_6f7513(data_7fc348, data_7fc340, data_7fc344)
    char ebx_1 = eax_4
    enum WIN32_ERROR result
    
    if (eax_4 == 0)
        result = GetLastError()
        
        if (result != NO_ERROR)
            return result
        
        ebx_1 = 4
    
    int32_t eax_5 = sub_6f74d7(data_7fc348, data_7fc340, data_7fc344)
    
    if (eax_5 == 0)
        result = GetLastError()
        
        if (result != NO_ERROR)
            return result
        
        eax_5 = 0xffffffff
    
    data_7fc338 = eax_5
    data_7fc33c = ebx_1
else
    if (arg1 != 5)
        return ERROR_INVALID_PARAMETER
    
    data_7fc33c = 0
    data_7fc338 = 0
    data_7fc340 = 0
    data_7fc344 = 0

return NO_ERROR
