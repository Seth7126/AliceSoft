// 函数: sub_4f3b10
// 地址: 0x4f3b10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = sub_4a87c0(data_75d4fc + 0x174, arg3)

if (result != 0
        && (*(result + 0x9c) != arg2 || *(result + 0xa0) != arg4 || *(result + 0xa4) != arg5))
    *(result + 0xa4) = arg5
    int32_t* ecx_3 = *(result + 0x200)
    *(result + 0x9c) = arg2
    *(result + 0xa0) = arg4
    
    if (ecx_3 != 0)
        jump(**ecx_3)

return result
