// 函数: sub_4e0ca0
// 地址: 0x4e0ca0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = sub_485c10(arg1 + 4, arg3, 0)

if (arg3 == 1)
    result = *(arg1 + 0x94)
    void* ecx_1
    
    if (result == 0)
        ecx_1 = nullptr
    else
        ecx_1 = result + 8
    
    int32_t ecx_3
    
    if (arg2 != ecx_1)
        int32_t ecx_2 = *(arg1 + 0x88)
        
        if (ecx_2 == 0)
            ecx_3 = 0
        else
            ecx_3 = ecx_2 + 8
    
    if (arg2 == ecx_1 || arg2 == ecx_3)
        *(result + 0x79) = 0

return result
