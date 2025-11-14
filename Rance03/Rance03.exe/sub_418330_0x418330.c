// 函数: sub_418330
// 地址: 0x418330
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = *(arg1 + 8)

while (*(eax + 0xd) == 0)
    arg1 = eax
    eax = *(arg1 + 8)

return arg1
