// 函数: ___crtCompareStringA
// 地址: 0x6e724c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* lpMultiByteStr_3 = arg3
char* cbMultiByte = arg4
char* lpMultiByteStr_2 = arg5
char* lpMultiByteStr_1 = lpMultiByteStr_3
char* lpMultiByteStr = lpMultiByteStr_2
int32_t edi
int32_t var_3c = edi
enum COMPARESTRING_RESULT result

if (cbMultiByte s<= 0)
    if (cbMultiByte s>= 0xffffffff)
        goto label_6e7286
    
    result = 0
else
    cbMultiByte = ___strncnt(lpMultiByteStr_3, cbMultiByte)
    lpMultiByteStr_2 = lpMultiByteStr
label_6e7286:
    char* cbMultiByte_1 = arg6
    
    if (cbMultiByte_1 s<= 0)
        if (cbMultiByte_1 s>= 0xffffffff)
            goto label_6e72ab
        
        result = 0
    else
        cbMultiByte_1 = ___strncnt(lpMultiByteStr_2, cbMultiByte_1)
    label_6e72ab:
        
        if (cbMultiByte != 0 && cbMultiByte_1 != 0)
        label_6e7359:
            enum COMPARESTRING_RESULT result_1 = 0
            int32_t cchWideChar = MultiByteToWideChar(arg7, MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, 
                lpMultiByteStr_1, cbMultiByte, nullptr, 0)
            
            if (cchWideChar == 0)
                result = 0
            else
                int32_t edx_2 = cchWideChar * 2
                int32_t eax_6 = sbb.d(cchWideChar, cchWideChar, edx_2 u< edx_2 + 8)
                int32_t* lpWideCharStr_3
                int32_t* lpWideCharStr_2
                void* lpWideCharStr
                
                if (((edx_2 + 8) & eax_6) == 0)
                    lpWideCharStr = nullptr
                    lpWideCharStr_2 = nullptr
                label_6e73e0:
                    
                    if (lpWideCharStr == 0)
                        lpWideCharStr_3 = lpWideCharStr_2
                    else if (MultiByteToWideChar(arg7, MB_PRECOMPOSED, lpMultiByteStr_1, 
                            cbMultiByte, lpWideCharStr, cchWideChar) == 0)
                        lpWideCharStr_3 = lpWideCharStr_2
                    else
                        int32_t cchWideChar_3 = MultiByteToWideChar(arg7, 
                            MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, lpMultiByteStr, cbMultiByte_1, 
                            nullptr, 0)
                        int32_t cchWideChar_1 = cchWideChar_3
                        int32_t cchWideChar_2 = cchWideChar_1
                        
                        if (cchWideChar_1 == 0)
                            lpWideCharStr_3 = lpWideCharStr_2
                        else
                            int32_t edx_3 = cchWideChar_1 * 2
                            int32_t eax_14 = sbb.d(cchWideChar_3, cchWideChar_3, edx_3 u< edx_3 + 8)
                            int32_t* lpWideCharStr_1
                            
                            if (((edx_3 + 8) & eax_14) == 0)
                                lpWideCharStr_1 = nullptr
                            else
                                int32_t eax_16 =
                                    sbb.d(eax_14, eax_14, edx_3 u< edx_3 + 8) & (edx_3 + 8)
                                
                                if (eax_16 u> 0x400)
                                    lpWideCharStr_1 = __malloc_base(
                                        sbb.d(eax_16, eax_16, edx_3 u< edx_3 + 8) & (edx_3 + 8))
                                    
                                    if (lpWideCharStr_1 != 0)
                                        *lpWideCharStr_1 = 0xdddd
                                        lpWideCharStr_1 = &lpWideCharStr_1[2]
                                else
                                    __alloca_probe_16(sbb.d(eax_16, eax_16, edx_3 u< edx_3 + 8)
                                        & (edx_3 + 8))
                                    lpWideCharStr_1 = &var_3c
                                    
                                    if (&var_3c != 0)
                                        var_3c = 0xcccc
                                        lpWideCharStr_1 = &lpWideCharStr_1[2]
                                
                                cchWideChar_1 = cchWideChar_2
                            
                            int32_t eax_22
                            
                            if (lpWideCharStr_1 != 0)
                                eax_22 = MultiByteToWideChar(arg7, MB_PRECOMPOSED, lpMultiByteStr, 
                                    cbMultiByte_1, lpWideCharStr_1, cchWideChar_1)
                            
                            if (lpWideCharStr_1 == 0 || eax_22 == 0)
                                lpWideCharStr_3 = lpWideCharStr_2
                            else
                                lpWideCharStr_3 = lpWideCharStr_2
                                result_1 = sub_6e7e83(arg1, arg2, lpWideCharStr_3, cchWideChar, 
                                    lpWideCharStr_1, cchWideChar_2)
                            
                            __freea_crt(lpWideCharStr_1)
                else
                    int32_t eax_8 = sbb.d(eax_6, eax_6, edx_2 u< edx_2 + 8) & (edx_2 + 8)
                    int32_t* lpWideCharStr_4
                    
                    if (eax_8 u> 0x400)
                        lpWideCharStr_4 =
                            __malloc_base(sbb.d(eax_8, eax_8, edx_2 u< edx_2 + 8) & (edx_2 + 8))
                        
                        if (lpWideCharStr_4 != 0)
                            *lpWideCharStr_4 = 0xdddd
                        label_6e73d3:
                            lpWideCharStr = &lpWideCharStr_4[2]
                            lpWideCharStr_2 = lpWideCharStr
                            goto label_6e73e0
                        
                        lpWideCharStr_3 = lpWideCharStr_4
                    else
                        __alloca_probe_16(sbb.d(eax_8, eax_8, edx_2 u< edx_2 + 8) & (edx_2 + 8))
                        lpWideCharStr_4 = &var_3c
                        
                        if (&var_3c != 0)
                            var_3c = 0xcccc
                            goto label_6e73d3
                        
                        lpWideCharStr_3 = &var_3c
                __freea_crt(lpWideCharStr_3)
                result = result_1
        else if (cbMultiByte == cbMultiByte_1)
            result = CSTR_EQUAL
        else if (cbMultiByte_1 s> 1)
            result = CSTR_LESS_THAN
        else
            CPINFO cPInfo
            
            if (cbMultiByte s<= 1)
                if (GetCPInfo(arg7, &cPInfo) == 0)
                    result = 0
                else
                    var_16
                    char edx_1
                    
                    if (cbMultiByte s<= 0)
                        if (cbMultiByte_1 s<= 0)
                            goto label_6e7359
                        
                        result = CSTR_EQUAL
                        
                        if (cPInfo.MaxCharSize u>= 2)
                            char* ecx_4 = &var_16
                            
                            if (cPInfo.LeadByte[0] != 0)
                                do
                                    edx_1 = ecx_4[1]
                                    
                                    if (edx_1 == 0)
                                        break
                                    
                                    lpMultiByteStr_3.b = *lpMultiByteStr
                                    
                                    if (lpMultiByteStr_3.b u>= *ecx_4
                                            && lpMultiByteStr_3.b u<= edx_1)
                                        goto label_6e74d5
                                    
                                    ecx_4 = &ecx_4[2]
                                while (*ecx_4 != 0)
                        
                        result = CSTR_LESS_THAN
                    else
                        result = CSTR_EQUAL
                        
                        if (cPInfo.MaxCharSize u>= 2)
                            void* ecx_3 = &var_16
                            
                            if (cPInfo.LeadByte[0] != 0)
                                while (true)
                                    edx_1 = *(ecx_3 + 1)
                                    
                                    if (edx_1 == 0)
                                        break
                                    
                                    lpMultiByteStr_3.b = *lpMultiByteStr_3
                                    
                                    if (lpMultiByteStr_3.b u>= *ecx_3
                                            && lpMultiByteStr_3.b u<= edx_1)
                                        goto label_6e74d5
                                    
                                    ecx_3 += 2
                                    
                                    if (*ecx_3 == 0)
                                        break
                                    
                                    lpMultiByteStr_3 = lpMultiByteStr_1
                        
                        result = CSTR_GREATER_THAN
            else
                result = CSTR_GREATER_THAN

label_6e74d5:
@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
