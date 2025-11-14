// 函数: sub_42a310
// 地址: 0x42a310
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x110) = *(arg1 + 0x160) * 2

if (sub_697f40(arg1 + 0x108) != 0)
    int32_t eax_4 = *(arg1 + 0x160)
    *(arg1 + 0x158) = 0x2bc
    *(arg1 + 0x13c) = eax_4 * 2
    
    if (sub_697f40(arg1 + 0x134) != 0)
        uint32_t uIDEvent = *(arg1 + 0x198)
        
        if (uIDEvent != 0)
            KillTimer(*(arg1 + 0x19c), uIDEvent)
            *(arg1 + 0x198) = 0
        
        *(arg1 + 0x19c) = arg2
        *(arg1 + 0x198) = SetTimer(arg2, 1, 0x64, nullptr)
        return 0

return 0xffffffff
