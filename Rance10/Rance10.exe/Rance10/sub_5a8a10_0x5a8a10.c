// 函数: sub_5a8a10
// 地址: 0x5a8a10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t xmm1 = arg2
int32_t var_10 = xmm1
int32_t result

if (*(arg1 + 4) != 0)
    int32_t* ecx = arg3
    void* ebx_1 = *ecx
    
    if (*(ebx_1 + 0x220) == 0)
        result.b = 0
        return result
    
    int32_t** esi_1 = *(arg1 + 0x28)
    result = *(arg1 + 0x2c)
    int32_t edi_1 = 0
    uint32_t ebp_4 = (result - esi_1 + 3) u>> 2
    
    if (esi_1 u> result)
        ebp_4 = 0
    
    if (ebp_4 != 0)
        do
            int32_t var_c = 0
            int32_t var_8_1 = 0
            int32_t var_4_1 = 0
            sub_57b1a0(*esi_1, xmm1, ecx, *(ebx_1 + 0x220), &var_c)
            xmm1 = var_10
            esi_1 = &esi_1[1]
            ecx = arg3
            edi_1 += 1
        while (edi_1 != ebp_4)

result.b = 1
return result
