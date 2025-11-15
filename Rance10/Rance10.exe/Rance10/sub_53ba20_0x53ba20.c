// 函数: sub_53ba20
// 地址: 0x53ba20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = sub_4f4840(data_7fcba4 + 0x124, arg3)

if (result != 0
        && (*(result + 0xb4) != arg2 || *(result + 0xb8) != arg4 || *(result + 0xbc) != arg5))
    *(result + 0xb4) = arg2
    *(result + 0xb8) = arg4
    *(result + 0xbc) = arg5
    *(result + 0x218) = 1

return result
