// 函数: sub_6aba96
// 地址: 0x6aba96
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebx = arg3
int32_t result = 0x404e
int32_t result_1 = 0x404e
*ebx = 0
ebx[1] = 0
ebx[2] = 0

if (arg2 u> 0)
    int32_t ecx_1 = 0
    arg3 = nullptr
    int32_t var_10_1 = 0
    int32_t var_c_1 = 0
    int32_t i
    
    do
        int32_t edx_2 = var_10_1 * 2
        void* var_20_1 = *ebx
        int32_t var_1c
        int32_t* edi_1 = &var_1c
        void* esi_2 = &ebx[1]
        *edi_1 = *esi_2
        edi_1[1] = *(esi_2 + 4)
        int32_t esi_7 = (arg3 * 2) | ecx_1 u>> 0x1f
        int32_t edx_3 = edx_2 * 2
        int32_t esi_9 = (esi_7 * 2) | edx_2 u>> 0x1f
        *ebx = edx_3
        int32_t edi_8 = (((var_c_1 * 2) | arg3 u>> 0x1f) * 2) | esi_7 u>> 0x1f
        ebx[1] = esi_9
        int32_t* eax_5 = var_20_1 + edx_3
        ebx[2] = edi_8
        int32_t ecx_6 = 0
        
        if (eax_5 u< edx_3 || eax_5 u< var_20_1)
            ecx_6 = 1
        
        *ebx = eax_5
        
        if (ecx_6 != 0)
            int32_t eax_6 = esi_9
            int32_t ecx_7 = 0
            esi_9 = eax_6 + 1
            
            if (esi_9 u< eax_6 || esi_9 u< 1)
                ecx_7 = 1
            
            ebx[1] = esi_9
            
            if (ecx_7 != 0)
                edi_8 += 1
                ebx[2] = edi_8
        
        int32_t edx_4 = var_1c
        int32_t eax_7 = 0
        int32_t ecx_8 = esi_9 + edx_4
        
        if (ecx_8 u< esi_9 || ecx_8 u< edx_4)
            eax_7 = 1
        
        ebx[1] = ecx_8
        
        if (eax_7 != 0)
            edi_8 += 1
            ebx[2] = edi_8
        
        int32_t edx_6 = eax_5 * 2
        int32_t var_14_1 = 0
        int32_t* esi_12 = (ecx_8 * 2) | eax_5 u>> 0x1f
        int32_t var_18
        int32_t edi_11 = ((edi_8 + var_18) * 2) | ecx_8 u>> 0x1f
        *ebx = edx_6
        ebx[1] = esi_12
        ebx[2] = edi_11
        int32_t eax_11 = sx.d(*arg1)
        arg3 = esi_12
        var_c_1 = edi_11
        int32_t var_20_2 = eax_11
        ecx_1 = edx_6 + eax_11
        var_10_1 = ecx_1
        int32_t eax_12
        
        if (ecx_1 u< edx_6 || ecx_1 u< eax_11)
            eax_12 = 1
        else
            eax_12 = var_14_1
        
        *ebx = ecx_1
        
        if (eax_12 != 0)
            int32_t* eax_13 = esi_12
            int32_t edx_7 = 0
            esi_12 = eax_13 + 1
            arg3 = esi_12
            
            if (esi_12 u< eax_13 || esi_12 u< 1)
                edx_7 = 1
            
            ebx[1] = esi_12
            
            if (edx_7 != 0)
                edi_11 += 1
                var_c_1 = edi_11
                ebx[2] = edi_11
        
        i = arg2 - 1
        ebx[1] = esi_12
        arg1 = &arg1[1]
        ebx[2] = edi_11
        arg2 = i
    while (i != 0)
    result = 0x404e

if (ebx[2] == 0)
    int32_t edx_8 = ebx[1]
    uint32_t i_1
    
    do
        int32_t ecx_10 = *ebx
        int32_t esi_13 = edx_8
        edx_8 = edx_8 << 0x10 | ecx_10 u>> 0x10
        i_1 = esi_13 u>> 0x10
        result = result_1 + 0xfff0
        *ebx = ecx_10 << 0x10
        result_1 = result
    while (i_1 == 0)
    
    ebx[1] = edx_8
    ebx[2] = i_1

int32_t edx_10 = ebx[2]

if ((edx_10 & 0x8000) == 0)
    int32_t edi_12 = *ebx
    int32_t esi_14 = ebx[1]
    
    do
        int32_t ecx_12 = esi_14
        esi_14 = (esi_14 * 2) | edi_12 u>> 0x1f
        edx_10 = (edx_10 * 2) | ecx_12 u>> 0x1f
        result = result_1 + 0xffff
        edi_12 *= 2
        result_1 = result
    while ((edx_10 & 0x8000) == 0)
    
    *ebx = edi_12
    ebx[1] = esi_14
    ebx[2] = edx_10

*(ebx + 0xa) = result.w
return result
