// 函数: sub_476040
// 地址: 0x476040
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1

if (*(arg1 + 0xbc) == 0 && sub_476bb0(arg1 + 4) != 0 && *(arg1 + 0x5c) == 0)
    *(arg1 + 0x5c) = arg2
    
    if (arg2 != 0)
        (**arg2)()
    
    *(arg1 + 0x60) = arg3
    void* result = *(arg1 + 0xb8)
    *(arg1 + 0x7c) = arg1 + 0x58
    *(arg1 + 0x98) = arg1 + 0x58
    *(result + 0x14) = arg1 + 0x58
    result.b = 1
    *(arg1 + 0xbc) = 1
    return result

return 0
