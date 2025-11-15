// 函数: __Wcsxfrm
// 地址: 0x6d4a99
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
char* ecx_1 = arg1
void* eax = arg5
int32_t esi = 0xffffffff
int32_t ebx_2 = (arg2 - ecx_1) s>> 1
int32_t edi_2 = (arg4 - arg3) s>> 1

if (eax == 0)
    eax = ____lc_locale_name_func(ecx_1)
    ecx_1 = arg1

int32_t eax_1 = *(eax + 4)

if (eax_1 == 0)
    if (edi_2 u<= ebx_2)
        sub_700660(ecx_1, arg3, edi_2 * 2)
    
    return edi_2

PWSTR eax_3 = __malloc_base(ebx_2)

if (eax_3 != 0)
    int32_t eax_4 = ___crtLCMapStringW(eax_1, 0x400, arg3, edi_2, eax_3, ebx_2)
    esi = eax_4
    PWSTR edx_1
    
    if (esi != 0)
        edx_1 = eax_3
        void* ecx_3 = nullptr
        
        if (esi != 0)
            do
                *(arg1 + (ecx_3 << 1)) = zx.w(*(ecx_3 + edx_1))
                ecx_3 += 1
            while (ecx_3 u< esi)
    else
        edx_1 = eax_3
        esi = ___crtLCMapStringW(eax_1, 0x400, arg3, edi_2, eax_4, eax_4)
        
        if (esi == 0)
            esi = 0x7fffffff
    
    __free_base(edx_1)

return esi
