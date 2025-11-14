// 函数: sub_49c150
// 地址: 0x49c150
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 == 1)
    int32_t* eax_1 = *(arg1 + 0x6c)
    int32_t edx_1 = *(arg1 + 0x70)
    
    if (eax_1 != edx_1)
        while (*eax_1 == 0xffffffff)
            eax_1 = &eax_1[1]
            
            if (eax_1 == edx_1)
                return sub_485b70(arg1 + 4, arg2, 0)
        
        (*(*sub_4a4020(*(arg1 + 0x88)) + 0x38))(3)
        (*(*sub_4a4020(*(arg1 + 0x8c)) + 0x38))(3)
        *(arg1 + 0x90) = 1

return sub_485b70(arg1 + 4, arg2, 0)
