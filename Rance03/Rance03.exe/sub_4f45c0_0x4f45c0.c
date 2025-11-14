// 函数: sub_4f45c0
// 地址: 0x4f45c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = sub_4a8880(data_75d4fc + 0x174, arg3)
void* result_1 = result

if (result_1 != 0)
    result = arg4
    
    if (*(result_1 + 0xe8) != result)
        int32_t* ecx_2 = *(result_1 + 0x1fc)
        *(result_1 + 0xe8) = result
        
        if (ecx_2 != 0)
            result = (**ecx_2)()
    
    if (*(result_1 + 0xec) != arg2)
        int32_t* ecx_3 = *(result_1 + 0x1fc)
        *(result_1 + 0xec) = arg2
        
        if (ecx_3 != 0)
            jump(**ecx_3)

return result
