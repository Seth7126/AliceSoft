// 函数: sub_419310
// 地址: 0x419310
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0xa0) = *(arg1 + 0xf0) * 2

if (sub_697f40(arg1 + 0x98) != 0)
    int32_t eax_4 = *(arg1 + 0xf0)
    *(arg1 + 0xe8) = 0x2bc
    *(arg1 + 0xcc) = eax_4 * 2
    
    if (sub_697f40(arg1 + 0xc4) != 0)
        uint32_t uIDEvent = *(arg1 + 0x128)
        
        if (uIDEvent != 0)
            KillTimer(*(arg1 + 0x12c), uIDEvent)
            *(arg1 + 0x128) = 0
        
        *(arg1 + 0x12c) = arg2
        *(arg1 + 0x128) = SetTimer(arg2, 1, 0x64, nullptr)
        return 0

return 0xffffffff
