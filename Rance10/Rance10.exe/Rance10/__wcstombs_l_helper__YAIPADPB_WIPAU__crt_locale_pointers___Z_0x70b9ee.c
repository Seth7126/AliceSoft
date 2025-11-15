// 函数: ?_wcstombs_l_helper@@YAIPADPB_WIPAU__crt_locale_pointers@@@Z
// 地址: 0x70b9ee
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx = arg3
int32_t result_2 = 0
BOOL usedDefaultChar = 0
int32_t edi
int32_t var_3c = edi
int16_t* lpWideCharStr_1 = arg2
wchar16* lpWideCharStr_2 = lpWideCharStr_1
int32_t result

if (arg1 != 0 && ebx == 0)
    result = 0
else if (lpWideCharStr_1 != 0)
    void* var_30
    _LocaleUpdate::_LocaleUpdate(&var_30, arg4)
    int32_t result_1
    void* var_2c
    
    if (arg1 == 0)
        if (*(var_2c + 0xa8) != 0)
            int32_t eax_16 = WideCharToMultiByte(*(var_2c + 8), 0, lpWideCharStr_1, 0xffffffff, 
                nullptr, 0, nullptr, &usedDefaultChar)
            
            if (eax_16 == 0 || usedDefaultChar != 0)
            label_70bc43:
                result_1 = 0xffffffff
                *__errno() = 0x2a
            else
                result_1 = eax_16 - 1
        else
            for (int16_t i = *lpWideCharStr_1; i != 0; i = *lpWideCharStr_1)
                if (i u> 0xff)
                    goto label_70bc43
                
                lpWideCharStr_1 = &lpWideCharStr_1[1]
                result_2 += 1
            
        labelid_7:
            result_1 = result_2
    else if (*(var_2c + 0xa8) == 0)
        if (ebx != 0)
            while (*lpWideCharStr_1 u<= 0xff)
                int16_t eax_4
                eax_4.b = *lpWideCharStr_1
                arg1[result_2] = eax_4.b
                eax_4 = *lpWideCharStr_1
                lpWideCharStr_1 = &lpWideCharStr_1[1]
                
                if (eax_4 == 0)
                    goto label_70bc18_2
                
                result_2 += 1
                
                if (result_2 u>= ebx)
                    goto label_70bc18_2
            
            goto label_70bbe4
        
    labelid_7:
        result_1 = result_2
    else if (*(var_2c + 4) != 1)
        result_1 = WideCharToMultiByte(*(var_2c + 8), 0, lpWideCharStr_1, 0xffffffff, arg1, ebx, 
            nullptr, &usedDefaultChar)
        
        if (result_1 != 0)
            if (usedDefaultChar != 0)
                goto label_70bbe4
            
        label_70bc18:
            result_1 -= 1
        else if (usedDefaultChar != 0)
        label_70bbe4:
            *__errno() = 0x2a
        label_70bc18_1:
            result_1 = 0xffffffff
        else
            if (GetLastError() != ERROR_INSUFFICIENT_BUFFER)
                goto label_70bbe4
            
            if (ebx != 0)
                wchar16* lpWideCharStr = lpWideCharStr_2
                
                do
                    int32_t cbMultiByte = *(var_2c + 4)
                    
                    if (cbMultiByte s> 5)
                        cbMultiByte = 5
                    
                    char multiByteStr[0x8]
                    int32_t eax_9 = WideCharToMultiByte(*(var_2c + 8), 0, lpWideCharStr, 1, 
                        &multiByteStr, cbMultiByte, nullptr, &usedDefaultChar)
                    
                    if (eax_9 == 0)
                        goto label_70bc43
                    
                    if (usedDefaultChar != 0)
                        goto label_70bc43
                    
                    if (eax_9 s< 0)
                        goto label_70bc43
                    
                    if (eax_9 u> 5)
                        goto label_70bc43
                    
                    if (eax_9 + result_1 u> arg3)
                        break
                    
                    int32_t eax_11 = 0
                    int32_t var_20_1 = 0
                    
                    if (eax_9 s> 0)
                        while (true)
                            eax_11.b = multiByteStr[eax_11]
                            arg1[result_1] = eax_11.b
                            
                            if (eax_11.b == 0)
                                break
                            
                            eax_11 = var_20_1 + 1
                            result_1 += 1
                            var_20_1 = eax_11
                            
                            if (eax_11 s>= eax_9)
                                goto label_70bbcf
                        
                        break
                    
                label_70bbcf:
                    lpWideCharStr = &lpWideCharStr_2[1]
                    lpWideCharStr_2 = lpWideCharStr
                while (result_1 u< arg3)
    else
        if (ebx != 0)
            int16_t* lpWideCharStr_3 = lpWideCharStr_1
            int32_t var_18 = ebx
            
            while (*lpWideCharStr_3 != 0)
                lpWideCharStr_3 = &lpWideCharStr_3[1]
                int32_t temp0_1 = var_18
                var_18 -= 1
                
                if (temp0_1 == 1)
                    break
            
            if (var_18 != 0 && *lpWideCharStr_3 == 0)
                ebx = ((lpWideCharStr_3 - lpWideCharStr_1) s>> 1) + 1
        
        result_2 = WideCharToMultiByte(*(var_2c + 8), 0, lpWideCharStr_1, ebx, arg1, ebx, nullptr, 
            &usedDefaultChar)
        
        if (result_2 == 0 || usedDefaultChar != 0)
            goto label_70bbe4
        
        if (arg1[result_2 - 1] == 0)
            result_2 -= 1
        
    label_70bc18_2:
        result_1 = result_2
    char var_24
    
    if (var_24 != 0)
        void* ecx_4 = var_30
        *(ecx_4 + 0x350) &= 0xfffffffd
    
    result = result_1
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
