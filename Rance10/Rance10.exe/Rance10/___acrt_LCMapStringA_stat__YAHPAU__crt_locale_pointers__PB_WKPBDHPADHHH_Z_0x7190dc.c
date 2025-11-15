// 函数: ?__acrt_LCMapStringA_stat@@YAHPAU__crt_locale_pointers@@PB_WKPBDHPADHHH@Z
// 地址: 0x7190dc
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* cbMultiByte_1 = arg5
int32_t edi
int32_t var_18 = edi

if (cbMultiByte_1 s> 0)
    char* cbMultiByte_2 = ___strncnt(arg4, cbMultiByte_1)
    bool cond:0_1 = cbMultiByte_2 s< cbMultiByte_1
    cbMultiByte_1 = &cbMultiByte_2[1]
    
    if (not(cond:0_1))
        cbMultiByte_1 = cbMultiByte_2

uint32_t CodePage = arg8

if (CodePage == 0)
    CodePage = *(*arg1 + 8)
    arg8 = CodePage

int32_t eax_4
eax_4.b = arg9 != 0
int32_t cchWideChar =
    MultiByteToWideChar(CodePage, (eax_4 << 3) + 1, arg4, cbMultiByte_1, nullptr, 0)

if (cchWideChar != 0)
    int32_t edx_1 = cchWideChar * 2
    int32_t eax_6 = sbb.d(cchWideChar, cchWideChar, edx_1 u< edx_1 + 8)
    int32_t* lpWideCharStr
    int32_t cchWideChar_1
    
    if (((edx_1 + 8) & eax_6) == 0)
        lpWideCharStr = nullptr
    label_7191a9:
        
        if (lpWideCharStr == 0)
            cchWideChar_1 = 0
        else if (MultiByteToWideChar(CodePage, MB_PRECOMPOSED, arg4, cbMultiByte_1, lpWideCharStr, 
                cchWideChar) == 0)
            cchWideChar_1 = 0
        else
            int32_t cchWideChar_2 = ___acrt_LCMapStringEx@36(arg2, arg3, lpWideCharStr, 
                cchWideChar, nullptr, 0, 0, 0, 0)
            cchWideChar_1 = cchWideChar_2
            
            if (cchWideChar_1 == 0)
                cchWideChar_1 = 0
            else if ((arg3 & 0x400) == 0)
                int32_t edx_2 = cchWideChar_1 * 2
                int32_t eax_17 = sbb.d(cchWideChar_2, cchWideChar_2, edx_2 u< edx_2 + 8)
                int32_t* lpWideCharStr_1
                
                if (((edx_2 + 8) & eax_17) == 0)
                    lpWideCharStr_1 = nullptr
                label_719286:
                    
                    if (lpWideCharStr_1 == 0)
                        __freea_crt(lpWideCharStr_1)
                        cchWideChar_1 = 0
                    else if (___acrt_LCMapStringEx@36(arg2, arg3, lpWideCharStr, cchWideChar, 
                            lpWideCharStr_1, cchWideChar_1, 0, 0, 0) == 0)
                        __freea_crt(lpWideCharStr_1)
                        cchWideChar_1 = 0
                    else
                        PSTR lpMultiByteStr
                        int32_t cbMultiByte
                        
                        if (arg7 != 0)
                            cbMultiByte = arg7
                            lpMultiByteStr = arg6
                        else
                            cbMultiByte = 0
                            lpMultiByteStr = nullptr
                        
                        cchWideChar_1 = WideCharToMultiByte(arg8, 0, lpWideCharStr_1, 
                            cchWideChar_1, lpMultiByteStr, cbMultiByte, nullptr, nullptr)
                        
                        if (cchWideChar_1 != 0)
                            __freea_crt(lpWideCharStr_1)
                        else
                            __freea_crt(lpWideCharStr_1)
                            cchWideChar_1 = 0
                else
                    int32_t eax_19 = sbb.d(eax_17, eax_17, edx_2 u< edx_2 + 8) & (edx_2 + 8)
                    
                    if (eax_19 u> 0x400)
                        lpWideCharStr_1 =
                            __malloc_base(sbb.d(eax_19, eax_19, edx_2 u< edx_2 + 8) & (edx_2 + 8))
                        
                        if (lpWideCharStr_1 != 0)
                            *lpWideCharStr_1 = 0xdddd
                        label_71927f:
                            lpWideCharStr_1 = &lpWideCharStr_1[2]
                            goto label_719286
                        
                        __freea_crt(lpWideCharStr_1)
                        cchWideChar_1 = 0
                    else
                        __alloca_probe_16(sbb.d(eax_19, eax_19, edx_2 u< edx_2 + 8) & (edx_2 + 8))
                        lpWideCharStr_1 = &var_18
                        
                        if (&var_18 != 0)
                            var_18 = 0xcccc
                            goto label_71927f
                        
                        __freea_crt(lpWideCharStr_1)
                        cchWideChar_1 = 0
            else if (arg7 != 0)
                if (cchWideChar_1 s> arg7)
                    cchWideChar_1 = 0
                else
                    cchWideChar_1 = ___acrt_LCMapStringEx@36(arg2, arg3, lpWideCharStr, 
                        cchWideChar, arg6, arg7, 0, 0, 0)
                    
                    if (cchWideChar_1 == 0)
                        cchWideChar_1 = 0
    else
        int32_t eax_8 = sbb.d(eax_6, eax_6, edx_1 u< edx_1 + 8) & (edx_1 + 8)
        
        if (eax_8 u> 0x400)
            lpWideCharStr = __malloc_base(sbb.d(eax_8, eax_8, edx_1 u< edx_1 + 8) & (edx_1 + 8))
            
            if (lpWideCharStr != 0)
                *lpWideCharStr = 0xdddd
            label_7191a2:
                lpWideCharStr = &lpWideCharStr[2]
                goto label_7191a9
            
            cchWideChar_1 = 0
        else
            __alloca_probe_16(sbb.d(eax_8, eax_8, edx_1 u< edx_1 + 8) & (edx_1 + 8))
            lpWideCharStr = &var_18
            
            if (&var_18 != 0)
                var_18 = 0xcccc
                goto label_7191a2
            
            cchWideChar_1 = 0
    
    __freea_crt(lpWideCharStr)
    cchWideChar = cchWideChar_1

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return cchWideChar
