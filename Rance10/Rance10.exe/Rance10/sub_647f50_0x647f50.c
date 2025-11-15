// 函数: sub_647f50
// 地址: 0x647f50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 0x30)
void* result

if (ecx != 0)
    result = (*(*ecx + 0x18))()
    void* result_1 = result
    
    if (result != 0)
        int32_t var_10 = *(arg1 + 0x90)
        int32_t var_c_1 = *(arg1 + 0x94)
        int32_t xmm0_3 = *(arg1 + 0x98)
        int32_t var_18 = 0
        int32_t var_14_1 = 0
        int32_t var_8_1 = xmm0_3
        sub_6492a0(&var_18, &var_10, &result_1, &var_18)
        var_10 = *(arg1 + 0xa0)
        int32_t var_c_2 = *(arg1 + 0xa4)
        int32_t xmm0_6 = *(arg1 + 0xa8)
        var_18 = 0x3f800000
        int32_t var_14_2 = 0
        int32_t var_8_2 = xmm0_6
        sub_6492a0(&var_18, &var_10, &result_1, &var_18)
        var_10 = *(arg1 + 0xb0)
        int32_t var_c_3 = *(arg1 + 0xb4)
        int32_t xmm0_9 = *(arg1 + 0xb8)
        var_18 = 0
        int32_t var_14_3 = 0x3f800000
        int32_t var_8_3 = xmm0_9
        sub_6492a0(&var_18, &var_10, &result_1, &var_18)
        var_10 = *(arg1 + 0xc0)
        int32_t var_c_4 = *(arg1 + 0xc4)
        int32_t xmm0_12 = *(arg1 + 0xc8)
        var_18 = 0x3f800000
        int32_t var_14_4 = 0x3f800000
        int32_t var_8_4 = xmm0_12
        sub_6492a0(&var_18, &var_10, &result_1, &var_18)
        int32_t* ecx_5 = *(arg1 + 0x30)
        
        if (ecx_5 != 0 && (*(*ecx_5 + 0x1c))().b != 0)
            result.b = 1
            return result

result.b = 0
return result
