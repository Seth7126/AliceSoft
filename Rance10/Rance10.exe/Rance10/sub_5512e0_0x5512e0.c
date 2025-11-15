// 函数: sub_5512e0
// 地址: 0x5512e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax_3 = *arg1

if (eax_3 != 0)
    if (*(arg1 + 0x16) != 0)
        return arg1[0xc]
    
    int32_t* ecx = *(eax_3 + 0x118)
    
    if (ecx != 0)
        jump(*(*ecx + 0x14))

return 0
