// 函数: sub_4f65d0
// 地址: 0x4f65d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg3
void* result = sub_4a8a60(data_75d4fc + 0x174, arg3)

if (result != 0 && (*(result + 0x104) != arg2 || *(result + 0x108) != arg4))
    *(result + 0x108) = arg4
    int32_t* ecx_3 = *(result + 0x200)
    *(result + 0x104) = arg2
    
    if (ecx_3 != 0)
        return (**ecx_3)()

return result
