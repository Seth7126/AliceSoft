// 函数: sub_4f60e0
// 地址: 0x4f60e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg3
void* result = sub_4a8a00(data_75d4fc + 0x174, arg3)

if (result != 0 && (*(result + 0xe4) != arg2 || *(result + 0xe8) != arg4))
    *(result + 0xe8) = arg4
    int32_t* ecx_3 = *(result + 0x15c)
    *(result + 0xe4) = arg2
    
    if (ecx_3 != 0)
        return (**ecx_3)()

return result
