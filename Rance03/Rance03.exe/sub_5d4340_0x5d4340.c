// 函数: sub_5d4340
// 地址: 0x5d4340
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t eax

if (*(arg1 + 0x48) == 0)
    if (arg2 != 0)
        eax = *(arg3 + ((arg2 - 1) << 2))
    
    if (arg2 == 0 || eax s<= 0)
        *(arg1 + 0x38) = arg2 - 1
        eax.b = 1
        *(arg1 + 0xc) = 0
        return eax
    
    *(arg1 + 0xc) = 0
    
    if (sub_64aeb0(arg1 + 4, eax << 2).b != 0)
        *(arg1 + 0x38) = arg2 - 1
        int32_t ecx_1 = *(arg3 + ((arg2 - 1) << 2))
        *(arg1 + 0x44) = arg2
        
        if (arg2 != 1)
            int32_t var_14_1 = 0
            
            if (ecx_1 s> 0)
                int32_t edi_4
                
                do
                    int32_t edi_2 = *(arg1 + 0x1c)
                    int32_t eax_9 = sub_5d5dc0(edi_2)
                    *(*(edi_2 + 8) + (eax_9 << 2)) = sub_5d5980(edi_2 + 0x1c)
                    
                    if (eax_9 s< 0)
                        goto label_5d43c8
                    
                    void* ecx_6 = *(arg1 + 0x1c)
                    
                    if (eax_9 u>= (*(ecx_6 + 0xc) - *(ecx_6 + 8)) s>> 2)
                        goto label_5d43c8
                    
                    void* esi_4 = *(*(ecx_6 + 8) + (eax_9 << 2))
                    
                    if (esi_4 == 0)
                        goto label_5d43c8
                    
                    *(esi_4 + 0x3c) = *(arg1 + 0x3c)
                    *(esi_4 + 0x40) = *(arg1 + 0x40)
                    
                    if (sub_5d34a0(arg1, var_14_1, eax_9).b == 0)
                        goto label_5d43c8
                    
                    if (sub_5d4340(arg2 - 1, arg3, arg4).b == 0)
                        goto label_5d43c8
                    
                    edi_4 = var_14_1 + 1
                    var_14_1 = edi_4
                while (edi_4 s< ecx_1)
            
            goto label_5d44de
        
        int32_t eax_4 = *(arg1 + 0x3c) - 0x10
        
        if (eax_4 u> 9)
        label_5d43f2:
            
            if (*(arg1 + 0xc) != 0)
                _memset(*(arg1 + 8), 0, *(arg1 + 0xc))
                *(arg1 + 0x48) = 1
                char* eax_8
                eax_8.b = 1
                return eax_8
            
            _memset(nullptr, 0, *(arg1 + 0xc))
            *(arg1 + 0x48) = 1
            char* eax_6
            eax_6.b = 1
            return eax_6
        
        switch (eax_4)
            case 0, 8
                if (sub_5d4520(arg1, ecx_1).b != 0)
                label_5d44de:
                    *(arg1 + 0x48) = 1
                    eax.b = 1
                    return eax
            case 1, 9
                eax = sub_5d4690(arg1, ecx_1, *(arg1 + 0x40), arg4)
                
                if (eax.b == 0)
                    return eax
                
                goto label_5d44de
            case 2, 3, 4, 5, 6, 7
                goto label_5d43f2

label_5d43c8:
eax.b = 0
return eax
