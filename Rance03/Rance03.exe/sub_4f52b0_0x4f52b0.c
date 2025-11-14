// 函数: sub_4f52b0
// 地址: 0x4f52b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = sub_4a8940(data_75d4fc + 0x174, arg3)

if (result != 0
        && (*(result + 0x164) != arg2 || *(result + 0x168) != arg4 || *(result + 0x16c) != arg5))
    *(result + 0x16c) = arg5
    int32_t* ecx_3 = *(result + 0x1a8)
    *(result + 0x164) = arg2
    *(result + 0x168) = arg4
    
    if (ecx_3 != 0)
        jump(**ecx_3)

return result
