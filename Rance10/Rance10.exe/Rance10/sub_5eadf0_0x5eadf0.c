// 函数: sub_5eadf0
// 地址: 0x5eadf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 s>= 0)
    void* esi_1 = data_7fd4cc
    
    if (arg1 s< (*(esi_1 + 0x58) - *(esi_1 + 0x54)) s>> 3)
        int32_t* edi_1 = *(esi_1 + 0x54) + (arg1 << 3)
        __Smtx_lock_shared(&edi_1[1])
        void* edi_2 = *edi_1
        __Smtx_unlock_shared(&edi_1[1])
        
        if (edi_2 != 0)
            sub_5c50a0(edi_2 + 0x10, arg2)
            void* eax_4
            eax_4.b = 1
            return eax_4

int32_t eax
eax.b = 0
return eax
