// 函数: sub_439e70
// 地址: 0x439e70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_3

if (arg3 == 0)
label_439e9d:
    void** ecx_3 = *(arg1 + 0x2c) + 8
    
    if (ecx_3[5] u>= 0x10)
        ecx_3 = *ecx_3
    
    eax_3 = sub_5def30(ecx_3)
else
    void** edx_1 = arg2
    
    if (edx_1[5] u>= 0x10)
        edx_1 = *edx_1
    
    int32_t* eax_2 = (*(*arg3 + 0x3c))(edx_1)
    
    if (eax_2 == 0)
        goto label_439e9d
    
    eax_3 = (*(*eax_2 + 4))()

if (eax_3 - 0xa u<= 0x25)
    switch (eax_3 + &jump_table_439eec[2]:2)
        case &lookup_table_439f00
            return 1
        case &lookup_table_439f00[1]
            return 2
        case &lookup_table_439f00[2]
            return 4
        case &lookup_table_439f00[0x25]
            return 3

return 0
