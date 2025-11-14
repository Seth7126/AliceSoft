// 函数: ?__crtLCMapStringA_stat@@YAHPAUlocaleinfo_struct@@PB_WKPBDHPADHHH@Z
// 地址: 0x6a7798
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t cbMultiByte_1 = arg5
int32_t edi
int32_t var_18 = edi

if (cbMultiByte_1 s> 0)
    char* eax_2 = arg4
    int32_t cbMultiByte_3 = cbMultiByte_1
    
    while (true)
        cbMultiByte_3 -= 1
        
        if (*eax_2 == 0)
            break
        
        eax_2 = &eax_2[1]
        
        if (cbMultiByte_3 == 0)
            cbMultiByte_3 = 0xffffffff
            break
    
    int32_t cbMultiByte_2 = cbMultiByte_1 - cbMultiByte_3 - 1
    bool cond:1_1 = cbMultiByte_2 s< cbMultiByte_1
    cbMultiByte_1 = cbMultiByte_2 + 1
    
    if (not(cond:1_1))
        cbMultiByte_1 = cbMultiByte_2

uint32_t CodePage = arg8
int32_t cchWideChar_1 = 0

if (CodePage == 0)
    uint32_t CodePage_1 = *(*arg1 + 4)
    CodePage = CodePage_1
    arg8 = CodePage_1

int32_t eax_7
eax_7.b = arg9 != 0
int32_t cchWideChar =
    MultiByteToWideChar(CodePage, (eax_7 << 3) + 1, arg4, cbMultiByte_1, nullptr, 0)
int32_t cchWideChar_2 = cchWideChar
int32_t result

if (cchWideChar != 0)
    int32_t* lpWideCharStr
    
    if (cchWideChar s<= 0 || divu.dp.d(0:0xffffffe0, cchWideChar) u< 2)
        lpWideCharStr = nullptr
    else
        int32_t ecx_1 = cchWideChar * 2
        
        if (ecx_1 + 8 u<= ecx_1)
            cchWideChar = cchWideChar_2
            lpWideCharStr = nullptr
        else
            if ((cchWideChar_2 << 1) + 8 u> 0x400)
                lpWideCharStr = _malloc((cchWideChar_2 << 1) + 8)
                
                if (lpWideCharStr != 0)
                    *lpWideCharStr = 0xdddd
                    lpWideCharStr = &lpWideCharStr[2]
            else
                __alloca_probe_16((cchWideChar_2 << 1) + 8)
                lpWideCharStr = &var_18
                
                if (&var_18 != 0)
                    var_18 = 0xcccc
                    lpWideCharStr = &lpWideCharStr[2]
            
            cchWideChar = cchWideChar_2
    
    if (lpWideCharStr == 0)
        result = 0
    else
        if (MultiByteToWideChar(arg8, MB_PRECOMPOSED, arg4, cbMultiByte_1, lpWideCharStr, 
                cchWideChar) != 0)
            cchWideChar_1 = sub_6a99b7(arg2, arg3, lpWideCharStr, cchWideChar_2, nullptr, 0)
            
            if (cchWideChar_1 != 0)
                if ((arg3 & 0x400) == 0)
                    int32_t ecx_4
                    
                    if (cchWideChar_1 s> 0 && divu.dp.d(0:0xffffffe0, cchWideChar_1) u>= 2)
                        ecx_4 = cchWideChar_1 * 2
                    
                    void* lpWideCharStr_1
                    
                    if (cchWideChar_1 s<= 0 || divu.dp.d(0:0xffffffe0, cchWideChar_1) u< 2
                            || ecx_4 + 8 u<= ecx_4)
                        lpWideCharStr_1 = nullptr
                    label_6a793a:
                        
                        if (lpWideCharStr_1 != 0)
                            if (sub_6a99b7(arg2, arg3, lpWideCharStr, cchWideChar_2, 
                                    lpWideCharStr_1, cchWideChar_1) != 0)
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
                            
                            sub_6a79e2(lpWideCharStr_1)
                    else
                        int32_t* esi_1
                        
                        if ((cchWideChar_1 << 1) + 8 u> 0x400)
                            esi_1 = _malloc((cchWideChar_1 << 1) + 8)
                            
                            if (esi_1 != 0)
                                *esi_1 = 0xdddd
                            label_6a7933:
                                lpWideCharStr_1 = &esi_1[2]
                                goto label_6a793a
                        else
                            __alloca_probe_16((cchWideChar_1 << 1) + 8)
                            esi_1 = &var_18
                            
                            if (&var_18 != 0)
                                var_18 = 0xcccc
                                goto label_6a7933
                else if (arg7 != 0 && cchWideChar_1 s<= arg7)
                    sub_6a99b7(arg2, arg3, lpWideCharStr, cchWideChar_2, arg6, arg7)
        
        sub_6a79e2(lpWideCharStr)
        result = cchWideChar_1
else
    result = 0

sub_69a5bc(eax_1 ^ &__saved_ebp)
return result
