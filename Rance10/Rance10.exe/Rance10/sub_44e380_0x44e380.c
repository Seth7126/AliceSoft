// 函数: sub_44e380
// 地址: 0x44e380
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = *(arg1 + 8)

while (*(eax + 0xd) == 0)
    arg1 = eax
    eax = *(arg1 + 8)

return arg1
