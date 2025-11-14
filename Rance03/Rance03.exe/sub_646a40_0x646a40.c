// 函数: sub_646a40
// 地址: 0x646a40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = arg3
void* ecx = arg6
int32_t edx = edi
int32_t var_4 = edi
arg6 = 1
int32_t var_c = edi
int32_t result = *(ecx + 4)
int32_t var_8 = result
int32_t var_10 = edi

if (result s> 0)
    void* ecx_2 = ecx + (result << 2) + 4
    void* esi_1 = arg4
    void* var_14_1 = ecx_2
    int32_t i
    
    do
        int32_t temp0_1 = divs.dp.d(sx.q(edx), *ecx_2)
        int32_t temp0_2 = divs.dp.d(sx.q(edi), var_c)
        int32_t eax_6 = temp0_2 * temp0_1
        int32_t eax_7 = *var_14_1
        int32_t edx_4 = var_10 - (eax_7 - 1) * temp0_2
        void* ecx_8 = 1 - arg6
        var_10 = edx_4
        arg6 = ecx_8
        
        if (eax_7 == 4)
            void* eax_24 = arg5 - 4 + (edx_4 << 2)
            void* var_3c_3
            int32_t* var_38_3
            
            if (ecx_8 == 0)
                var_38_3 = esi_1
                var_3c_3 = arg2
            else
                var_38_3 = arg2
                var_3c_3 = esi_1
            
            sub_645550(eax_24, temp0_1, temp0_2, var_3c_3, var_38_3, eax_24, 
                ((edx_4 - 1 + temp0_2) << 2) + arg5, 
                ((temp0_2 * 2 + edx_4) << 2) + 0xfffffffc + arg5)
            result = arg6
        else if (eax_7 == 2)
            void* eax_14 = arg5 - 4 + (edx_4 << 2)
            
            if (ecx_8 == 0)
                sub_6452f0(eax_14, temp0_1, temp0_2, arg2, esi_1, eax_14)
            else
                sub_6452f0(eax_14, temp0_1, temp0_2, esi_1, arg2, eax_14)
            
            result = arg6
        else
            if (temp0_2 == 1)
                ecx_8 = temp0_2 - ecx_8
            
            int32_t eax_11 = arg5 - 4 + (edx_4 << 2)
            int32_t edx_5 = *var_14_1
            int16_t top
            
            if (ecx_8 == 0)
                sub_645a00(var_14_1, edx_5, temp0_2, temp0_1, eax_6, arg2, arg2, arg2, esi_1, 
                    esi_1, eax_11)
                top += 2
                result = 1
                arg6 = 1
            else
                sub_645a00(var_14_1, edx_5, temp0_2, temp0_1, eax_6, esi_1, esi_1, esi_1, arg2, 
                    arg2, eax_11)
                top += 2
                result = 0
                arg6 = nullptr
        
        edx = temp0_1
        ecx_2 = var_14_1 - 4
        i = var_8
        var_8 -= 1
        edi = var_4
        var_c = edx
        var_14_1 = ecx_2
    while (i != 1)
    
    if (result != 1)
        result = 0
        
        if (edi s>= 4)
            int32_t i_4 = ((edi - 4) u>> 2) + 1
            void* edx_8 = esi_1 + 0xc
            void* ecx_13 = arg2 + 4
            int32_t result_1 = i_4 << 2
            int32_t i_1
            
            do
                ecx_13 += 0x10
                *(ecx_13 - 0x14) = *(edx_8 - 0xc)
                edx_8 += 0x10
                *(ecx_13 - 0x10) = *(esi_1 - arg2 + ecx_13 - 0x10)
                *(ecx_13 - 0xc) = *(edx_8 - 0x14)
                *(ecx_13 - 8) = *(edx_8 - 0x10)
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
            esi_1 = arg4
            result = result_1
        
        if (result s< edi)
            void* ecx_14 = arg2 + (result << 2)
            int32_t i_3 = edi - result
            int32_t i_2
            
            do
                result = *(ecx_14 + esi_1 - arg2)
                ecx_14 += 4
                *(ecx_14 - 4) = result
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)

return result
