// 函数: ?InternalCompareStringA@@YAHPAU__crt_locale_pointers@@PB_WKPBDH2HH@Z
// 地址: 0x7207d8
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* cbMultiByte_1 = arg5
uint8_t* lpMultiByteStr_1 = arg6
uint8_t* lpMultiByteStr = lpMultiByteStr_1
int32_t edi
int32_t var_3c = edi
enum COMPARESTRING_RESULT result

if (cbMultiByte_1 s<= 0)
    if (cbMultiByte_1 s>= 0xffffffff)
        goto label_72081a
    
    result = 0
else
    cbMultiByte_1 = ___strncnt(arg4, cbMultiByte_1)
    lpMultiByteStr_1 = lpMultiByteStr
label_72081a:
    char* cbMultiByte = arg7
    
    if (cbMultiByte s<= 0)
        if (cbMultiByte s>= 0xffffffff)
            goto label_72083f
        
        result = 0
    else
        cbMultiByte = ___strncnt(lpMultiByteStr_1, cbMultiByte)
    label_72083f:
        uint32_t CodePage = arg8
        
        if (CodePage == 0)
            CodePage = *(*arg1 + 8)
            arg8 = CodePage
        
        if (cbMultiByte_1 != 0 && cbMultiByte != 0)
        label_7208fa:
            enum COMPARESTRING_RESULT result_1 = 0
            int32_t cchWideChar = MultiByteToWideChar(arg8, MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, 
                arg4, cbMultiByte_1, nullptr, 0)
            
            if (cchWideChar == 0)
                result = 0
            else
                int32_t edx_2 = cchWideChar * 2
                int32_t eax_9 = sbb.d(cchWideChar, cchWideChar, edx_2 u< edx_2 + 8)
                int32_t* lpWideCharStr_3
                int32_t* lpWideCharStr_2
                void* lpWideCharStr
                
                if (((edx_2 + 8) & eax_9) == 0)
                    lpWideCharStr = nullptr
                    lpWideCharStr_2 = nullptr
                label_720984:
                    
                    if (lpWideCharStr == 0)
                        lpWideCharStr_3 = lpWideCharStr_2
                    else if (MultiByteToWideChar(arg8, MB_PRECOMPOSED, arg4, cbMultiByte_1, 
                            lpWideCharStr, cchWideChar) == 0)
                        lpWideCharStr_3 = lpWideCharStr_2
                    else
                        int32_t cchWideChar_1 = MultiByteToWideChar(arg8, 
                            MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, lpMultiByteStr, cbMultiByte, 
                            nullptr, 0)
                        
                        if (cchWideChar_1 == 0)
                            lpWideCharStr_3 = lpWideCharStr_2
                        else
                            int32_t edx_3 = cchWideChar_1 * 2
                            int32_t eax_17 = sbb.d(cchWideChar_1, cchWideChar_1, edx_3 u< edx_3 + 8)
                            int32_t* lpWideCharStr_1
                            
                            if (((edx_3 + 8) & eax_17) == 0)
                                lpWideCharStr_1 = nullptr
                            label_720a1c:
                                
                                if (lpWideCharStr_1 == 0)
                                    lpWideCharStr_3 = lpWideCharStr_2
                                else if (MultiByteToWideChar(arg8, MB_PRECOMPOSED, lpMultiByteStr, 
                                        cbMultiByte, lpWideCharStr_1, cchWideChar_1) == 0)
                                    lpWideCharStr_3 = lpWideCharStr_2
                                else
                                    lpWideCharStr_3 = lpWideCharStr_2
                                    result_1 = ___acrt_CompareStringEx@36(arg2, arg3, 
                                        lpWideCharStr_3, cchWideChar, lpWideCharStr_1, 
                                        cchWideChar_1, 0, 0, 0)
                            else
                                int32_t eax_19 =
                                    sbb.d(eax_17, eax_17, edx_3 u< edx_3 + 8) & (edx_3 + 8)
                                
                                if (eax_19 u> 0x400)
                                    lpWideCharStr_1 = __malloc_base(
                                        sbb.d(eax_19, eax_19, edx_3 u< edx_3 + 8) & (edx_3 + 8))
                                    
                                    if (lpWideCharStr_1 != 0)
                                        *lpWideCharStr_1 = 0xdddd
                                    label_720a15:
                                        lpWideCharStr_1 = &lpWideCharStr_1[2]
                                        goto label_720a1c
                                    
                                    lpWideCharStr_3 = lpWideCharStr_2
                                else
                                    __alloca_probe_16(sbb.d(eax_19, eax_19, edx_3 u< edx_3 + 8)
                                        & (edx_3 + 8))
                                    lpWideCharStr_1 = &var_3c
                                    
                                    if (&var_3c != 0)
                                        var_3c = 0xcccc
                                        goto label_720a15
                                    
                                    lpWideCharStr_3 = lpWideCharStr_2
                            
                            __freea_crt(lpWideCharStr_1)
                else
                    int32_t eax_11 = sbb.d(eax_9, eax_9, edx_2 u< edx_2 + 8) & (edx_2 + 8)
                    int32_t* lpWideCharStr_4
                    
                    if (eax_11 u> 0x400)
                        lpWideCharStr_4 =
                            __malloc_base(sbb.d(eax_11, eax_11, edx_2 u< edx_2 + 8) & (edx_2 + 8))
                        
                        if (lpWideCharStr_4 != 0)
                            *lpWideCharStr_4 = 0xdddd
                        label_720977:
                            lpWideCharStr = &lpWideCharStr_4[2]
                            lpWideCharStr_2 = lpWideCharStr
                            goto label_720984
                        
                        lpWideCharStr_3 = lpWideCharStr_4
                    else
                        __alloca_probe_16(sbb.d(eax_11, eax_11, edx_2 u< edx_2 + 8) & (edx_2 + 8))
                        lpWideCharStr_4 = &var_3c
                        
                        if (&var_3c != 0)
                            var_3c = 0xcccc
                            goto label_720977
                        
                        lpWideCharStr_3 = &var_3c
                __freea_crt(lpWideCharStr_3)
                result = result_1
        else if (cbMultiByte_1 == cbMultiByte)
            result = CSTR_EQUAL
        else if (cbMultiByte s> 1)
            result = CSTR_LESS_THAN
        else
            CPINFO cPInfo
            
            if (cbMultiByte_1 s<= 1)
                if (GetCPInfo(CodePage, &cPInfo) == 0)
                    result = 0
                else
                    var_16
                    char edx_1
                    
                    if (cbMultiByte_1 s<= 0)
                        if (cbMultiByte s<= 0)
                            goto label_7208fa
                        
                        result = CSTR_EQUAL
                        
                        if (cPInfo.MaxCharSize u>= 2)
                            void* ecx_4 = &var_16
                            
                            if (cPInfo.LeadByte[0] != 0)
                                do
                                    edx_1 = *(ecx_4 + 1)
                                    
                                    if (edx_1 == 0)
                                        break
                                    
                                    cbMultiByte.b = *lpMultiByteStr
                                    
                                    if (cbMultiByte.b u>= *ecx_4 && cbMultiByte.b u<= edx_1)
                                        goto label_720a77
                                    
                                    ecx_4 += 2
                                while (*ecx_4 != 0)
                        
                        result = CSTR_LESS_THAN
                    else
                        result = CSTR_EQUAL
                        
                        if (cPInfo.MaxCharSize u>= 2)
                            void* ecx_3 = &var_16
                            
                            if (cPInfo.LeadByte[0] != 0)
                                do
                                    edx_1 = *(ecx_3 + 1)
                                    
                                    if (edx_1 == 0)
                                        break
                                    
                                    cbMultiByte.b = *arg4
                                    
                                    if (cbMultiByte.b u>= *ecx_3 && cbMultiByte.b u<= edx_1)
                                        goto label_720a77
                                    
                                    ecx_3 += 2
                                while (*ecx_3 != 0)
                        
                        result = CSTR_GREATER_THAN
            else
                result = CSTR_GREATER_THAN

label_720a77:
@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
