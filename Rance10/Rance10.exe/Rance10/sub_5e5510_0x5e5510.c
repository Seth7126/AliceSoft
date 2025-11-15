// 函数: sub_5e5510
// 地址: 0x5e5510
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 s>= 0)
    void* esi_1 = data_7fd4cc
    
    if (arg3 s< (*(esi_1 + 0x58) - *(esi_1 + 0x54)) s>> 3)
        int32_t* edi_1 = *(esi_1 + 0x54) + (arg3 << 3)
        __Smtx_lock_shared(&edi_1[1])
        void* edi_2 = *edi_1
        __Smtx_unlock_shared(&edi_1[1])
        
        if (edi_2 != 0)
            return sub_5c4dc0(edi_2 + 0x10, arg2, arg4)

arg1.b = 0
return arg1
