// 函数: sub_5e5700
// 地址: 0x5e5700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1

if ((**(arg1 + 0x1c8))() != 0)
    *(arg1 + 0x1c4) = 0
    *(arg1 + 0xf9) = 1
    sub_5e9a10(arg1 + 0xa0)
    int32_t ebx
    
    if (*(arg1 + 0xe4) != 0)
        ebx.b = (*(**(arg1 + 0xe4) + 0x10))()
        
        if (ebx.b != 0 && *(arg1 + 0xe4) != 0)
            (*(**(arg1 + 0xe4) + 0x1c))()
    else
        ebx.b = 0
    
    if (sub_5e55c0(arg1) == 0)
        return 0
    
    *(arg1 + 0x1d0) = 0
    sub_5e57d0(arg1)
    sub_5e5300(arg1, 0)
    
    if (ebx.b != 0 && *(arg1 + 0xe4) != 0 && (*(**(arg1 + 0xe4) + 0x20))() == 0)
        return 0
    
    *(arg1 + 0xf9) = 0
    *(arg1 + 0x1c4) = 1
    *(arg1 + 0x69) = 0

return 1
