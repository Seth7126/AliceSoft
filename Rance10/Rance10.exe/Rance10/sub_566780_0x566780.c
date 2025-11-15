// 函数: sub_566780
// 地址: 0x566780
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 s>= 0 && arg2 s< (*(arg1 + 0x58) - *(arg1 + 0x54)) s>> 3)
    int32_t* edi_1 = *(arg1 + 0x54) + (arg2 << 3)
    __Smtx_lock_shared(&edi_1[1])
    void* edi_2 = *edi_1
    __Smtx_unlock_shared(&edi_1[1])
    
    if (edi_2 != 0 && arg3 s>= 0)
        int32_t edx = *(edi_2 + 0x14)
        
        if (arg3 s< (*(edi_2 + 0x18) - edx) s>> 3)
            void* eax_8 = *(edx + (arg3 << 3))
            
            if (eax_8 != 0)
                return *(eax_8 + 0x220)

return 0
