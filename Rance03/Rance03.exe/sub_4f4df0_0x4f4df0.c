// 函数: sub_4f4df0
// 地址: 0x4f4df0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg3
void* result = sub_4a8940(data_75d4fc + 0x174, arg3)

if (result != 0 && (*(result + 0xfc) != arg2 || *(result + 0x100) != arg4))
    *(result + 0x100) = arg4
    int32_t* ecx_3 = *(result + 0x1a8)
    *(result + 0xfc) = arg2
    
    if (ecx_3 != 0)
        return (**ecx_3)()

return result
