// 函数: sub_4f6b80
// 地址: 0x4f6b80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = sub_4a8a60(data_75d4fc + 0x174, arg3)

if (result != 0
        && (*(result + 0x178) != arg2 || *(result + 0x17c) != arg4 || *(result + 0x180) != arg5))
    *(result + 0x180) = arg5
    int32_t* ecx_3 = *(result + 0x200)
    *(result + 0x178) = arg2
    *(result + 0x17c) = arg4
    
    if (ecx_3 != 0)
        jump(**ecx_3)

return result
