// 函数: sub_4f5d60
// 地址: 0x4f5d60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = sub_4a89a0(data_75d4fc + 0x174, arg1)
void* result_1 = result

if (result_1 != 0)
    sub_4107c0(*(result_1 + 0x160), *(result_1 + 0x164))
    result = *(result_1 + 0x160)
    *(result_1 + 0x164) = result
    int32_t* ecx_2 = *(result_1 + 0x174)
    
    if (ecx_2 != 0)
        jump(**ecx_2)

return result
