// 函数: sub_4f4fe0
// 地址: 0x4f4fe0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx
ebx.b = arg2
void* result = sub_4a8940(data_75d4fc + 0x174, arg1)

if (result != 0 && *(result + 0x138) != ebx.b)
    int32_t* ecx_2 = *(result + 0x1a8)
    *(result + 0x138) = ebx.b
    
    if (ecx_2 != 0)
        jump(**ecx_2)

return result
