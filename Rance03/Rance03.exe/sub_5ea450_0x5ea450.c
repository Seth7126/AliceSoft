// 函数: sub_5ea450
// 地址: 0x5ea450
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x5c) == 0)
    if (*(arg1 + 0x48) == 0)
        return 1
    
    if ((*(**(arg1 + 0x48) + 0x10))() == 0 || *(arg1 + 0x48) == 0)
        return 1
    
    if ((*(**(arg1 + 0x48) + 0x3c))() == 0)
        return 1
    
    if (sub_5ea1a0(arg1) != 0)
        int32_t* ecx_3 = *(arg1 + 0xc)
        
        if (ecx_3 != 0 && (*(*ecx_3 + 0x7c))(arg2) != 0)
            return 1

return 0
