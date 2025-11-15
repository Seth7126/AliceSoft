// 函数: __Strftime_l
// 地址: 0x70e73f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_1c
_LocaleUpdate::_LocaleUpdate(&var_1c, arg6)
int32_t result = 0
void* var_18
uint32_t CodePage = *(var_18 + 0x14)

if (arg1 == 0 || arg2 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
else
    *arg1 = 0
    
    if (arg3 == 0 || arg4 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
    else
        int32_t cchWideChar = MultiByteToWideChar(CodePage, 0, arg3, 0xffffffff, nullptr, 0)
        
        if (cchWideChar != 0)
            int32_t edi
            int32_t var_28_2 = edi
            wchar16* lpWideCharStr = __malloc_base(cchWideChar * 2)
            
            if (lpWideCharStr != 0)
                if (MultiByteToWideChar(CodePage, 0, arg3, 0xffffffff, lpWideCharStr, cchWideChar)
                        != 0)
                    enum WIN32_ERROR lpWideCharStr_1 = __malloc_base(arg2 * 2)
                    
                    if (lpWideCharStr_1 != NO_ERROR)
                        int32_t result_1 =
                            __Wcsftime_l(lpWideCharStr_1, arg2, lpWideCharStr, arg4, arg5, arg6)
                        
                        if (result_1 != 0)
                            if (WideCharToMultiByte(CodePage, 0, lpWideCharStr_1, 0xffffffff, arg1, 
                                    arg2, nullptr, nullptr) != 0)
                                result = result_1
                            else
                                ___acrt_errno_map_os_error(GetLastError())
                    
                    __free_base(lpWideCharStr_1)
                else
                    ___acrt_errno_map_os_error(GetLastError())
            
            __free_base(lpWideCharStr)
        else
            ___acrt_errno_map_os_error(GetLastError())

char var_10

if (var_10 != 0)
    void* ecx_7 = var_1c
    *(ecx_7 + 0x350) &= 0xfffffffd

return result
