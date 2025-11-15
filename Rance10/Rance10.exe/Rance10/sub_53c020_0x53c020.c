// 函数: sub_53c020
// 地址: 0x53c020
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = sub_4f48a0(data_7fcba4 + 0x124, arg3)

if (result != 0
        && (*(result + 0xf4) != arg2 || *(result + 0xf8) != arg4 || *(result + 0xfc) != arg5))
    *(result + 0xf4) = arg2
    *(result + 0xf8) = arg4
    *(result + 0xfc) = arg5
    *(result + 0x1ec) = 1

return result
