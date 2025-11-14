// 函数: sub_4f7050
// 地址: 0x4f7050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = sub_4a8ac0(data_75d4fc + 0x174, arg3)

if (result != 0 && (*(result + 0x4c) != arg2 || *(result + 0x50) != arg4 || *(result + 0x54) != arg5
        || *(result + 0x58) != arg6))
    *(result + 0x58) = arg6
    int32_t* ecx_3 = *(result + 0x5c)
    *(result + 0x4c) = arg2
    *(result + 0x50) = arg4
    *(result + 0x54) = arg5
    
    if (ecx_3 != 0)
        jump(**ecx_3)

return result
