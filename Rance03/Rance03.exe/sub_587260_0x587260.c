// 函数: sub_587260
// 地址: 0x587260
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (sub_5448e0(arg1 + 8) != 0)
    return 1

void* esi = *(arg1 + 0x214)

if (esi != 0)
    if (sub_547340(esi + 0x130) != 0)
        return 1
    
    if (sub_59c940(esi + 0x518) == 0)
        return 1
    
    if (sub_58c330(*(arg1 + 0x214)) == 0)
        return 1

return 0
