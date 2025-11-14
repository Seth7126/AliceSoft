// 函数: sub_4f6ec0
// 地址: 0x4f6ec0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = sub_4a8a60(data_75d4fc + 0x174, arg1)

if (result != 0 && *(result + 0x1fc) != arg2)
    int32_t* ecx_2 = *(result + 0x200)
    *(result + 0x1fc) = arg2
    
    if (ecx_2 != 0)
        jump(**ecx_2)

return result
