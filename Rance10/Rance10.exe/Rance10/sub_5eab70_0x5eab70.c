// 函数: sub_5eab70
// 地址: 0x5eab70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result

if (arg1 s>= 0)
    void* edx = data_7fd4cc
    
    if (arg1 s< (*(edx + 0x58) - *(edx + 0x54)) s>> 3)
        int32_t* edi_1 = *(edx + 0x54) + (arg1 << 3)
        __Smtx_lock_shared(&edi_1[1])
        void* edi_2 = *edi_1
        __Smtx_unlock_shared(&edi_1[1])
        
        if (edi_2 != 0)
            if (*(edi_2 + 0x1f4) != arg2)
                sub_586e80(edi_2 + 0x14, arg2)
                void* ecx_1 = *(edi_2 + 0x1d0)
                
                if (ecx_1 != 0)
                    *(ecx_1 + 0x5c4) = arg2
                    sub_58a5a0(ecx_1 + 0x228, arg2)
                
                *(edi_2 + 0x1f4) = arg2
            
            result.b = 1
            return result

result.b = 0
return result
