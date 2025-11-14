// 函数: __wctomb_s_l
// 地址: 0x6aa257
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

BOOL lpMultiByteStr = arg2

if (lpMultiByteStr == 0 && arg3 != 0)
    if (arg1 != 0)
        *arg1 = 0
    
    return 0

if (arg1 != 0)
    *arg1 = 0xffffffff

int32_t result

if (arg3 u<= 0x7fffffff)
    void* var_14
    sub_69beb0(&var_14, arg4)
    void* eax_4 = var_14
    result = 0
    wchar16 wideCharStr
    
    if (*(eax_4 + 0xa8) != 0)
        arg2 = 0
        int32_t eax_8 = WideCharToMultiByte(*(eax_4 + 4), 0, &wideCharStr, 1, lpMultiByteStr, arg3, 
            nullptr, &arg2)
        
        if (eax_8 == 0)
            if (GetLastError() == ERROR_INSUFFICIENT_BUFFER)
                if (lpMultiByteStr != 0 && arg3 != 0)
                    _memset(lpMultiByteStr, 0, arg3)
                
                goto label_6aa36e
            
            *__errno() = 0x2a
            result = *__errno()
        else if (arg2 != 0)
            *__errno() = 0x2a
            result = *__errno()
        else if (arg1 != 0)
            *arg1 = eax_8
    else
        eax_4.w = wideCharStr
        
        if (eax_4.w u<= 0xff)
            if (lpMultiByteStr == 0)
                goto label_6aa30d
            
            if (arg3 == 0)
            label_6aa36e:
                result = 0x22
                *__errno() = 0x22
                __invalid_parameter_noinfo()
            else
                *lpMultiByteStr = eax_4.b
            label_6aa30d:
                
                if (arg1 != 0)
                    *arg1 = 1
        else
            if (lpMultiByteStr != 0 && arg3 != 0)
                _memset(lpMultiByteStr, 0, arg3)
            
            *__errno() = 0x2a
            result = *__errno()
    char var_8
    void* var_c
    
    if (var_8 != 0)
        *(var_c + 0x70) &= 0xfffffffd
else
    result = 0x16
    *__errno() = 0x16
    __invalid_parameter_noinfo()

return result
