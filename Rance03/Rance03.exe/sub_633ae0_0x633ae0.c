// 函数: sub_633ae0
// 地址: 0x633ae0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((*(arg1 + 0x78) & 8) == 0)
    int32_t eax
    sub_633900(eax, 0, arg1, nullptr)
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
return sub_62fcc0(arg1, edx) __tailcall
