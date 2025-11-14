// 函数: sub_5e6030
// 地址: 0x5e6030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t edi_1 = arg2 u>> 0x10

if (edi_1 s> 0 && (*(arg1 + 0x50) != arg3 || *(arg1 + 0x54) != edi_1))
    *(arg1 + 0x50) = arg3
    *(arg1 + 0x54) = edi_1
    bool cond:0_1 = *(arg1 + 0xe4) == 0
    *(arg1 + 0x104) = arg3
    *(arg1 + 0x108) = edi_1
    
    if (not(cond:0_1))
        (*(**(arg1 + 0xe4) + 0x14))(arg3, edi_1)
    
    if (*(arg1 + 0x3d) != 0)
        *(arg1 + 0x48) = arg3
        *(arg1 + 0x4c) = edi_1
        *(arg1 + 0xfc) = arg3
        *(arg1 + 0x100) = edi_1
    
    if (*(arg1 + 0x1c4) != 0)
    label_5e60ee:
        char eax_10
        
        if (*(arg1 + 0xe4) != 0)
            eax_10 = (*(**(arg1 + 0xe4) + 0x10))()
        
        if (*(arg1 + 0xe4) == 0 || eax_10 == 0)
            sub_5e52b0(arg1)
        else if (*(arg1 + 0xe4) != 0)
            if ((*(**(arg1 + 0xe4) + 0x1c))() == 0)
                sub_64b530(0x6eb5c0)
            
            if (*(arg1 + 0xe4) != 0 && (*(**(arg1 + 0xe4) + 0x20))() == 0)
                sub_64b530(0x6eb580)
    else
        char eax_4
        
        if (*(arg1 + 0x3c) != 0 && *(arg1 + 0xe4) != 0)
            eax_4 = (*(**(arg1 + 0xe4) + 0x10))()
        
        if (*(arg1 + 0x3c) != 0 && *(arg1 + 0xe4) != 0 && eax_4 != 0)
            goto label_5e60ee
        
        if (*(arg1 + 0x3d) != 0 && *(arg1 + 0xe4) != 0 && (*(**(arg1 + 0xe4) + 0x10))() != 0)
            goto label_5e60ee

return 0
