// 函数: sub_4f79d0
// 地址: 0x4f79d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx
ebx.b = arg2
void* result = sub_4a8b80(data_75d4fc + 0x174, arg3)

if (result != 0)
    result = sub_510260(*(result + 0x34), arg4)
    void* result_1 = result
    
    if (*(result_1 + 0xc8) != ebx.b)
        *(result_1 + 0xc8) = ebx.b
        result = sub_519640(result_1)
        *(result_1 + 0xd8) = 1

return result
