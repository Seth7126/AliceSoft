// 函数: sub_6b19b0
// 地址: 0x6b19b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_4_1 = arg3
uint32_t eax = arg3

if (eax != 0 && arg2 != 0)
    arg2[6].b = arg6
    *(arg2 + 0x1b) = arg10
    uint32_t eax_8 = zx.d(arg6)
    *(arg2 + 0x1a) = arg9
    arg2[7].b = arg8
    *arg2 = arg4
    arg2[1] = arg5
    *(arg2 + 0x19) = arg7
    sub_6a6240(eax_8, arg4, eax, arg5, eax_8, zx.d(arg7), zx.d(arg8), zx.d(arg9), zx.d(arg10))
    char eax_9 = *(arg2 + 0x19)
    
    if (eax_9 == 3 || (eax_9 & 2) == 0)
        *(arg2 + 0x1d) = 1
    else
        *(arg2 + 0x1d) = 3
    
    if ((eax_9 & 4) != 0)
        *(arg2 + 0x1d) += 1
    
    char ecx_3 = arg2[6].b * *(arg2 + 0x1d)
    *(arg2 + 0x1e) = ecx_3
    uint32_t eax_11 = zx.d(ecx_3)
    
    if (ecx_3 u>= 8)
        int32_t eax_13 = (eax_11 u>> 3) * arg4
        arg2[3] = eax_13
        return eax_13
    
    eax = (eax_11 * arg4 + 7) u>> 3
    arg2[3] = eax

return eax
