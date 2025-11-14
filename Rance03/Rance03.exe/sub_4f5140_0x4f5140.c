// 函数: sub_4f5140
// 地址: 0x4f5140
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
char* result = sub_4a8940(data_75d4fc + 0x174, arg1)
char* result_1 = result

if (result_1 != 0 && *(result_1 + 0x154) != arg2)
    *(result_1 + 0x154) = arg2
    result = sub_4c2150(&result_1[0x13c], arg2)
    int32_t* ecx_2 = *(result_1 + 0x1a8)
    
    if (ecx_2 != 0)
        return (**ecx_2)()

return result
