// 函数: sub_4f6fc0
// 地址: 0x4f6fc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx
ebx.b = arg2
void* result = sub_4a8ac0(data_75d4fc + 0x174, arg1)

if (result != 0 && *(result + 0x44) != ebx.b)
    int32_t* ecx_2 = *(result + 0x5c)
    *(result + 0x44) = ebx.b
    
    if (ecx_2 != 0)
        jump(**ecx_2)

return result
