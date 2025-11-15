// 函数: sub_49f1d0
// 地址: 0x49f1d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
int32_t temp0 = divs.dp.d(sx.q(*(arg2 + 4) * *(arg1 + 0x64)), *(arg1 + 0x60))
*(arg1 + 0x60)
*arg6 += *(arg2 + 8) - temp0
int32_t eax_4 = GetSystemMetrics(SM_CYMAXTRACK)
int32_t* eax_5 = *arg6
int32_t esi = *arg7

if (esi - eax_5 s> eax_4)
    int32_t temp0_1 =
        divs.dp.d(sx.q((eax_5 - esi + eax_4 + temp0) * *(arg1 + 0x60)), *(arg1 + 0x64))
    
    if (arg3 != 0)
        *arg4 += *(arg2 + 4) - temp0_1
        *arg6 = esi - eax_4
        return arg4
    
    eax_5 = arg5
    *eax_5 += temp0_1 - *(arg2 + 4)
    *arg6 = esi - eax_4

return eax_5
