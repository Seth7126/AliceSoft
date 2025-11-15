// 函数: sub_5e97d0
// 地址: 0x5e97d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 s>= 0)
    void* edx = data_7fd4cc
    
    if (arg3 s< (*(edx + 0x58) - *(edx + 0x54)) s>> 3)
        int32_t* edi_1 = *(edx + 0x54) + (arg3 << 3)
        __Smtx_lock_shared(&edi_1[1])
        void* edi_2 = *edi_1
        __Smtx_unlock_shared(&edi_1[1])
        
        if (edi_2 != 0)
            int32_t var_c = arg2
            
            if (arg2 u<= 2)
                void* var_8
                sub_42ebc0(edi_2 + 0x148, &var_8, &var_c)
                *(var_8 + 0x14) = arg4
                void* eax_3
                eax_3.b = 1
                return eax_3

arg1.b = 0
return arg1
