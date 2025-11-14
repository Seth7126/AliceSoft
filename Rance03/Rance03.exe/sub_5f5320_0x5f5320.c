// 函数: sub_5f5320
// 地址: 0x5f5320
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x18) == 0)
    int32_t result
    result.b = 0
    return result

char eax_2 = (*(**(arg1 + 0x1c) + 8))()
int32_t* ecx_1 = *(arg1 + 0x1c)

if (eax_2 != 0)
    if (ecx_1 != 0)
        (**ecx_1)(1)
        *(arg1 + 0x1c) = 0
    
    *(arg1 + 0x18) = 0
    return 1

if (ecx_1 != 0)
    (**ecx_1)(1)

*(arg1 + 0x1c) = 0
*(arg1 + 0x18) = 0
return 0
