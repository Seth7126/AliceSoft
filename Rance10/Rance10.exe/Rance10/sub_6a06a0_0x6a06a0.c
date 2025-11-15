// 函数: sub_6a06a0
// 地址: 0x6a06a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 != 0 && *(arg1 + 0x20) != 0)
    int32_t eax_1 = *(arg1 + 0x24)
    
    if (eax_1 != 0)
        int32_t* edi_1 = *(arg1 + 0x1c)
        
        if (edi_1 != 0 && *edi_1 == arg1)
            int32_t ecx = edi_1[1]
            
            if (ecx s>= 0x3f34 && ecx s<= 0x3f53)
                int32_t ecx_1 = edi_1[0xe]
                
                if (ecx_1 != 0 && edi_1[0xa] != 0xf)
                    eax_1(*(arg1 + 0x28), ecx_1)
                    edi_1[0xe] = 0
                
                edi_1[3] = 5
                edi_1[0xa] = 0xf
                return sub_6a0650(arg1) __tailcall

return 0xfffffffe
