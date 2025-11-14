// 函数: sub_4f6070
// 地址: 0x4f6070
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = sub_4a89a0(data_75d4fc + 0x174, arg1)

if (result != 0 && *(result + 0x170) != arg2)
    int32_t* ecx_2 = *(result + 0x174)
    *(result + 0x170) = arg2
    
    if (ecx_2 != 0)
        jump(**ecx_2)

return result
