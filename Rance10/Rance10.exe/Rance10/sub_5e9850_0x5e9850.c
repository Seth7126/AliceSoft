// 函数: sub_5e9850
// 地址: 0x5e9850
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 s>= 0)
    void* edx = data_7fd4cc
    
    if (arg1 s< (*(edx + 0x58) - *(edx + 0x54)) s>> 3)
        int32_t* edi_1 = *(edx + 0x54) + (arg1 << 3)
        __Smtx_lock_shared(&edi_1[1])
        void* edi_2 = *edi_1
        __Smtx_unlock_shared(&edi_1[1])
        
        if (edi_2 != 0)
            int32_t var_8 = arg2
            
            if (arg2 u<= 2)
                void** var_4
                sub_42eb70(edi_2 + 0x148, &var_4, &var_8)
                void** eax_5 = var_4
                
                if (eax_5 != *(edi_2 + 0x148))
                    return eax_5[5]

return 0
