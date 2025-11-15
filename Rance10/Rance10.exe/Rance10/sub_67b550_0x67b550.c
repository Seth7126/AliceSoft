// 函数: sub_67b550
// 地址: 0x67b550
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = *(arg1 + 0x1c0)
int32_t edx = *(arg1 + 0x12c)
void* var_4 = ebx
int32_t ecx = *(ebx + 0x18)
int32_t edx_1 = *(ebx + 0x28)
int32_t j_2 = *(arg1 + 0x5c)
int32_t* eax_1 = *(arg1 + 0x74)
int32_t j_3 = j_2
int32_t edx_2 = *eax_1
int32_t edx_3 = eax_1[1]
int32_t* result = eax_1[2]
int32_t* result_1 = result

if (arg4 s> 0)
    result = arg3
    int32_t* edx_5 = arg2 - result
    arg2 = edx_5
    int32_t i
    
    do
        char* edx_6 = *(edx_5 + result)
        char* esi_1 = *result
        char* var_58_1 = edx_6
        char* var_68_1 = esi_1
        void* var_5c_1
        int32_t var_38_1
        int16_t* esi_4
        
        if (*(ebx + 0x24) == 0)
            esi_4 = *(ebx + 0x20)
            var_38_1 = 1
            var_5c_1 = 3
            *(ebx + 0x24) = 1
        else
            int32_t eax_2 = *(ebx + 0x20)
            var_38_1 = 0xffffffff
            var_5c_1 = 0xfffffffd
            *(ebx + 0x24) = 0
            var_68_1 = esi_1 - 1 + j_2
            edx_6 = &edx_6[0xfffffffd + j_2 * 3]
            var_58_1 = edx_6
            esi_4 = eax_2 + ((j_2 * 3 + 3) << 1)
            j_2 = j_3
            result = arg3
        
        uint32_t ebx_1 = 0
        int32_t j_1 = j_2
        uint32_t edi_1 = 0
        int16_t var_3c_1 = 0
        uint32_t ebp_1 = 0
        int16_t var_40_1 = 0
        int16_t var_44_1 = 0
        int16_t var_4c_1 = 0
        int16_t var_50_1 = 0
        int16_t var_54_1 = 0
        
        if (j_2 != 0)
            void* ecx_3 = var_5c_1 * 2
            void* var_8_1 = ecx_3
            int32_t j
            
            do
                int16_t* eax_5 = ecx_3 + esi_4
                uint32_t ebp_3 =
                    zx.d(*(*(edx_1 + ((ebp_1 + 8 + sx.d(*eax_5)) s>> 4 << 2)) + zx.d(*edx_6) + edx))
                uint32_t ebx_3 = zx.d(
                    *(*(edx_1 + ((sx.d(eax_5[1]) + 8 + ebx_1) s>> 4 << 2)) + zx.d(edx_6[1]) + edx))
                int32_t edx_11 = ebx_3 s>> 2
                uint32_t edi_2 = zx.d(*(
                    *(edx_1 + ((edi_1 + 8 + sx.d(*((var_5c_1 << 1) + 4 + esi_4))) s>> 4 << 2))
                    + zx.d(edx_6[2]) + edx))
                int32_t ecx_21 = ebp_3 s>> 3
                int32_t eax_17 = edi_2 s>> 3
                int32_t ecx_24 = (edx_11 << 5) + eax_17
                int32_t eax_19 = *(ecx + (ecx_21 << 2))
                int16_t* eax_20 = eax_19 + (ecx_24 << 1)
                
                if (*(eax_19 + (ecx_24 << 1)) == 0)
                    sub_67b350(eax_20, ecx_21, arg1, edx_11, eax_17)
                
                void* ecx_27 = zx.d(*eax_20) - 1
                *var_68_1 = ecx_27.b
                uint32_t ebp_4 = ebp_3 - zx.d(*(ecx_27 + edx_2))
                uint32_t ebx_4 = ebx_3 - zx.d(*(ecx_27 + edx_3))
                uint32_t edi_3 = edi_2 - zx.d(*(ecx_27 + result_1))
                uint32_t ebp_5 = ebp_4 * 3
                uint32_t edx_15 = ebp_5 << 1
                uint32_t ebp_6 = ebp_5 + edx_15
                *esi_4 = var_54_1 + ebp_5.w
                int16_t eax_31 = var_44_1 + ebp_6.w
                var_44_1 = ebp_4.w
                var_54_1 = eax_31
                uint32_t ebx_5 = ebx_4 * 3
                ebp_1 = ebp_6 + edx_15
                esi_4[1] = var_50_1 + ebx_5.w
                uint32_t edx_16 = ebx_5 * 2
                uint32_t ebx_6 = ebx_5 + edx_16
                int16_t eax_35 = var_40_1 + ebx_6.w
                var_40_1 = ebx_4.w
                var_50_1 = eax_35
                uint32_t edi_4 = edi_3 * 3
                ebx_1 = ebx_6 + edx_16
                uint32_t edx_17 = edi_4 * 2
                esi_4[2] = var_4c_1 + edi_4.w
                uint32_t edi_5 = edi_4 + edx_17
                esi_4 = eax_5
                edi_1 = edi_5 + edx_17
                var_4c_1 = var_3c_1 + edi_5.w
                edx_6 = var_58_1 + var_5c_1
                var_68_1 = &var_68_1[var_38_1]
                j = j_1
                j_1 -= 1
                var_3c_1 = edi_3.w
                ecx_3 = var_8_1
                var_58_1 = edx_6
            while (j != 1)
            j_2 = j_3
            result = arg3
        
        result = &result[1]
        i = arg4
        arg4 -= 1
        ebx = var_4
        *esi_4 = var_54_1
        esi_4[1] = var_50_1
        esi_4[2] = var_4c_1
        edx_5 = arg2
        arg3 = result
    while (i != 1)

return result
