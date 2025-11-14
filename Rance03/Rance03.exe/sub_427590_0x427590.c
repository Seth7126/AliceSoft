// 函数: sub_427590
// 地址: 0x427590
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i = 0

if (((*(arg1 + 0x8c) - *(arg1 + 0x88)) & 0xfffffffc) s> 0)
    do
        DestroyWindow(*(*(arg1 + 0x88) + (i << 2)))
        i += 1
    while (i s< (*(arg1 + 0x8c) - *(arg1 + 0x88)) s>> 2)

DestroyWindow(*(arg1 + 0x5c))
return 0
