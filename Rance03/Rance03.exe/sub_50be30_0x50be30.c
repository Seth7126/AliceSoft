// 函数: sub_50be30
// 地址: 0x50be30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg1
int32_t eax = esi[1]

if (arg2 u< eax)
    arg1 = *esi

if (arg2 u>= eax || arg1 u> arg2)
    if (eax == esi[2])
        int32_t* var_c_2 = arg1
        eax = sub_50bea0(esi)
    
    int32_t* ecx_3 = esi[1]
    
    if (ecx_3 != 0)
        *ecx_3 = *arg2
        eax = arg2[1]
        ecx_3[1] = eax
else
    int32_t edi_2 = (arg2 - arg1) s>> 3
    
    if (eax == esi[2])
        int32_t* var_c_1 = arg1
        eax = sub_50bea0(esi)
    
    int32_t* edx_1 = esi[1]
    
    if (edx_1 != 0)
        int32_t ecx_1 = *esi
        *edx_1 = *(ecx_1 + (edi_2 << 3))
        int32_t eax_2 = *(ecx_1 + (edi_2 << 3) + 4)
        edx_1[1] = eax_2
        esi[1] += 8
        return eax_2

esi[1] += 8
return eax
