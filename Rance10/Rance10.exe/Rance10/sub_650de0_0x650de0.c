// 函数: sub_650de0
// 地址: 0x650de0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg1[0x62]
char* result = sub_64fd30(arg1, 0xd8)
*(esi + 0x1c) = 0

if (arg1[0x3a].b != 0)
    result = sub_6509b0(arg1)

if (arg1[0x3c].b == 0)
    return result

return sub_650be0(arg1) __tailcall
