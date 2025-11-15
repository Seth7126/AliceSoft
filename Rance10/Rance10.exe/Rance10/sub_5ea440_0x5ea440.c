// 函数: sub_5ea440
// 地址: 0x5ea440
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
            int32_t var_14 = arg5
            int32_t var_10 = arg6
            int32_t xmm1
            int32_t var_c = xmm1
            int32_t xmm2
            int32_t var_8 = xmm2
            int32_t xmm3
            int32_t var_4 = xmm3
            return sub_564360(edi_3 + 0x1ac, &var_c, &var_18, edi_3 + 0x2c, edi_3 + 0xe0) != 0

arg1.b = 0
return arg1
