// 函数: sub_5e8080
// 地址: 0x5e8080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 s>= 0)
    void* edi_1 = data_7fd4cc
    
    if (arg3 s< (*(edi_1 + 0x58) - *(edi_1 + 0x54)) s>> 3)
        int32_t edi_2 = *(edi_1 + 0x54)
        void* esi_2 = (arg3 << 3) + 4 + edi_2
        __Smtx_lock_shared(esi_2)
        void* edi_3 = *(edi_2 + (arg3 << 3))
        __Smtx_unlock_shared(esi_2)
        
        if (edi_3 != 0)
            void var_88
            int32_t* eax_3
            int32_t ecx_1
            eax_3, ecx_1 = sub_6caeb0(&var_88, *(edi_3 + 0x38) ^ (data_79aad0).d)
            int32_t var_e0 = ecx_1
            void var_48
            int32_t* eax_4 = sub_6caf70(&var_48, *(edi_3 + 0x3c) ^ (data_79aad0).d)
            float var_c8
            sub_6cb020(eax_4, eax_4, &var_c8, eax_3)
            float xmm4 = data_7e70e0
            float xmm3 = data_7e70e4
            float xmm2 = data_7e70e8
            float var_b8
            float var_a8
            *arg2 = var_c8 * xmm4 + var_b8 * xmm3 + var_a8 * xmm2
            float var_c4
            float var_b4
            float var_a4
            *arg4 = var_c4 * xmm4 + var_b4 * xmm3 + var_a4 * xmm2
            float var_c0
            float var_b0
            float var_a0
            *arg5 = var_c0 * xmm4 + var_b0 * xmm3 + var_a0 * xmm2
            float* eax_7
            eax_7.b = 1
            return eax_7

arg1.b = 0
return arg1
