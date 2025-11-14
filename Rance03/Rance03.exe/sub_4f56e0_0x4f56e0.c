// 函数: sub_4f56e0
// 地址: 0x4f56e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
int32_t ebx
ebx.b = arg2
void* result = sub_4a8940(data_75d4fc + 0x174, arg1)
void* result_1 = result

if (result_1 != 0)
    if (ebx.b == 0)
        result = sub_61cde0()
    else
        result = sub_61cd80()
    
    if (*(result_1 + 0x1a4) != ebx.b)
        *(result_1 + 0x1a4) = ebx.b

return result
