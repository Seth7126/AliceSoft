// 函数: sub_1000b6d6
// 地址: 0x1000b6d6
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t cbMultiByte = *arg4
int32_t edi
int32_t var_44 = edi
PSTR var_24 = nullptr
int32_t var_30 = 0
PSTR result

if (arg1 == arg2)
    result = var_24
else
    CPINFO cPInfo
    void* cbMultiByte_1
    bool cond:0_1
    
    if (GetCPInfo(arg1, &cPInfo) != 0 && cPInfo.MaxCharSize == 1)
        if (GetCPInfo(arg2, &cPInfo) == 0 || cPInfo.MaxCharSize != 1)
            goto label_1000b79a
        
        cbMultiByte_1 = cbMultiByte
        var_30 = 1
        
        if (cbMultiByte_1 == 0xffffffff)
            cbMultiByte_1 = _strlen(arg3) + 1
        
        cond:0_1 = cbMultiByte_1 s<= 0
        goto label_1000b76b
    
label_1000b79a:
    cbMultiByte_1 = MultiByteToWideChar(arg1, MB_PRECOMPOSED, arg3, cbMultiByte, nullptr, 0)
    cond:0_1 = cbMultiByte_1 s<= 0
    
    if (cbMultiByte_1 != 0)
    label_1000b76b:
        int32_t* lpWideCharStr
        
        if (cond:0_1 || cbMultiByte_1 u> 0x7ffffff0)
            lpWideCharStr = nullptr
        else
            int32_t* lpWideCharStr_1
            
            if (cbMultiByte_1 * 2 + 8 u> 0x400)
                lpWideCharStr_1 = sub_100037d7(cbMultiByte_1 * 2 + 8)
                
                if (lpWideCharStr_1 != 0)
                    *lpWideCharStr_1 = 0xdddd
                    lpWideCharStr_1 = &lpWideCharStr_1[2]
            else
                __alloca_probe_16(cbMultiByte_1 * 2 + 8)
                lpWideCharStr_1 = &var_44
                
                if (&var_44 != 0)
                    var_44 = 0xcccc
                    lpWideCharStr_1 = &lpWideCharStr_1[2]
            
            lpWideCharStr = lpWideCharStr_1
        
        if (lpWideCharStr == 0)
            result = nullptr
        else
            sub_10003d40(lpWideCharStr, 0, cbMultiByte_1 * 2)
            
            if (MultiByteToWideChar(arg1, MB_PRECOMPOSED, arg3, cbMultiByte, lpWideCharStr, 
                    cbMultiByte_1) != 0)
                if (arg5 != 0)
                    if (WideCharToMultiByte(arg2, 0, lpWideCharStr, cbMultiByte_1, arg5, arg6, 
                            nullptr, nullptr) != 0)
                        var_24 = arg5
                else if (var_30 != 0)
                label_1000b833:
                    PSTR lpMultiByteStr = __calloc_crt(1, cbMultiByte_1)
                    var_24 = lpMultiByteStr
                    
                    if (lpMultiByteStr != 0)
                        int32_t eax_14 = WideCharToMultiByte(arg2, 0, lpWideCharStr, cbMultiByte_1, 
                            lpMultiByteStr, cbMultiByte_1, nullptr, nullptr)
                        
                        if (eax_14 == 0)
                            sub_10003602(var_24)
                            var_24 = nullptr
                        else if (cbMultiByte != 0xffffffff)
                            *arg4 = eax_14
                else
                    cbMultiByte_1 = WideCharToMultiByte(arg2, 0, lpWideCharStr, cbMultiByte_1, 
                        nullptr, 0, nullptr, nullptr)
                    
                    if (cbMultiByte_1 != 0)
                        goto label_1000b833
            
            __freea_crt(lpWideCharStr)
            result = var_24
    else
        result = nullptr

sub_10001d19(eax_1 ^ &__saved_ebp)
return result
