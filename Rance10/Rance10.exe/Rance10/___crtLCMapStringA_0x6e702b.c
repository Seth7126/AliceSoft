// 函数: ___crtLCMapStringA
// 地址: 0x6e702b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* cbMultiByte_1 = arg4
int32_t edi
int32_t var_1c = edi

if (cbMultiByte_1 s> 0)
    char* cbMultiByte_2 = ___strncnt(arg3, cbMultiByte_1)
    bool cond:1_1 = cbMultiByte_2 s< cbMultiByte_1
    cbMultiByte_1 = &cbMultiByte_2[1]
    
    if (not(cond:1_1))
        cbMultiByte_1 = cbMultiByte_2

int32_t cchWideChar_4 = 0
int32_t eax_2
eax_2.b = arg8 != 0
int32_t result = MultiByteToWideChar(arg7, (eax_2 << 3) + 1, arg3, cbMultiByte_1, nullptr, 0)
int32_t cchWideChar = result
int32_t cchWideChar_2 = cchWideChar

if (cchWideChar != 0)
    int32_t edx_1 = cchWideChar * 2
    int32_t eax_4 = sbb.d(result, result, edx_1 u< edx_1 + 8)
    int32_t* lpWideCharStr_2
    int32_t* lpWideCharStr
    
    if (((edx_1 + 8) & eax_4) == 0)
        lpWideCharStr = nullptr
        lpWideCharStr_2 = nullptr
    else
        int32_t eax_6 = sbb.d(eax_4, eax_4, edx_1 u< edx_1 + 8) & (edx_1 + 8)
        
        if (eax_6 u> 0x400)
            int32_t* lpWideCharStr_3 =
                __malloc_base(sbb.d(eax_6, eax_6, edx_1 u< edx_1 + 8) & (edx_1 + 8))
            lpWideCharStr = lpWideCharStr_3
            lpWideCharStr_2 = lpWideCharStr_3
            
            if (lpWideCharStr != 0)
                *lpWideCharStr = 0xdddd
                lpWideCharStr = &lpWideCharStr[2]
                lpWideCharStr_2 = lpWideCharStr
        else
            __alloca_probe_16(sbb.d(eax_6, eax_6, edx_1 u< edx_1 + 8) & (edx_1 + 8))
            lpWideCharStr = &var_1c
            lpWideCharStr_2 = &var_1c
            
            if (&var_1c != 0)
                var_1c = 0xcccc
                lpWideCharStr = &lpWideCharStr[2]
                lpWideCharStr_2 = lpWideCharStr
        
        cchWideChar = cchWideChar_2
    
    int32_t cchWideChar_1
    
    if (lpWideCharStr == 0)
        cchWideChar_1 = cchWideChar_4
    else if (MultiByteToWideChar(arg7, MB_PRECOMPOSED, arg3, cbMultiByte_1, lpWideCharStr, 
            cchWideChar) == 0)
        cchWideChar_1 = cchWideChar_4
    else
        int32_t cchWideChar_3 =
            ___crtLCMapStringEx(arg1, arg2, lpWideCharStr, cchWideChar_2, nullptr, 0)
        cchWideChar_1 = cchWideChar_3
        
        if (cchWideChar_1 == 0)
            cchWideChar_1 = cchWideChar_4
        else if ((arg2 & 0x400) == 0)
            int32_t edx_2 = cchWideChar_1 * 2
            int32_t eax_13 = sbb.d(cchWideChar_3, cchWideChar_3, edx_2 u< edx_2 + 8)
            int32_t* lpWideCharStr_1
            
            if (((edx_2 + 8) & eax_13) == 0)
                lpWideCharStr_1 = nullptr
            else
                int32_t eax_15 = sbb.d(eax_13, eax_13, edx_2 u< edx_2 + 8) & (edx_2 + 8)
                
                if (eax_15 u> 0x400)
                    lpWideCharStr_1 =
                        __malloc_base(sbb.d(eax_15, eax_15, edx_2 u< edx_2 + 8) & (edx_2 + 8))
                    
                    if (lpWideCharStr_1 == 0)
                        goto label_6e7204
                    
                    *lpWideCharStr_1 = 0xdddd
                else
                    __alloca_probe_16(sbb.d(eax_15, eax_15, edx_2 u< edx_2 + 8) & (edx_2 + 8))
                    lpWideCharStr_1 = &var_1c
                    
                    if (&var_1c == 0)
                        goto label_6e7204
                    
                    var_1c = 0xcccc
                
                lpWideCharStr_1 = &lpWideCharStr_1[2]
            
            if (lpWideCharStr_1 == 0)
            label_6e7204:
                __freea_crt(lpWideCharStr_1)
                cchWideChar_1 = cchWideChar_1
            else
                if (___crtLCMapStringEx(arg1, arg2, lpWideCharStr_2, cchWideChar_2, 
                        lpWideCharStr_1, cchWideChar_1) == 0)
                    goto label_6e7204
                
                PSTR lpMultiByteStr
                int32_t cbMultiByte
                
                if (arg6 != 0)
                    cbMultiByte = arg6
                    lpMultiByteStr = arg5
                else
                    cbMultiByte = 0
                    lpMultiByteStr = nullptr
                
                cchWideChar_1 = WideCharToMultiByte(arg7, 0, lpWideCharStr_1, cchWideChar_1, 
                    lpMultiByteStr, cbMultiByte, nullptr, nullptr)
                
                if (cchWideChar_1 == 0)
                    __freea_crt(lpWideCharStr_1)
                    cchWideChar_1 = cchWideChar_4
                else
                    __freea_crt(lpWideCharStr_1)
        else if (arg6 != 0 && cchWideChar_1 s<= arg6)
            ___crtLCMapStringEx(arg1, arg2, lpWideCharStr, cchWideChar_2, arg5, arg6)
    
    __freea_crt(lpWideCharStr_2)
    result = cchWideChar_1

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
