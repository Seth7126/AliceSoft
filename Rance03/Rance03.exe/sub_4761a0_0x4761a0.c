// 函数: sub_4761a0
// 地址: 0x4761a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** esi = nullptr

if (arg1[0x26] != 0)
    EnterCriticalSection(arg1[0x2b] + 4)
    int32_t var_10_2 = arg2
    struct kiwi::CMultiChannelSet::VTable** eax_3 = sub_46ea30(&arg1[0x25])
    
    if (eax_3 != 0)
        esi = sub_46ff10(eax_3, arg3, &eax_3[4])
    
    LeaveCriticalSection(arg1[0x2b] + 4)

char result = sub_476290(arg1, esi, arg3)

if (result != 0)
    return (*(*esi[1] + 0x10))()

return result
