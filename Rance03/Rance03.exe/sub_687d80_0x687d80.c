// 函数: sub_687d80
// 地址: 0x687d80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = *(arg1 + 0xc8)

if (eax != 0)
    SendMessageA(*(eax + 8), 0x20a, arg2, arg3)

void* eax_1 = *(arg1 + 0xcc)

if (eax_1 != 0)
    SendMessageA(*(eax_1 + 8), 0x20a, arg2, arg3)

return 0
