// 函数: sub_4f44c0
// 地址: 0x4f44c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = sub_4a8820(data_75d4fc + 0x174, arg1)

if (result != 0 && *(result + 0x250) != arg2)
    int32_t* ecx_2 = *(result + 0x260)
    *(result + 0x250) = arg2
    
    if (ecx_2 != 0)
        jump(**ecx_2)

return result
