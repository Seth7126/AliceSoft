// 函数: sub_5ea920
// 地址: 0x5ea920
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
            int32_t xmm1
            int32_t var_c = xmm1
            int32_t xmm2
            int32_t var_8_1 = xmm2
            struct common::CPoint::VTable* const var_18 = &common::CPoint::`vftable'
            int32_t var_14_1 = 0
            int32_t var_10_1 = 0
            int32_t xmm3
            int32_t var_4_1 = xmm3
            
            if (sub_5c65a0(edi_3 + 0x10, &var_c, &var_18).b != 0)
                *arg2 = var_14_1
                *arg4 = var_10_1
                int32_t eax_3
                eax_3.b = 1
                return eax_3

arg1.b = 0
return arg1
