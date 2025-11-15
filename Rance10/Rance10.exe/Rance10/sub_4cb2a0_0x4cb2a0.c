// 函数: sub_4cb2a0
// 地址: 0x4cb2a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg1
void* eax = esi[1]

if (arg2 u< eax)
    arg1 = *esi

if (arg2 u>= eax || arg1 u> arg2)
    if (eax == esi[2])
        int32_t* var_c_2 = arg1
        eax = sub_4cb310(esi)
    
    int32_t* ecx_3 = esi[1]
    
    if (ecx_3 != 0)
        *ecx_3 = *arg2
        eax = arg2[1]
        ecx_3[1] = eax
else
    int32_t edi_2 = (arg2 - arg1) s>> 3
    
    if (eax == esi[2])
        int32_t* var_c_1 = arg1
        eax = sub_4cb310(esi)
    
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
