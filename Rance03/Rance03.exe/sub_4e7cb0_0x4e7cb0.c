// 函数: sub_4e7cb0
// 地址: 0x4e7cb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax = *(arg1 + 0x10)
int32_t edx = 0
int32_t ebx = *(arg1 + 0x14)

if (eax != ebx)
    int32_t ebp_1 = *(arg1 + 0xc)
    
    while (edx s< ebp_1)
        int32_t edi_2 = *(arg1 + 4) + edx
        int32_t var_8 = edi_2
        
        if (edi_2 != *eax)
            int32_t* var_20 = &var_8
            void var_4
            sub_47a0a0(arg1 + 0x10, &var_4, eax, &var_8)
            return edi_2
        
        eax = &eax[1]
        edx += 1
        
        if (eax == ebx)
            break

int32_t eax_3 = (*(arg1 + 0x14) - *(arg1 + 0x10)) s>> 2

if (*(arg1 + 0xc) s<= eax_3)
    return 0xffffffff

int32_t ebx_2 = *(arg1 + 4) + eax_3
int32_t eax_6 = *(arg1 + 0x14)
int32_t var_c = ebx_2
int32_t ecx_1

if (&var_c u< eax_6)
    ecx_1 = *(arg1 + 0x10)

if (&var_c u>= eax_6 || ecx_1 u> &var_c)
    if (eax_6 == *(arg1 + 0x18))
        sub_415950(arg1 + 0x10, 1)
    
    int32_t* eax_10 = *(arg1 + 0x14)
    
    if (eax_10 != 0)
        *eax_10 = ebx_2
else
    if (eax_6 == *(arg1 + 0x18))
        sub_415950(arg1 + 0x10, 1)
    
    int32_t* ecx_3 = *(arg1 + 0x14)
    
    if (ecx_3 != 0)
        *ecx_3 = *(*(arg1 + 0x10) + ((&var_c - ecx_1) s>> 2 << 2))
        *(arg1 + 0x14) += 4
        return ebx_2

*(arg1 + 0x14) += 4
return ebx_2
