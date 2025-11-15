// 函数: sub_404080
// 地址: 0x404080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = *(arg1 + 0x10)
int32_t edx = *(arg1 + 0x14)
int32_t edi = 0
int32_t var_8

if (eax != edx)
    int32_t ebp_1 = *(arg1 + 0xc)
    
    while (edi s< ebp_1)
        int32_t ecx_1 = *(arg1 + 4) + edi
        var_8 = ecx_1
        
        if (ecx_1 != *eax)
            int32_t* var_1c = &var_8
            void* var_4
            sub_404420(arg1 + 0x10, &var_4, eax, &var_8)
            return var_8
        
        eax = &eax[1]
        edi += 1
        
        if (eax == edx)
            break

int32_t eax_3 = (*(arg1 + 0x14) - *(arg1 + 0x10)) s>> 2

if (*(arg1 + 0xc) s<= eax_3)
    return 0xffffffff

int32_t ebx_2 = *(arg1 + 4) + eax_3
int32_t eax_6 = *(arg1 + 0x14)
var_8 = ebx_2
int32_t ecx_3

if (&var_8 u< eax_6)
    ecx_3 = *(arg1 + 0x10)

if (&var_8 u>= eax_6 || ecx_3 u> &var_8)
    if (eax_6 == *(arg1 + 0x18))
        sub_404610(arg1 + 0x10, 1)
    
    int32_t* eax_10 = *(arg1 + 0x14)
    
    if (eax_10 != 0)
        *eax_10 = ebx_2
else
    if (eax_6 == *(arg1 + 0x18))
        sub_404610(arg1 + 0x10, 1)
    
    int32_t* ecx_5 = *(arg1 + 0x14)
    
    if (ecx_5 != 0)
        *ecx_5 = *(*(arg1 + 0x10) + ((&var_8 - ecx_3) s>> 2 << 2))
        *(arg1 + 0x14) += 4
        return ebx_2

*(arg1 + 0x14) += 4
return ebx_2
