// 函数: ?_mbstowcs_l_helper@@YAIPA_WPBDIPAU__crt_locale_pointers@@@Z
// 地址: 0x717ca7
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_28 = edi
int16_t* lpWideCharStr = arg1
int32_t result = 0

if (lpWideCharStr != 0)
    if (arg3 == 0)
        return 0
    
    *lpWideCharStr = 0

if (arg2 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff

void* var_1c
_LocaleUpdate::_LocaleUpdate(&var_1c, arg4)
void* var_18
void* eax_3 = var_18
int32_t eax_5

if (lpWideCharStr == 0)
    if (*(eax_3 + 0xa8) != 0)
        result = 0xffffffff
        eax_5 = MultiByteToWideChar(*(eax_3 + 8), MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg2, 
            0xffffffff, nullptr, 0)
        
        if (eax_5 != 0)
            result = eax_5 - 1
        else
            *__errno() = 0x2a
    else
        char* esi = arg2
        
        do
            eax_3.b = *esi
            esi = &esi[1]
        while (eax_3.b != 0)
        
        result = esi - &esi[1]
else if (*(eax_3 + 0xa8) != 0)
    result = 0xffffffff
    eax_5 = MultiByteToWideChar(*(eax_3 + 8), MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg2, 
        0xffffffff, lpWideCharStr, arg3)
    
    if (eax_5 != 0)
        result = eax_5 - 1
    else
        enum WIN32_ERROR eax_6 = GetLastError()
        int32_t result_1
        
        if (eax_6 == ERROR_INSUFFICIENT_BUFFER)
            char* lpMultiByteStr = arg2
            char* lpMultiByteStr_1 = lpMultiByteStr
            char* lpMultiByteStr_2 = lpMultiByteStr_1
            int32_t edx_1 = arg3
            
            if (arg3 != 0)
                while (true)
                    lpMultiByteStr.b = *lpMultiByteStr_1
                    
                    if (lpMultiByteStr.b != 0)
                        char* lpMultiByteStr_3 = lpMultiByteStr_2
                        
                        if (__isleadbyte_l(lpMultiByteStr.b, &var_18) != 0)
                            lpMultiByteStr_3 = &lpMultiByteStr_3[1]
                            
                            if (*lpMultiByteStr_3 == 0)
                                goto label_717db5
                        
                        edx_1 -= 1
                        lpMultiByteStr_1 = &lpMultiByteStr_3[1]
                        lpMultiByteStr_2 = lpMultiByteStr_1
                        
                        if (edx_1 != 0)
                            continue
                    
                    lpMultiByteStr = arg2
                    break
            
            result_1 = MultiByteToWideChar(*(var_18 + 8), MB_PRECOMPOSED, lpMultiByteStr, 
                lpMultiByteStr_1 - lpMultiByteStr, lpWideCharStr, arg3)
        
        if (eax_6 == ERROR_INSUFFICIENT_BUFFER && result_1 != 0)
            result = result_1
        else
        label_717db5:
            *__errno() = 0x2a
            *lpWideCharStr = 0
else if (arg3 != 0)
    do
        *lpWideCharStr = zx.w(arg2[result])
        
        if (arg2[result] == 0)
            break
        
        result += 1
        lpWideCharStr = &lpWideCharStr[1]
    while (result u< arg3)
char var_10

if (var_10 != 0)
    void* ecx_5 = var_1c
    *(ecx_5 + 0x350) &= 0xfffffffd

return result
