// 函数: sub_64f750
// 地址: 0x64f750
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x98) = *(arg1 + 0xe8) * 2

if (sub_697f40(arg1 + 0x90) != 0)
    int32_t eax_4 = *(arg1 + 0xe8)
    *(arg1 + 0xe0) = 0x2bc
    *(arg1 + 0xc4) = eax_4 * 2
    
    if (sub_697f40(arg1 + 0xbc) != 0)
        uint32_t uIDEvent = *(arg1 + 0x120)
        
        if (uIDEvent != 0)
            KillTimer(*(arg1 + 0x124), uIDEvent)
            *(arg1 + 0x120) = 0
        
        *(arg1 + 0x124) = arg2
        *(arg1 + 0x120) = SetTimer(arg2, 1, 0x64, nullptr)
        return 0

return 0xffffffff
