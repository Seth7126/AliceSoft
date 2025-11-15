// 函数: ?InternalGetLocaleInfoA@@YAHQAU__crt_locale_pointers@@QB_WKQADH@Z
// 地址: 0x719412
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_28 = edi
void* var_1c
_LocaleUpdate::_LocaleUpdate(&var_1c, arg1)
int32_t result = 0
void* var_18
uint32_t CodePage = *(var_18 + 8)
int32_t eax_3 = ___acrt_GetLocaleInfoEx@16(arg2, arg3, nullptr, 0)

if (eax_3 != 0)
    int32_t edx_1 = eax_3 * 2
    int32_t eax_4 = sbb.d(eax_3, eax_3, edx_1 u< edx_1 + 8)
    int32_t* lpWideCharStr
    
    if (((edx_1 + 8) & eax_4) == 0)
        lpWideCharStr = nullptr
    label_7194ae:
        
        if (lpWideCharStr != 0 && ___acrt_GetLocaleInfoEx@16(arg2, arg3, lpWideCharStr, eax_3) != 0)
            int32_t eax_14 = neg.d(arg5)
            result = WideCharToMultiByte(CodePage, 0, lpWideCharStr, 0xffffffff, 
                sbb.d(eax_14, eax_14, arg5 != 0) & arg4, arg5, nullptr, nullptr)
    else
        int32_t eax_6 = sbb.d(eax_4, eax_4, edx_1 u< edx_1 + 8) & (edx_1 + 8)
        
        if (eax_6 u> 0x400)
            lpWideCharStr = __malloc_base(sbb.d(eax_6, eax_6, edx_1 u< edx_1 + 8) & (edx_1 + 8))
            
            if (lpWideCharStr != 0)
                *lpWideCharStr = 0xdddd
            label_7194a7:
                lpWideCharStr = &lpWideCharStr[2]
                goto label_7194ae
        else
            __alloca_probe_16(sbb.d(eax_6, eax_6, edx_1 u< edx_1 + 8) & (edx_1 + 8))
            lpWideCharStr = &var_28
            
            if (&var_28 != 0)
                var_28 = 0xcccc
                goto label_7194a7
    
    __freea_crt(lpWideCharStr)

char var_10

if (var_10 != 0)
    void* eax_18 = var_1c
    *(eax_18 + 0x350) &= 0xfffffffd

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
