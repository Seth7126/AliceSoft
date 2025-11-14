// 函数: sub_4f3fa0
// 地址: 0x4f3fa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = sub_4a87c0(data_75d4fc + 0x174, arg1)

if (result != 0 && *(result + 0x1ec) != arg2)
    int32_t* ecx_2 = *(result + 0x200)
    *(result + 0x1ec) = arg2
    
    if (ecx_2 != 0)
        jump(**ecx_2)

return result
