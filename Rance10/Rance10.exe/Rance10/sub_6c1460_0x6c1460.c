// 函数: sub_6c1460
// 地址: 0x6c1460
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = 1
int32_t edi = arg3
int32_t result_1 = 1
int32_t var_20 = edi
int32_t i_6 = *(arg6 + 4)
int32_t edx = edi
int32_t i_3 = i_6
int32_t var_18 = edi
int32_t var_1c = edi

if (i_6 s> 0)
    void* ecx_1 = arg6 + ((i_6 + 1) << 2)
    void* var_24_1 = ecx_1
    float* esi_2
    int32_t i
    
    do
        int32_t temp0_1 = divs.dp.d(sx.q(edx), *ecx_1)
        int32_t temp0_2 = divs.dp.d(sx.q(edi), var_18)
        int32_t eax_6 = temp0_2 * temp0_1
        int32_t edx_4 = var_1c - (*var_24_1 - 1) * temp0_2
        int32_t result_4 = 1 - result_1
        int32_t ecx_7 = *var_24_1
        esi_2 = arg4
        var_1c = edx_4
        result_1 = result_4
        
        if (ecx_7 == 4)
            int32_t ecx_11 = temp0_2 * 2 + edx_4
            float* var_4c_3
            void* var_48_3
            void* var_44_5
            int32_t var_40_5
            float* var_3c_5
            void* eax_23
            
            if (result_4 == 0)
                var_3c_5 = arg5 + ((ecx_11 - 1) << 2)
                var_40_5 = arg5 + ((edx_4 - 1 + temp0_2) << 2)
                eax_23 = arg5 - 4 + (edx_4 << 2)
                var_44_5 = eax_23
                var_48_3 = esi_2
                var_4c_3 = arg2
            else
                var_3c_5 = arg5 + ((ecx_11 - 1) << 2)
                var_40_5 = arg5 + ((edx_4 - 1 + temp0_2) << 2)
                eax_23 = arg5 - 4 + (edx_4 << 2)
                var_44_5 = eax_23
                var_48_3 = arg2
                var_4c_3 = esi_2
            
            sub_6bff10(eax_23, temp0_1, temp0_2, var_4c_3, var_48_3, var_44_5, var_40_5, var_3c_5)
            result = result_1
        else if (ecx_7 == 2)
            void* eax_14 = arg5 + (edx_4 << 2)
            
            if (result_4 == 0)
                sub_6bfca0(eax_14 - 4, temp0_1, temp0_2, arg2, esi_2, eax_14 - 4)
            else
                sub_6bfca0(eax_14 - 4, temp0_1, temp0_2, esi_2, arg2, eax_14 - 4)
            
            result = result_1
        else
            int32_t result_2 = result
            
            if (temp0_2 != 1)
                result_2 = result_4
            
            int32_t eax_10 = arg5 + (edx_4 << 2)
            int16_t top
            
            if (result_2 == 0)
                sub_6c03d0(eax_10 - 4, ecx_7, temp0_2, temp0_1, eax_6, arg2, arg2, arg2, esi_2, 
                    esi_2, eax_10 - 4)
                top += 2
                result = 1
                result_1 = 1
            else
                sub_6c03d0(eax_10 - 4, ecx_7, temp0_2, temp0_1, eax_6, esi_2, esi_2, esi_2, arg2, 
                    arg2, eax_10 - 4)
                top += 2
                result = 0
                result_1 = 0
        
        edx = temp0_1
        ecx_1 = var_24_1 - 4
        i = i_3
        i_3 -= 1
        edi = var_20
        var_18 = edx
        var_24_1 = ecx_1
    while (i != 1)
    
    if (result != 1)
        result = 0
        
        if (edi s>= 4)
            void* edx_8 = &esi_2[3]
            void* ecx_17 = arg2 + 4
            int32_t var_c_2 = ((edi - 4) u>> 2) + 1
            int32_t i_4 = ((edi - 4) u>> 2) + 1
            int32_t result_3 = (((edi - 4) u>> 2) + 1) << 2
            int32_t i_1
            
            do
                ecx_17 += 0x10
                *(ecx_17 - 0x14) = *(edx_8 - 0xc)
                edx_8 += 0x10
                *(ecx_17 - 0x10) = *(esi_2 - arg2 + ecx_17 - 0x10)
                *(ecx_17 - 0xc) = *(edx_8 - 0x14)
                *(ecx_17 - 8) = *(edx_8 - 0x10)
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
            esi_2 = arg4
            edi = var_20
            result = result_3
        
        if (result s< edi)
            void* ecx_18 = arg2 + (result << 2)
            int32_t i_5 = edi - result
            int32_t i_2
            
            do
                result = *(ecx_18 + esi_2 - arg2)
                ecx_18 += 4
                *(ecx_18 - 4) = result
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)

return result
