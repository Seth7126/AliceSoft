// 函数: sub_67a3e0
// 地址: 0x67a3e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg1 + 0x1c0)
int32_t edi = *(arg1 + 0x64)
void* j_3 = *(arg1 + 0x5c)
uint32_t (* result)[0x4] = *(arg1 + 0x12c)
arg1 = esi
int32_t var_4 = edi
void* j_2 = j_3
uint32_t (* result_1)[0x4] = result

if (arg4 s> 0)
    int32_t* result_2 = arg3
    arg2 -= result_2
    int32_t i
    
    do
        _memset(*result_2, 0, j_3)
        int32_t ebp_1 = 0
        int32_t var_18_1 = 0
        
        if (edi s> 0)
            result = arg3
            void* ecx = esi + 0x44
            
            do
                uint32_t edx_1 = *result
                uint32_t var_30_1 = edx_1
                char* ebx_2 = *(arg2 + result) + ebp_1
                int32_t var_24_1
                int32_t ecx_4
                void* edx_7
                void* const esi_1
                
                if (*(esi + 0x54) == 0)
                    ecx_4 = ebp_1 << 2
                    esi_1 = 1
                    var_24_1 = edi
                    edx_7 = *(ecx + ecx_4)
                else
                    esi_1 = 0xffffffff
                    ecx_4 = ebp_1 << 2
                    var_30_1 = edx_1 + j_2 - 1
                    var_24_1 = neg.d(edi)
                    ebx_2 = &ebx_2[(j_2 - 1) * edi]
                    edx_7 = *(ecx + ecx_4) + ((j_2 + 1) << 1)
                
                void* var_38_1 = edx_7
                int32_t eax_8 = *(ecx_4 + *(arg1 + 0x18))
                int32_t eax_11 = *(ecx_4 + *(arg1 + 0x10))
                uint32_t eax_12 = 0
                int16_t var_2c_1 = 0
                int16_t var_28_1 = 0
                void* j_1 = j_2
                int16_t ecx_16
                
                if (j_2 == 0)
                    ecx_16 = 0
                else
                    uint32_t ebp_2 = var_30_1
                    void* esi_2 = esi_1 * 2
                    void* var_8_1 = esi_2
                    void* j
                    
                    do
                        uint32_t eax_14 = zx.d(*ebx_2)
                        ebx_2 = &ebx_2[var_24_1]
                        uint32_t eax_15 = zx.d(
                            *(eax_14 + ((sx.d(*(esi_2 + edx_7)) + eax_12 + 8) s>> 4) + result_1))
                        uint32_t ecx_11 = zx.d(*(eax_15 + eax_8))
                        *ebp_2 += ecx_11.b
                        ebp_2 += esi_1
                        uint32_t eax_16 = eax_15 - zx.d(*(ecx_11 + eax_11))
                        uint32_t eax_17 = eax_16 * 3
                        uint32_t esi_3 = eax_17 * 2
                        uint32_t eax_18 = eax_17 + esi_3
                        *var_38_1 = var_2c_1 + eax_17.w
                        ecx_16 = var_28_1 + eax_18.w
                        var_28_1 = eax_16.w
                        edx_7 += esi_2
                        eax_12 = eax_18 + esi_3
                        j = j_1
                        j_1 -= 1
                        esi_2 = var_8_1
                        var_2c_1 = ecx_16
                        var_38_1 = edx_7
                    while (j != 1)
                    ebp_1 = var_18_1
                    edi = var_4
                
                esi = arg1
                ebp_1 += 1
                result = arg3
                *edx_7 = ecx_16
                var_18_1 = ebp_1
            while (ebp_1 s< edi)
            
            result_2 = result
        
        j_3 = j_2
        result.b = *(esi + 0x54) == 0
        result_2 = &result_2[1]
        i = arg4
        arg4 -= 1
        *(esi + 0x54) = result.b
        arg3 = result_2
    while (i != 1)

return result
