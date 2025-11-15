// 函数: sub_569d40
// 地址: 0x569d40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(arg1 + 0x34)
int32_t esi = *(arg1 + 0x30)
__Smtx_unlock_shared(arg1 + 0x34)

if (esi != 0)
    __Smtx_lock_shared(arg1 + 0x34)
    int32_t* esi_1 = *(arg1 + 0x30)
    __Smtx_unlock_shared(arg1 + 0x34)
    
    if ((*(*esi_1 + 0x14))() != 0)
        float* result_1
        float* result_2 = result_1
        float xmm3 = *arg2
        float xmm2 = *result_2
        float xmm0_3 = xmm2 f* arg2[2]
        float xmm2_1 = xmm2 f* arg2[1]
        float var_18 = arg2[2] f* result_2[1] - arg2[1] f* result_2[2]
        float var_14 = xmm3 * result_2[2] - xmm0_3
        float var_10 = xmm2_1 - xmm3 * result_2[1]
        __Smtx_lock_shared(arg1 + 0x34)
        int32_t* esi_2 = *(arg1 + 0x30)
        __Smtx_unlock_shared(arg1 + 0x34)
        float* result
        int32_t ecx_2
        result, ecx_2 = (*(*esi_2 + 0x18))()
        result_1 = result
        
        if (result == 0)
            result.b = 0
            return result
        
        int32_t* eax_6 = *(arg1 + 0x14)
        float xmm0_4 = eax_6[1]
        int32_t var_30_6 = ecx_2
        float xmm0_5 = *eax_6
        float xmm1_10 = *(arg1 + 0xc) + xmm0_5 f* arg2[1] + xmm0_4 * result_2[1]
        float xmm2_7 = *(arg1 + 0x10) + arg2[2] f* xmm0_5 + result_2[2] * xmm0_4
        float var_c = *(arg1 + 8) + *arg2 * xmm0_5 + *result_2 * xmm0_4
        float var_8 = xmm1_10
        float var_4 = xmm2_7
        sub_569c60(&var_18, &var_c, &result_1, &var_18, *(arg1 + 0x20), eax_6[2])
        void* eax_8 = *(arg1 + 0x14)
        float xmm0_10 = *(eax_8 + 0x10)
        float xmm2_8 = *(eax_8 + 0xc)
        float xmm1_13 = *(arg1 + 0xc) + xmm2_8 f* arg2[1] + xmm0_10 * result_2[1]
        float xmm0_15 = *(arg1 + 0x10) + xmm2_8 f* arg2[2] + result_2[2] * xmm0_10
        var_c = xmm2_8 f* *arg2 f+ *(arg1 + 8) + *result_2 * xmm0_10
        float var_8_1 = xmm1_13
        float var_4_1 = xmm0_15
        sub_569c60(&var_18, &var_c, &result_1, &var_18, *(arg1 + 0x20) + 8, *(eax_8 + 0x14))
        void* eax_12 = *(arg1 + 0x14)
        float xmm0_17 = *(eax_12 + 0x1c)
        float xmm2_10 = *(eax_12 + 0x18)
        float var_8_2 = *(arg1 + 0xc) + xmm2_10 f* arg2[1] + xmm0_17 * result_2[1]
        float var_4_2 = *(arg1 + 0x10) + xmm2_10 f* arg2[2] + result_2[2] * xmm0_17
        int32_t xmm0_23 = *(eax_12 + 0x20)
        int32_t* eax_14 = *(arg1 + 0x20) + 0x10
        var_c = xmm2_10 f* *arg2 f+ *(arg1 + 8) + *result_2 * xmm0_17
        sub_569c60(&var_18, &var_c, &result_1, &var_18, eax_14, xmm0_23)
        void* eax_16 = *(arg1 + 0x14)
        float xmm0_24 = *(eax_16 + 0x28)
        float xmm2_12 = *(eax_16 + 0x24)
        float xmm1_19 = *(arg1 + 0xc) + xmm2_12 f* arg2[1] + xmm0_24 * result_2[1]
        float xmm0_29 = *(arg1 + 0x10) + xmm2_12 f* arg2[2] + result_2[2] * xmm0_24
        var_c = xmm2_12 f* *arg2 f+ *(arg1 + 8) + *result_2 * xmm0_24
        float var_8_3 = xmm1_19
        float var_4_3 = xmm0_29
        sub_569c60(&var_18, &var_c, &result_1, &var_18, *(arg1 + 0x20) + 0x18, *(eax_16 + 0x2c))
        __Smtx_lock_shared(arg1 + 0x34)
        int32_t* esi_4 = *(arg1 + 0x30)
        __Smtx_unlock_shared(arg1 + 0x34)
        return (*(*esi_4 + 0x1c))() != 0

return 1
