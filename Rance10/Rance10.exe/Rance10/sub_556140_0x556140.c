// 函数: sub_556140
// 地址: 0x556140
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = arg2

if (*(arg1 + 0x70) != 0 && (*(**(arg1 + (esi << 2) + 0x7c) + 0x20))() == 0)
    if (esi != 3)
        esi = 1
    else
        esi = 2
        
        if ((*(**(arg1 + 0x84) + 0x20))() == 0)
            esi = 1

if (*(arg1 + 0x6c) != esi)
    (*(**(arg1 + (esi << 2) + 0x7c) + 0x3c))()
    *(arg1 + 0x6c) = esi
