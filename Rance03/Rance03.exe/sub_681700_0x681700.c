// 函数: sub_681700
// 地址: 0x681700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0xe0) == 0 || *(arg1 + 0xdc) == 0)
    return 

sub_670d10(arg1 + 0x5c, 0, *(arg1 + 0x50), *(arg1 + 0x40), *(arg1 + 0x44))
int32_t eax_2 = *(arg1 + 0x58)

if (eax_2 == 0)
    sub_663550(*(arg1 + 0xdc))
else if (eax_2 == 1)
    sub_66ff00(*(arg1 + 0xe0))

void* eax_3 = *(*(arg1 + 0xdc) + 0x5c)

if (eax_3 != 0 && *(eax_3 + 0x42c) != 0)
    void* ecx_4 = eax_3
    
    if (ecx_4 != 0)
        ecx_4 = *(ecx_4 + 0x42c)
    
    void* eax_5 = *(*(arg1 + 0xe0) + 0x70)
    
    if (eax_5 != 0)
        sub_668350(eax_5, ecx_4)

InvalidateRect(*(arg1 + 8), nullptr, 0)
UpdateWindow(*(arg1 + 8))
