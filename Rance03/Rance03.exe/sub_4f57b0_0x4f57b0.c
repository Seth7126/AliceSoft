// 函数: sub_4f57b0
// 地址: 0x4f57b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = sub_4a89a0(data_75d4fc + 0x174, arg1)

if (result != 0)
    int32_t var_8 = arg2
    int32_t* ecx_2 = &var_8
    int32_t var_4 = 1
    
    if (arg2 s<= 1)
        ecx_2 = &var_4
    
    int32_t ecx_3 = *ecx_2
    
    if (*(result + 0x100) != ecx_3)
        *(result + 0x100) = ecx_3
        int32_t* ecx_4 = *(result + 0x174)
        
        if (ecx_4 != 0)
            jump(**ecx_4)

return result
