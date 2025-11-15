// 函数: ___acrt_GetStringTypeA
// 地址: 0x7196bf
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_28 = edi
void* var_1c
_LocaleUpdate::_LocaleUpdate(&var_1c, arg1)
uint32_t CodePage = arg6

if (CodePage == 0)
    void* var_18
    uint32_t CodePage_1 = *(var_18 + 8)
    CodePage = CodePage_1
    arg6 = CodePage_1

BOOL result = 0
int32_t eax_3
eax_3.b = arg7 != 0
int32_t cchWideChar = MultiByteToWideChar(CodePage, (eax_3 << 3) + 1, arg3, arg4, nullptr, 0)

if (cchWideChar != 0)
    int32_t ebx_1 = cchWideChar * 2
    int32_t eax_5 = sbb.d(cchWideChar, cchWideChar, ebx_1 u< ebx_1 + 8)
    uint32_t (* esi_1)[0x4]
    
    if (((ebx_1 + 8) & eax_5) == 0)
        esi_1 = nullptr
    label_719777:
        
        if (esi_1 != 0)
            _memset(esi_1, 0, ebx_1)
            int32_t cchSrc =
                MultiByteToWideChar(arg6, MB_PRECOMPOSED, arg3, arg4, esi_1, cchWideChar)
            
            if (cchSrc != 0)
                result = GetStringTypeW(arg2, esi_1, cchSrc, arg5)
    else
        int32_t eax_7 = sbb.d(eax_5, eax_5, ebx_1 u< ebx_1 + 8) & (ebx_1 + 8)
        
        if (eax_7 u> 0x400)
            esi_1 = __malloc_base(sbb.d(eax_7, eax_7, ebx_1 u< ebx_1 + 8) & (ebx_1 + 8))
            
            if (esi_1 != 0)
                *esi_1 = 0xdddd
            label_719770:
                esi_1 = &(*esi_1)[2]
                goto label_719777
        else
            __alloca_probe_16(sbb.d(eax_7, eax_7, ebx_1 u< ebx_1 + 8) & (ebx_1 + 8))
            esi_1 = &var_28
            
            if (&var_28 != 0)
                var_28 = 0xcccc
                goto label_719770
    
    __freea_crt(esi_1)

char var_10

if (var_10 != 0)
    void* eax_14 = var_1c
    *(eax_14 + 0x350) &= 0xfffffffd

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
