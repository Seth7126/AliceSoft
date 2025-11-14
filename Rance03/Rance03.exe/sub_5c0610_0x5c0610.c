// 函数: sub_5c0610
// 地址: 0x5c0610
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax

if (arg1[0x495] u> &arg1[0x395])
    int32_t edx_1 = *(arg1[0x495] - 4)
    
    if (edx_1 u< (arg1[0x5e] - arg1[0x5d]) s>> 2)
        eax = *(arg1[0x5d] + (edx_1 << 2))
    else
        eax = nullptr
    
    arg1[0x497] = eax
    
    if (eax == 0)
        int32_t var_4 = edx_1
        sub_5c24e0(eax, edx_1, arg1, arg1, 0x6e61fc)
        int32_t* eax_6
        eax_6.b = 0
        return eax_6
else
    arg1[0x497] = 0

eax.b = 1
return eax
