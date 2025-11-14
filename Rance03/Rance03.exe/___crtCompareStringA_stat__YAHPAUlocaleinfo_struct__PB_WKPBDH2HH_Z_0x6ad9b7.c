// 函数: ?__crtCompareStringA_stat@@YAHPAUlocaleinfo_struct@@PB_WKPBDH2HH@Z
// 地址: 0x6ad9b7
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* lpMultiByteStr_1 = arg6
int32_t cbMultiByte = arg5
char* lpMultiByteStr = lpMultiByteStr_1
int32_t edi
int32_t var_3c = edi
enum COMPARESTRING_RESULT result

if (cbMultiByte s<= 0)
    if (cbMultiByte s>= 0xffffffff)
        goto label_6ad9f7
    
    result = 0
else
    lpMultiByteStr_1 = lpMultiByteStr
    cbMultiByte = sub_6adc3b(arg4, cbMultiByte)
label_6ad9f7:
    int32_t cbMultiByte_1 = arg7
    
    if (cbMultiByte_1 s<= 0)
        if (cbMultiByte_1 s>= 0xffffffff)
            goto label_6ada1c
        
        result = 0
    else
        cbMultiByte_1 = sub_6adc3b(lpMultiByteStr_1, cbMultiByte_1)
    label_6ada1c:
        uint32_t CodePage = arg8
        int32_t* lpWideCharStr = nullptr
        enum COMPARESTRING_RESULT result_1 = 0
        
        if (CodePage == 0)
            CodePage = *(*arg1 + 4)
            arg8 = CodePage
        
        if (cbMultiByte != 0 && cbMultiByte_1 != 0)
        label_6adae6:
            int32_t cchWideChar = MultiByteToWideChar(arg8, MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, 
                arg4, cbMultiByte, nullptr, 0)
            int32_t cchWideChar_2 = cchWideChar
            
            if (cchWideChar == 0)
                result = 0
            else
                if (cchWideChar s> 0 && divu.dp.d(0:0xffffffe0, cchWideChar) u>= 2)
                    int32_t ecx_2 = cchWideChar * 2
                    
                    if (ecx_2 + 8 u> ecx_2)
                        if ((cchWideChar_2 << 1) + 8 u> 0x400)
                            lpWideCharStr = _malloc((cchWideChar_2 << 1) + 8)
                            
                            if (lpWideCharStr != 0)
                                *lpWideCharStr = 0xdddd
                                lpWideCharStr = &lpWideCharStr[2]
                        else
                            __alloca_probe_16((cchWideChar_2 << 1) + 8)
                            lpWideCharStr = &var_3c
                            
                            if (&var_3c != 0)
                                var_3c = 0xcccc
                                lpWideCharStr = &lpWideCharStr[2]
                    
                    cchWideChar = cchWideChar_2
                
                if (lpWideCharStr == 0)
                    result = 0
                else
                    if (MultiByteToWideChar(arg8, MB_PRECOMPOSED, arg4, cbMultiByte, lpWideCharStr, 
                            cchWideChar) != 0)
                        int32_t cchWideChar_1 = MultiByteToWideChar(arg8, 
                            MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, lpMultiByteStr, cbMultiByte_1, 
                            nullptr, 0)
                        int32_t cchWideChar_3 = cchWideChar_1
                        
                        if (cchWideChar_1 != 0)
                            int32_t* lpWideCharStr_1
                            
                            if (cchWideChar_1 s<= 0 || divu.dp.d(0:0xffffffe0, cchWideChar_1) u< 2)
                                lpWideCharStr_1 = nullptr
                            else
                                int32_t ecx_4 = cchWideChar_1 * 2
                                
                                if (ecx_4 + 8 u<= ecx_4)
                                    cchWideChar_1 = cchWideChar_3
                                    lpWideCharStr_1 = nullptr
                                else
                                    if ((cchWideChar_3 << 1) + 8 u> 0x400)
                                        lpWideCharStr_1 = _malloc((cchWideChar_3 << 1) + 8)
                                        
                                        if (lpWideCharStr_1 != 0)
                                            *lpWideCharStr_1 = 0xdddd
                                            lpWideCharStr_1 = &lpWideCharStr_1[2]
                                    else
                                        __alloca_probe_16((cchWideChar_3 << 1) + 8)
                                        lpWideCharStr_1 = &var_3c
                                        
                                        if (&var_3c != 0)
                                            var_3c = 0xcccc
                                            lpWideCharStr_1 = &lpWideCharStr_1[2]
                                    
                                    cchWideChar_1 = cchWideChar_3
                            
                            if (lpWideCharStr_1 != 0)
                                if (MultiByteToWideChar(arg8, MB_PRECOMPOSED, lpMultiByteStr, 
                                        cbMultiByte_1, lpWideCharStr_1, cchWideChar_1) != 0)
                                    result_1 = sub_6a9941(arg2, arg3, lpWideCharStr, cchWideChar_2, 
                                        lpWideCharStr_1, cchWideChar_3)
                                
                                sub_6a79e2(lpWideCharStr_1)
                    
                    sub_6a79e2(lpWideCharStr)
                    result = result_1
        else if (cbMultiByte == cbMultiByte_1)
        label_6ada43:
            result = CSTR_EQUAL
        else if (cbMultiByte_1 s> 1)
            result = CSTR_LESS_THAN
        else
            CPINFO cPInfo
            
            if (cbMultiByte s<= 1)
                if (GetCPInfo(CodePage, &cPInfo) == 0)
                    result = 0
                else
                    var_16
                    char ecx_1
                    char edx_1
                    
                    if (cbMultiByte s<= 0)
                        if (cbMultiByte_1 s<= 0)
                            goto label_6adae6
                        
                        if (cPInfo.MaxCharSize u>= 2)
                            char* eax_11 = &var_16
                            
                            if (cPInfo.LeadByte[0] != 0)
                                do
                                    ecx_1 = eax_11[1]
                                    
                                    if (ecx_1 == 0)
                                        break
                                    
                                    edx_1 = *lpMultiByteStr
                                    
                                    if (edx_1 u>= *eax_11 && edx_1 u<= ecx_1)
                                        goto label_6ada43
                                    
                                    eax_11 = &eax_11[2]
                                while (*eax_11 != 0)
                        
                        result = CSTR_LESS_THAN
                    else
                        if (cPInfo.MaxCharSize u>= 2)
                            void* eax_10 = &var_16
                            
                            if (cPInfo.LeadByte[0] != 0)
                                do
                                    ecx_1 = *(eax_10 + 1)
                                    
                                    if (ecx_1 == 0)
                                        break
                                    
                                    edx_1 = *arg4
                                    
                                    if (edx_1 u>= *eax_10 && edx_1 u<= ecx_1)
                                        goto label_6ada43
                                    
                                    eax_10 += 2
                                while (*eax_10 != 0)
                        
                        result = CSTR_GREATER_THAN
            else
                result = CSTR_GREATER_THAN

sub_69a5bc(eax_1 ^ &__saved_ebp)
return result
