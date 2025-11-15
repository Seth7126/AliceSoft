// 函数: sub_5b65d0
// 地址: 0x5b65d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = *(arg1 + 0x10)

if (*eax == 0)
    int32_t result = eax[3]
    
    if (result s<= 0)
        return result
    
    int32_t var_c
    sub_5b69e0(&var_c, result)
    int32_t ecx_1 = var_c
    **(arg1 + 0x10) = ecx_1
    *(*(arg1 + 0x10) + 4) = ecx_1
    *(*(arg1 + 0x10) + 8) = ecx_1
    int32_t var_8
    *(*(arg1 + 0x10) + 0xc) = var_8
    eax = *(arg1 + 0x10)

return eax[3]
