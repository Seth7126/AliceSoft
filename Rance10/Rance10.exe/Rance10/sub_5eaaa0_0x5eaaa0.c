// 函数: sub_5eaaa0
// 地址: 0x5eaaa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4_1 = arg1

if (arg1 s>= 0)
    void* edi_1 = data_7fd4cc
    
    if (arg1 s< (*(edi_1 + 0x58) - *(edi_1 + 0x54)) s>> 3)
        int32_t edi_2 = *(edi_1 + 0x54)
        void* esi_2 = (arg1 << 3) + 4 + edi_2
        __Smtx_lock_shared(esi_2)
        void* edi_3 = *(edi_2 + (arg1 << 3))
        __Smtx_unlock_shared(esi_2)
        
        if (edi_3 != 0 && arg2 u<= 0x28)
            *(*(edi_3 + 0x198) + (arg2 << 2)) = arg3
            int32_t eax_3
            eax_3.b = 1
            return eax_3

int32_t eax
eax.b = 0
return eax
