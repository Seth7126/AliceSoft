// 函数: sub_5e86b0
// 地址: 0x5e86b0
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
            *arg2 = *(edi_3 + 0x58)
            *arg4 = *(edi_3 + 0x5c)
            *arg5 = *(edi_3 + 0x60)
            int32_t* eax_4
            eax_4.b = 1
            return eax_4

arg1.b = 0
return arg1
