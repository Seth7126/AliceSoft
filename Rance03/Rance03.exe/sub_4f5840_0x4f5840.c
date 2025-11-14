// 函数: sub_4f5840
// 地址: 0x4f5840
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg3
void* result = sub_4a89a0(data_75d4fc + 0x174, arg3)

if (result != 0 && (*(result + 0x108) != arg2 || *(result + 0x10c) != arg4))
    *(result + 0x10c) = arg4
    int32_t* ecx_3 = *(result + 0x174)
    *(result + 0x108) = arg2
    
    if (ecx_3 != 0)
        return (**ecx_3)()

return result
