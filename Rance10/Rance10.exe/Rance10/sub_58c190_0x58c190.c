// 函数: sub_58c190
// 地址: 0x58c190
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char eax = sub_5dd460(arg1 + 0x18)

if (eax != 0)
    int32_t* ecx_1 = *(arg1 + 0x24)
    
    if (ecx_1 != 0)
        eax = sub_5dd410(ecx_1)
    
    if (ecx_1 == 0 || eax != 0)
        int32_t* ecx_2 = *(arg1 + 0x2c)
        
        if (ecx_2 != 0)
            eax = sub_5dd410(ecx_2)
        
        if (ecx_2 == 0 || eax != 0)
            int32_t* esi_1 = *(arg1 + 0x34)
            int32_t edi_1 = *(arg1 + 0x38)
            
            if (esi_1 == edi_1)
                return 1
            
            while (true)
                if (*esi_1 != 0 && sub_58c190() == 0)
                    return 0
                
                esi_1 = &esi_1[1]
                
                if (esi_1 == edi_1)
                    return 1

return 0
