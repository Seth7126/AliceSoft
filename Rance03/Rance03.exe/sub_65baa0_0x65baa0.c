// 函数: sub_65baa0
// 地址: 0x65baa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax = *(arg1 + 0x10)

if (*eax == 0)
    int32_t result = eax[3]
    
    if (result s<= 0)
        return result
    
    int32_t var_c
    sub_65dbb0(&var_c, result)
    int32_t ecx_1 = var_c
    **(arg1 + 0x10) = ecx_1
    *(*(arg1 + 0x10) + 4) = ecx_1
    *(*(arg1 + 0x10) + 8) = ecx_1
    int32_t var_8
    *(*(arg1 + 0x10) + 0xc) = var_8
    eax = *(arg1 + 0x10)

return eax[3]
