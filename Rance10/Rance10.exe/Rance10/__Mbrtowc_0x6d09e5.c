// 函数: __Mbrtowc
// 地址: 0x6d09e5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t* var_8 = __security_cookie ^ &__saved_ebp
int32_t* lpMultiByteStr = arg4
uint32_t* esi = arg5
int32_t* lpMultiByteStr_1 = lpMultiByteStr
int32_t result

if (arg2 == 0 || arg3 == 0)
    result = 0
else if (*arg2 != 0)
    if (esi == 0)
        void var_6c
        void var_34
        __builtin_memcpy(&var_34, __Getcvt(&var_6c), 0x2c)
        esi = &var_34
        lpMultiByteStr = lpMultiByteStr_1
    
    if (esi[2] != 0)
        if (arg1 != 0)
            *arg1 = zx.w(*arg2)
        
        result = 1
    else if (*lpMultiByteStr == 0)
        uint32_t edx_1 = zx.d(*arg2)
        
        if ((*((edx_1 u>> 3) + esi + 0xc) & (1 << (edx_1.b & 7)).b) == 0)
            int32_t cchWideChar_2
            cchWideChar_2.b = arg1 != 0
            
            if (MultiByteToWideChar(*esi, MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg2, 1, arg1, 
                    cchWideChar_2) != 0)
                result = 1
            else
                *__errno() = 0x2a
                result = 0xffffffff
        else if (arg3 u< esi[1])
            *lpMultiByteStr_1 = *arg2
            result = 0xfffffffe
        else if (esi[1] u<= 1)
            if (arg2[1] == 0)
                goto label_6d0b10
            
            result = esi[1]
        else
            int32_t cchWideChar_1
            cchWideChar_1.b = arg1 != 0
            
            if (MultiByteToWideChar(*esi, MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg2, esi[1], 
                    arg1, cchWideChar_1) != 0 || arg2[1] != 0)
                result = esi[1]
            else
            label_6d0b10:
                *lpMultiByteStr_1 = 0
                *__errno() = 0x2a
                result = 0xffffffff
    else
        int32_t* eax_1
        eax_1.b = *arg2
        *(lpMultiByteStr + 1) = eax_1.b
        
        if (esi[1] u<= 1)
            goto label_6d0aa3
        
        int32_t cchWideChar
        cchWideChar.b = arg1 != 0
        
        if (MultiByteToWideChar(*esi, MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, lpMultiByteStr, 2, 
                arg1, cchWideChar) == 0)
            lpMultiByteStr = lpMultiByteStr_1
        label_6d0aa3:
            *lpMultiByteStr = 0
            *__errno() = 0x2a
            result = 0xffffffff
        else
            *lpMultiByteStr_1 = 0
            result = esi[1]
else
    if (arg1 != 0)
        *arg1 = 0
    
    result = 0

@__security_check_cookie@4(var_8 ^ &__saved_ebp)
return result
