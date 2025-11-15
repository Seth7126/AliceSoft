// 函数: sub_6b1430
// 地址: 0x6b1430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if ((*(arg1 + 0x78) & 8) == 0)
    int32_t eax
    sub_6b11d0(eax, 0, arg1, 0)
    eax = *(arg1 + 0x78)
    *(arg1 + 0x90) = 0
    
    if ((eax.b & 8) == 0)
        *(arg1 + 0x74) |= 8
        *(arg1 + 0x78) = eax | 8

if (*(arg1 + 0x80) != 0x49444154)
    return 

void* edx = *(arg1 + 0x13c)
*(arg1 + 0x84) = 0
*(arg1 + 0x88) = 0
*(arg1 + 0x80) = 0
return sub_6ace40(arg1, edx) __tailcall
