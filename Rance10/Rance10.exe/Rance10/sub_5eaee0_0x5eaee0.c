// 函数: sub_5eaee0
// 地址: 0x5eaee0
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
            int32_t var_20_1 = arg4
            int128_t var_18
            __builtin_memset(&var_18, 0, 0x18)
            struct common::CPoint::VTable* const var_28 = &common::CPoint::`vftable'
            int32_t var_24_1 = arg2
            void var_1c
            
            if (sub_5c6210(edi_3 + 0x10, &var_28, &var_1c).b != 0)
                *arg5 = var_18.d
                *arg6 = var_18:4.d
                *arg7 = var_18:8.d
                *arg8 = var_18:0xc.d
                int32_t var_8
                *arg9 = var_8
                int32_t var_4
                *arg10 = var_4
                int32_t* eax_8
                eax_8.b = 1
                return eax_8

arg1.b = 0
return arg1
