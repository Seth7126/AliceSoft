// 函数: sub_49f260
// 地址: 0x49f260
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
int32_t temp0 = divs.dp.d(sx.q(*(arg2 + 4) * *(arg1 + 0x64)), *(arg1 + 0x60))
*(arg1 + 0x60)
*arg7 += temp0 - *(arg2 + 8)
int32_t eax_5 = GetSystemMetrics(SM_CYMAXTRACK)
int32_t edx_2 = *arg7
int32_t ebx = *arg6

if (edx_2 - ebx s> eax_5)
    int32_t temp0_1 =
        divs.dp.d(sx.q((ebx - edx_2 + eax_5 + temp0) * *(arg1 + 0x60)), *(arg1 + 0x64))
    
    if (arg3 != 0)
        *arg4 += *(arg2 + 4) - temp0_1
        int32_t eax_14 = ebx + eax_5
        *arg7 = eax_14
        return eax_14
    
    *arg5 += temp0_1 - *(arg2 + 4)
    eax_5 += ebx
    *arg7 = eax_5

return eax_5
