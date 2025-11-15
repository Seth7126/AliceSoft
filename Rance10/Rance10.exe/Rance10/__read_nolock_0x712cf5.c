// 函数: __read_nolock
// 地址: 0x712cf5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_34 = edi

if (arg1 != 0xfffffffe)
    int32_t var_1c_1
    enum SET_FILE_POINTER_MOVE_METHOD var_18_1
    int32_t eax_5
    char ecx
    int32_t edx_1
    int32_t edi_2
    
    if (arg1 s>= 0 && arg1 u< data_7fc918)
        var_18_1 = FILE_CURRENT
        edi_2 = arg1 s>> 6
        edx_1 = (arg1 & 0x3f) * 0x30
        eax_5 = (&data_7fc718)[edi_2]
        var_1c_1 = edx_1
        ecx = *(edx_1 + eax_5 + 0x28)
    
    if (arg1 s< 0 || arg1 u>= data_7fc918 || (ecx & 1) == 0)
        *___doserrno() = 0
        *__errno() = 9
    else
        uint32_t nNumberOfBytesToRead_1 = arg3
        
        if (nNumberOfBytesToRead_1 u<= 0x7fffffff)
            if (nNumberOfBytesToRead_1 == 0 || (ecx & 2) != 0)
                return 0
            
            if (arg2 != 0)
                HANDLE esi_1 = *(edx_1 + eax_5 + 0x18)
                eax_5.b = *(edx_1 + eax_5 + 0x29)
                char var_5_2 = eax_5.b
                void* lpBuffer_2 = nullptr
                int32_t eax_8 = sx.d(eax_5.b)
                int32_t result
                uint32_t nNumberOfBytesToRead
                void* lpBuffer
                char* lpBuffer_1
                
                if (eax_8 != 1)
                    if (eax_8 == 2 && ((not.d(nNumberOfBytesToRead_1)).b & 1) == 0)
                        goto label_712de3
                    
                    lpBuffer_1 = arg2
                    nNumberOfBytesToRead = nNumberOfBytesToRead_1
                    lpBuffer = lpBuffer_1
                label_712e72:
                    enum SET_FILE_POINTER_MOVE_METHOD edi_4 = FILE_BEGIN
                    int16_t* lpBuffer_3 = lpBuffer_1
                    uint32_t ebx_2 = (&data_7fc718)[edi_2]
                    uint32_t var_24 = ebx_2
                    int32_t ebx_3 = arg1
                    
                    if ((*(edx_1 + ebx_2 + 0x28) & 0x48) != 0)
                        uint32_t ebx_4
                        ebx_4.b = *(edx_1 + var_24 + 0x2a)
                        ebx_3 = arg1
                        
                        if (ebx_4.b != 0xa && nNumberOfBytesToRead_1 != 0)
                            ebx_3.b = ebx_4.b
                            edi_4 = var_18_1
                            *lpBuffer_1 = ebx_3.b
                            ebx_3 = arg1
                            lpBuffer = &lpBuffer_1[1]
                            nNumberOfBytesToRead = nNumberOfBytesToRead_1 - 1
                            *(edx_1 + (&data_7fc718)[edi_2] + 0x2a) = 0xa
                            
                            if (var_5_2 != 0)
                                int32_t eax_25
                                eax_25.b = *(edx_1 + (&data_7fc718)[edi_2] + 0x2b)
                                
                                if (eax_25.b != 0xa && nNumberOfBytesToRead_1 != 1)
                                    ebx_3.b = eax_25.b
                                    edi_4 = FILE_END
                                    *lpBuffer = ebx_3.b
                                    ebx_3 = arg1
                                    lpBuffer += 1
                                    nNumberOfBytesToRead = nNumberOfBytesToRead_1 - 2
                                    *(edx_1 + (&data_7fc718)[edi_2] + 0x2b) = 0xa
                                    int32_t eax_29
                                    eax_29.b = var_5_2
                                    
                                    if (eax_29.b == var_18_1.b)
                                        int32_t eax_31
                                        eax_31.b = *(edx_1 + (&data_7fc718)[edi_2] + 0x2c)
                                        
                                        if (eax_31.b != 0xa && nNumberOfBytesToRead_1 != 2)
                                            ebx_3.b = eax_31.b
                                            edi_4 = FILE_CURRENT | FILE_END
                                            *lpBuffer = ebx_3.b
                                            ebx_3 = arg1
                                            lpBuffer += 1
                                            nNumberOfBytesToRead = nNumberOfBytesToRead_1 - 3
                                            *(edx_1 + (&data_7fc718)[edi_2] + 0x2c) = 0xa
                    
                    uint32_t ecx_9
                    
                    if (__isatty(ebx_3) == 0
                        || (*(var_1c_1 + (&data_7fc718)[edi_2] + 0x28) & 0x80) == 0)
                    label_712fd9:
                        var_18_1.b = 0
                    label_712fed:
                        BOOL eax_47 =
                            ReadFile(esi_1, lpBuffer, nNumberOfBytesToRead, &var_24, nullptr)
                        
                        if (eax_47 != 0)
                            ecx_9 = arg3
                        
                        if (eax_47 == 0 || var_24 u> ecx_9)
                            enum WIN32_ERROR eax_43 = GetLastError()
                            
                            if (eax_43 == ERROR_ACCESS_DENIED)
                                *__errno() = 9
                                *___doserrno() = 5
                                result = 0xffffffff
                            else if (eax_43 != ERROR_BROKEN_PIPE)
                                ___acrt_errno_map_os_error(eax_43)
                                result = 0xffffffff
                            else
                                result = 0
                        else
                            result = edi_4 + var_24
                        label_71300f:
                            
                            if ((*(var_1c_1 + (&data_7fc718)[edi_2] + 0x28) & 0x80) != 0)
                                int32_t result_1
                                
                                if (var_5_2 == 2)
                                    uint32_t edi_5 = result u>> 1
                                    
                                    if (var_18_1.b == 0)
                                        result_1 = translate_text_mode_nolock<wchar_t>(ebx_3, 
                                            lpBuffer_3, edi_5)
                                    else
                                        result_1 = translate_utf16_from_console_nolock(ebx_3, 
                                            lpBuffer_3, edi_5)
                                else
                                    result_1 = translate_ansi_or_utf8_nolock(ebx_3, lpBuffer, 
                                        result, arg2, ecx_9 u>> 1)
                                
                                result = result_1
                    else
                        enum CONSOLE_MODE mode
                        
                        if (GetConsoleMode(esi_1, &mode) == 0)
                            goto label_712fd9
                        
                        if (var_5_2 != 2)
                            goto label_712fed
                        
                        if (ReadConsoleW(esi_1, lpBuffer, nNumberOfBytesToRead u>> 1, &var_24, 
                                nullptr) != 0)
                            ecx_9 = arg3
                            result = edi_4 + (var_24 << 1)
                            goto label_71300f
                        
                        ___acrt_errno_map_os_error(GetLastError())
                        result = 0xffffffff
                else if ((1 & (not.d(nNumberOfBytesToRead_1)).b) != 0)
                    uint32_t nNumberOfBytesToRead_3 = 4
                    uint32_t nNumberOfBytesToRead_2 = nNumberOfBytesToRead_1 u>> 1
                    nNumberOfBytesToRead = 4
                    
                    if (nNumberOfBytesToRead_2 u>= 4)
                        nNumberOfBytesToRead_3 = nNumberOfBytesToRead_2
                        nNumberOfBytesToRead = nNumberOfBytesToRead_2
                    
                    lpBuffer_2 = __malloc_base(nNumberOfBytesToRead_3)
                    __free_base(0)
                    __free_base(0)
                    lpBuffer = lpBuffer_2
                    
                    if (lpBuffer_2 != 0)
                        int32_t eax_20
                        int32_t edx_2
                        eax_20, edx_2 = __lseeki64_nolock(arg1, 0, 0, var_18_1)
                        int32_t ecx_1 = (&data_7fc718)[edi_2]
                        *(var_1c_1 + ecx_1 + 0x20) = eax_20
                        lpBuffer_1 = lpBuffer_2
                        *(var_1c_1 + ecx_1 + 0x24) = edx_2
                        edx_1 = var_1c_1
                        nNumberOfBytesToRead_1 = nNumberOfBytesToRead
                        goto label_712e72
                    
                    *__errno() = 0xc
                    *___doserrno() = 8
                    result = 0xffffffff
                else
                label_712de3:
                    *___doserrno() = 0
                    *__errno() = 0x16
                    __invalid_parameter_noinfo()
                    result = 0xffffffff
                __free_base(lpBuffer_2)
                return result
        
        *___doserrno() = 0
        *__errno() = 0x16
    
    __invalid_parameter_noinfo()
else
    *___doserrno() = 0
    *__errno() = 9

return 0xffffffff
