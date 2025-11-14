// 函数: sub_4478d0
// 地址: 0x4478d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg2
*arg1 = 0
int32_t result
int32_t esi_3

while (true)
    int32_t edi_1 = *(arg2 + 8)
    int32_t* edx = *(arg2 + 4)
    char ebx_2 = edi_1.b & 7
    int32_t var_c = 0
    uint32_t edi_3 = (edi_1 + 8) u>> 3
    uint32_t esi_2 = zx.d(*((edi_1 u>> 3) + *edx)) << (ebx_2 + 0x18)
    
    if (edi_3 + 1 u< edx[1] - *edx)
        int32_t eax_4 = *edx
        esi_2 |=
            zx.d(*(eax_4 + edi_3 + 1)) << (ebx_2 + 8) | zx.d(*(eax_4 + edi_3)) << (ebx_2 + 0x10)
    else if (edi_3 u< edx[1] - *edx)
        esi_2 |= zx.d(*(*edx + edi_3)) << (ebx_2 + 0x10)
    
    if (esi_2 s>= 0)
        esi_3 = 0
        result = 1
    else if ((esi_2 & 0x40000000) == 0)
        int32_t esi_16 = esi_2 & 0x20000000
        result = 3
        int32_t esi_17 = neg.d(esi_16)
        esi_3 = neg.d(sbb.d(esi_17, esi_17, esi_16 != 0)) + 1
    else if ((esi_2 & 0x20000000) == 0)
        int32_t esi_12 = esi_2 & 0x10000000
        result = 4
        int32_t esi_13 = neg.d(esi_12)
        esi_3 = neg.d(sbb.d(esi_13, esi_13, esi_12 != 0)) + 3
    else if ((esi_2 & 0x10000000) == 0)
        int32_t esi_8 = esi_2 & 0x8000000
        result = 5
        int32_t esi_9 = neg.d(esi_8)
        esi_3 = neg.d(sbb.d(esi_9, esi_9, esi_8 != 0)) + 5
    else if ((esi_2 & 0x8000000) == 0)
        result = sub_447fa0(&var_c, esi_2)
        esi_3 = var_c
    else if ((esi_2 & 0x4000000) != 0)
        int32_t* ecx_7 = &var_c
        
        if ((esi_2 & 0x2000000) == 0)
            result = sub_448130(ecx_7, esi_2)
            esi_3 = var_c
        else
            result = sub_4480e0(ecx_7, esi_2)
            esi_3 = var_c
    else if ((esi_2 & 0x2000000) == 0)
        int32_t esi_4 = esi_2 & 0x1000000
        result = 8
        int32_t esi_5 = neg.d(esi_4)
        esi_3 = neg.d(sbb.d(esi_5, esi_5, esi_4 != 0)) + 0xd
    else
        result = sub_4481b0(&var_c, esi_2)
        esi_3 = var_c
    
    arg2 = var_4
    *(arg2 + 8) += result
    
    if (esi_3 != 0xffffffff)
        break
    
    *arg1 += 0x23

*arg1 += esi_3
result.b = 1
return result
