// 函数: sub_4f8ee0
// 地址: 0x4f8ee0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg3
int32_t ebx
ebx.b = arg2
void* result = sub_4a8b80(data_75d4fc + 0x174, arg3)

if (result != 0)
    result = sub_510440(*(result + 0x34), arg4)
    
    if (*(result + 0x2ac) != ebx.b)
        *(result + 0x2ac) = ebx.b
        return sub_50d490(result)

return result
