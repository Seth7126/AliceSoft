// 函数: sub_6a60e0
// 地址: 0x6a60e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x261) != 0 || (*(arg1 + 0x326) & 2) == 0)
    return 

int32_t eax_1 = *(arg1 + 0x31c)
int32_t edi_1 = *(arg1 + 0x310)
int32_t edx_1 = *(arg1 + 0x304)
int32_t var_10 = edx_1
int32_t var_c = edi_1
int32_t ebp_2 = eax_1 + edi_1 + edx_1
int32_t var_8 = eax_1

if (ebp_2 s<= 0 || edx_1 s< 0)
    sub_6a7500(arg1, "internal error handling cHRM->XYZ")
    noreturn

int32_t eax_2 = sub_6a65c0(eax_1, edx_1, &var_10, 0x8000, ebp_2)

if (eax_2 == 0)
    sub_6a7500(arg1, "internal error handling cHRM->XYZ")
    noreturn

int32_t ebx_1 = var_10

if (ebx_1 u> 0x8000 || edi_1 s< 0)
    sub_6a7500(arg1, "internal error handling cHRM->XYZ")
    noreturn

int32_t eax_3 = sub_6a65c0(eax_2, edi_1, &var_c, 0x8000, ebp_2)

if (eax_3 == 0)
    sub_6a7500(arg1, "internal error handling cHRM->XYZ")
    noreturn

int32_t edi_2 = var_c

if (edi_2 u> 0x8000 || eax_1 s< 0)
    sub_6a7500(arg1, "internal error handling cHRM->XYZ")
    noreturn

if (sub_6a65c0(eax_3, eax_1, &var_8, 0x8000, ebp_2) == 0)
    sub_6a7500(arg1, "internal error handling cHRM->XYZ")
    noreturn

int32_t ecx_3 = var_8

if (ecx_3 u> 0x8000)
    sub_6a7500(arg1, "internal error handling cHRM->XYZ")
    noreturn

int32_t eax_6 = ecx_3 + edi_2 + ebx_1

if (eax_6 s> 0x8001)
    sub_6a7500(arg1, "internal error handling cHRM->XYZ")
    noreturn

int32_t eax_7

if (eax_6 s> 0x8000)
    eax_7 = 0xffffffff
label_6a61e5:
    
    if (ebx_1 s> edi_2)
        if (ebx_1 s< ecx_3)
            ecx_3 += eax_7
        else
            ebx_1 += eax_7
    else if (edi_2 s>= ecx_3)
        edi_2 += eax_7
    else if (ebx_1 s< edi_2 || ebx_1 s< ecx_3)
        ecx_3 += eax_7
    else
        ebx_1 += eax_7
else if (eax_6 s< 0x8000)
    eax_7 = 1
    goto label_6a61e5

if (ecx_3 + edi_2 + ebx_1 != 0x8000)
    sub_6a7500(arg1, "internal error handling cHRM coefficients")
    noreturn

*(arg1 + 0x262) = ebx_1.w
*(arg1 + 0x264) = edi_2.w
