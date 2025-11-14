// 函数: sub_1000ab40
// 地址: 0x1000ab40
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_24 = edi

if (data_100223f4 == 0)
    if (LCMapStringW(0, 0x100, &data_1001bba4, 1, nullptr, 0) == 0)
        if (GetLastError() == ERROR_CALL_NOT_IMPLEMENTED)
            data_100223f4 = 2
    else
        data_100223f4 = 1

int32_t arg_10

if (arg_10 s> 0)
    int32_t ecx = arg_10
    char* eax_4 = arg6
    
    while (true)
        ecx -= 1
        
        if (*eax_4 == 0)
            break
        
        eax_4 = &eax_4[1]
        
        if (ecx == 0)
            ecx = 0xffffffff
            break
    
    int32_t eax_7 = arg_10 - ecx - 1
    
    if (eax_7 s< arg_10)
        eax_7 += 1
    
    arg_10 = eax_7

int32_t eax_8 = data_100223f4
int32_t result
int32_t __saved_ebx
int32_t result_1

if (eax_8 == 2 || eax_8 == 0)
    uint8_t* lpSrcStr = nullptr
    void* var_14_1 = nullptr
    
    if (arg4 == 0)
        arg4 = *(*arg3 + 0x14)
    
    if (arg9 == 0)
        arg9 = *(*arg3 + 4)
    
    uint32_t eax_29 = sub_1000b68d(arg4)
    
    if (eax_29 == 0xffffffff)
        result = 0
    else
        int32_t result_2
        
        if (eax_29 == arg9)
            result_2 = LCMapStringA(arg4, arg5, arg6, arg_10, arg7, arg8)
        label_1000aeb3:
            
            if (lpSrcStr != 0)
                sub_10003602(lpSrcStr)
            
            if (var_14_1 != 0 && arg7 != var_14_1)
                sub_10003602(var_14_1)
            
            result = result_2
        else
            uint8_t* lpSrcStr_1 = sub_1000b6d6(arg9, eax_29, arg6, &arg_10, nullptr, 0)
            lpSrcStr = lpSrcStr_1
            
            if (lpSrcStr_1 != 0)
                int32_t result_4 = LCMapStringA(arg4, arg5, lpSrcStr_1, arg_10, nullptr, 0)
                result_1 = result_4
                
                if (result_4 == 0)
                    result_2 = 0
                else
                    PSTR lpDestStr
                    
                    if (result_4 s<= 0 || result_4 u> 0xffffffe0)
                        lpDestStr = nullptr
                    label_1000ae3a:
                        
                        if (lpDestStr == 0)
                            result_2 = 0
                        else
                            sub_10003d40(lpDestStr, 0, result_1)
                            int32_t result_5 =
                                LCMapStringA(arg4, arg5, lpSrcStr, arg_10, lpDestStr, result_1)
                            result_1 = result_5
                            
                            if (result_5 != 0)
                                PSTR eax_31 =
                                    sub_1000b6d6(eax_29, arg9, lpDestStr, &result_1, arg7, arg8)
                                var_14_1 = eax_31
                                int32_t esi_3 = neg.d(eax_31)
                                result_2 = sbb.d(esi_3, esi_3, eax_31 != 0) & result_1
                            else
                                result_2 = 0
                            
                            __freea_crt(lpDestStr)
                    else
                        if (result_4 + 8 u> 0x400)
                            PSTR lpDestStr_1 = sub_100037d7(result_4 + 8)
                            
                            if (lpDestStr_1 != 0)
                                *lpDestStr_1 = 0xdddd
                                lpDestStr_1 = &lpDestStr_1[8]
                            
                            lpDestStr = lpDestStr_1
                            goto label_1000ae3a
                        
                        __alloca_probe_16(result_4 + 8)
                        
                        if (&var_24 != 0)
                            var_24 = 0xcccc
                            lpDestStr = &__saved_ebx
                            goto label_1000ae3a
                        
                        result_2 = 0
                
                goto label_1000aeb3
            
            result = 0
else if (eax_8 != 1)
    result = 0
else
    result_1 = 0
    
    if (arg9 == 0)
        arg9 = *(*arg3 + 4)
    
    int32_t eax_11
    eax_11.b = arg10 != 0
    int32_t eax_13 = MultiByteToWideChar(arg9, (eax_11 << 3) + 1, arg6, arg_10, nullptr, 0)
    
    if (eax_13 == 0)
        result = 0
    else
        int32_t* var_10_1
        
        if (eax_13 s<= 0 || divu.dp.d(0:0xffffffe0, eax_13) u< 2)
            var_10_1 = nullptr
        else
            int32_t* eax_17
            
            if (eax_13 * 2 + 8 u> 0x400)
                eax_17 = sub_100037d7(eax_13 * 2 + 8)
                
                if (eax_17 != 0)
                    *eax_17 = 0xdddd
                    eax_17 = &eax_17[2]
            else
                __alloca_probe_16(eax_13 * 2 + 8)
                eax_17 = &var_24
                
                if (&var_24 != 0)
                    var_24 = 0xcccc
                    eax_17 = &eax_17[2]
            
            var_10_1 = eax_17
        
        if (var_10_1 == 0)
            result = 0
        else
            if (MultiByteToWideChar(arg9, MB_PRECOMPOSED, arg6, arg_10, var_10_1, eax_13) != 0)
                int32_t result_3 = LCMapStringW(arg4, arg5, var_10_1, eax_13, nullptr, 0)
                result_1 = result_3
                
                if (result_3 != 0)
                    if ((arg5 & 0x400) == 0)
                        int32_t* esi_1
                        
                        if (result_3 s<= 0 || divu.dp.d(0:0xffffffe0, result_3) u< 2)
                            esi_1 = nullptr
                        label_1000ad24:
                            
                            if (esi_1 != 0)
                                if (LCMapStringW(arg4, arg5, var_10_1, eax_13, esi_1, result_1)
                                        != 0)
                                    PSTR lpMultiByteStr
                                    int32_t cbMultiByte
                                    
                                    if (arg8 != 0)
                                        cbMultiByte = arg8
                                        lpMultiByteStr = arg7
                                    else
                                        cbMultiByte = 0
                                        lpMultiByteStr = nullptr
                                    
                                    result_1 = WideCharToMultiByte(arg9, 0, esi_1, result_1, 
                                        lpMultiByteStr, cbMultiByte, nullptr, nullptr)
                                
                                __freea_crt(esi_1)
                        else
                            if (result_3 * 2 + 8 u> 0x400)
                                int32_t* eax_22 = sub_100037d7(result_3 * 2 + 8)
                                
                                if (eax_22 != 0)
                                    *eax_22 = 0xdddd
                                    eax_22 = &eax_22[2]
                                
                                esi_1 = eax_22
                                goto label_1000ad24
                            
                            __alloca_probe_16(result_3 * 2 + 8)
                            
                            if (&var_24 != 0)
                                var_24 = 0xcccc
                                esi_1 = &__saved_ebx
                                goto label_1000ad24
                    else if (arg8 != 0 && result_3 s<= arg8)
                        LCMapStringW(arg4, arg5, var_10_1, eax_13, arg7, arg8)
            
            __freea_crt(var_10_1)
            result = result_1
sub_10001d19(eax_1 ^ &__saved_ebp)
return result
