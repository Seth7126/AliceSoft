// 函数: sub_4f67c0
// 地址: 0x4f67c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx
ebx.b = arg2
void* result = sub_4a8a60(data_75d4fc + 0x174, arg1)

if (result != 0 && *(result + 0x140) != ebx.b)
    int32_t* ecx_2 = *(result + 0x200)
    *(result + 0x140) = ebx.b
    
    if (ecx_2 != 0)
        jump(**ecx_2)

return result
