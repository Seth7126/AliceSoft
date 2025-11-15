// 函数: sub_5e7390
// 地址: 0x5e7390
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result

if (arg1 s>= 0)
    void* ecx = data_7fd4cc
    
    if (arg1 s< (*(ecx + 0x58) - *(ecx + 0x54)) s>> 3)
        int32_t* edi_1 = *(ecx + 0x54) + (arg1 << 3)
        __Smtx_lock_shared(&edi_1[1])
        void* edi_2 = *edi_1
        __Smtx_unlock_shared(&edi_1[1])
        
        if (edi_2 != 0)
            result = sub_5665c0(data_7fd4cc, arg1, arg2)
            
            if (result != 0)
                int32_t esi_2 = *(result + 0x218)
                
                if (esi_2 != 0)
                    int32_t edi_3 = *(edi_2 + 0x198)
                    
                    if (edi_3 != 0)
                        result.b = 1
                        __builtin_memcpy(edi_3, esi_2, 0xa4)
                        return result

result.b = 0
return result
