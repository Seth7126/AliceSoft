// 函数: sub_634050
// 地址: 0x634050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

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
    sub_629380(eax_8, arg4, eax, arg5, eax_8, zx.d(arg7), zx.d(arg8), zx.d(arg9), zx.d(arg10))
    char eax_9 = *(arg2 + 0x19)
    
    if (eax_9 == 3 || (eax_9 & 2) == 0)
        *(arg2 + 0x1d) = 1
    else
        *(arg2 + 0x1d) = 3
    
    if ((eax_9 & 4) != 0)
        *(arg2 + 0x1d) += 1
    
    eax_9 = muls.dp.b(arg2[6].b, *(arg2 + 0x1d))
    *(arg2 + 0x1e) = eax_9
    uint32_t eax_10 = zx.d(eax_9)
    
    if (eax_9 u>= 8)
        int32_t eax_12 = (eax_10 u>> 3) * arg4
        arg2[3] = eax_12
        return eax_12
    
    eax = (eax_10 * arg4 + 7) u>> 3
    arg2[3] = eax

return eax
