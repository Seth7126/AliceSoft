// 函数: sub_58e540
// 地址: 0x58e540
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = *(arg1 + 8)
int32_t* result = *(arg1 + 4)
int32_t var_1c = ecx
int32_t* result_1 = result

while (result != ecx)
    void* ebp_1 = *result
    float xmm2_1 = 3.40282347e+38f
    float xmm1_1 = -3.40282347e+38f
    void* esi_1 = *(ebp_1 + 8)
    int128_t var_18
    __builtin_memcpy(&var_18, 
        "\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\x7f\xff\xff\x7f\xff", 
        0x18)
    int32_t edi_1 = *(esi_1 + 0x24)
    int32_t* esi_2 = *(esi_1 + 0x20)
    
    if (esi_2 != edi_1)
        do
            sub_57c8b0(esi_2, arg2, &var_18)
            esi_2 = &esi_2[0xf]
        while (esi_2 != edi_1)
        
        float var_4
        xmm1_1 = var_4
        float var_8
        xmm2_1 = var_8
        result = result_1
        ecx = var_1c
    
    result = &result[1]
    result_1 = result
    float xmm0_3 = (var_18.d f+ var_18:4.d) * 0.5f
    *(ebp_1 + 0x34) = (xmm1_1 + xmm2_1) * 0.5f
    *(ebp_1 + 0x2c) = xmm0_3
    *(ebp_1 + 0x30) = (var_18:8.d f+ var_18:0xc.d) * 0.5f

return result
