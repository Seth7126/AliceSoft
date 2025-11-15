// 函数: sub_5ea1d0
// 地址: 0x5ea1d0
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
            int32_t var_18 = arg4
            int32_t var_14_1 = arg5
            int32_t var_10_1 = arg6
            int32_t xmm1
            int32_t var_c = xmm1
            int32_t xmm2
            int32_t var_8_1 = xmm2
            int32_t var_24 = 0
            int32_t var_20_1 = 0
            int32_t var_1c_1 = 0
            int32_t xmm3
            int32_t var_4_1 = xmm3
            
            if (sub_5642b0(edi_3 + 0x1ac, arg7, &var_c, &var_18, &var_24).b != 0)
                *arg2 = var_24
                *arg8 = var_20_1
                *arg9 = var_1c_1
                int32_t* eax_3
                eax_3.b = 1
                return eax_3

arg1.b = 0
return arg1
