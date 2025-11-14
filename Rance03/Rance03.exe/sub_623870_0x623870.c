// 函数: sub_623870
// 地址: 0x623870
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 != 0)
    int32_t* edx_1 = *(arg1 + 0x1c)
    
    if (edx_1 != 0)
        edx_1[7] = 0
        *(arg1 + 0x14) = 0
        *(arg1 + 8) = 0
        *(arg1 + 0x18) = 0
        int32_t eax = edx_1[2]
        
        if (eax != 0)
            *(arg1 + 0x30) = eax & 1
        
        *edx_1 = 0
        edx_1[0x1b] = &edx_1[0x14c]
        edx_1[0x14] = &edx_1[0x14c]
        edx_1[0x13] = &edx_1[0x14c]
        edx_1[1] = 0
        edx_1[3] = 0
        edx_1[5] = 0x8000
        edx_1[8] = 0
        edx_1[0xe] = 0
        edx_1[0xf] = 0
        edx_1[0x6f0] = 1
        edx_1[0x6f1] = 0xffffffff
        return 0

return 0xfffffffe
