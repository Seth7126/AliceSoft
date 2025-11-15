// 函数: sub_49a1a0
// 地址: 0x49a1a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1

if (arg3 s>= 0)
    int32_t eax_1
    int32_t edx_3
    edx_3:eax_1 = muls.dp.d(0x2aaaaaab, *(arg1 + 8) - *(arg1 + 4))
    int32_t edx_4 = edx_3 s>> 3
    
    if (arg3 s< (edx_4 u>> 0x1f) + edx_4)
        int32_t* ecx_2 = *(*(arg1 + 4) + arg3 * 0x30)
        
        if (ecx_2 != 0)
            sub_403360(arg2, (*(*ecx_2 + 0x18))())
            return arg2

*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
return arg2
