// 函数: __wctomb_s_l
// 地址: 0x716555
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_20 = edi

if (arg2 == 0 && arg3 != 0)
    if (arg1 != 0)
        *arg1 = 0
    
    return 0

if (arg1 != 0)
    *arg1 = 0xffffffff

int32_t result

if (arg3 u<= 0x7fffffff)
    void* var_18
    _LocaleUpdate::_LocaleUpdate(&var_18, arg4)
    result = 0
    void* var_14
    wchar16 wideCharStr
    
    if (*(var_14 + 0xa8) != 0)
        BOOL usedDefaultChar = 0
        int32_t eax_7 = WideCharToMultiByte(*(var_14 + 8), 0, &wideCharStr, 1, arg2, arg3, nullptr, 
            &usedDefaultChar)
        
        if (eax_7 == 0)
            if (GetLastError() == ERROR_INSUFFICIENT_BUFFER)
                if (arg2 != 0 && arg3 != 0)
                    _memset(arg2, 0, arg3)
                
                goto label_716669
            
            result = 0x2a
            *__errno() = 0x2a
        else if (usedDefaultChar != 0)
            result = 0x2a
            *__errno() = 0x2a
        else if (arg1 != 0)
            *arg1 = eax_7
    else
        void* eax_4
        eax_4.w = wideCharStr
        
        if (eax_4.w u<= 0xff)
            if (arg2 == 0)
                goto label_716608
            
            if (arg3 == 0)
            label_716669:
                result = 0x22
                *__errno() = 0x22
                __invalid_parameter_noinfo()
            else
                *arg2 = eax_4.b
            label_716608:
                
                if (arg1 != 0)
                    *arg1 = 1
        else
            if (arg2 != 0 && arg3 != 0)
                _memset(arg2, 0, arg3)
            
            result = 0x2a
            *__errno() = 0x2a
    char var_c
    
    if (var_c != 0)
        void* ecx_2 = var_18
        *(ecx_2 + 0x350) &= 0xfffffffd
else
    result = 0x16
    *__errno() = 0x16
    __invalid_parameter_noinfo()

return result
