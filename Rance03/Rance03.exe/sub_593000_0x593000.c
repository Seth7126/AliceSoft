// 函数: sub_593000
// 地址: 0x593000
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0xc)

if (ecx != 0 && (*(*ecx + 0x10))() != 0 && *(arg1 + 0x288) == 0)
    int32_t* ecx_1 = *(arg1 + 0xc)
    
    if (ecx_1 != 0 && (*(*ecx_1 + 0x34))() != 0)
        int32_t* ecx_2 = *(arg1 + 4)
        *(arg1 + 0x288) = 1
        int32_t* var_8_1 = ecx_2
        
        if ((*(*ecx_2 + 0x64))(0xffffffff, 0x3f800000) != 0 && (*(**(arg1 + 4) + 0xc4))(1) != 0)
            return (*(**(arg1 + 4) + 0xc8))(1) != 0

return 0
