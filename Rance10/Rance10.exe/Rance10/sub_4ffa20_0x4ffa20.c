// 函数: sub_4ffa20
// 地址: 0x4ffa20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 0xb4) - *(arg1 + 0xb0))
int32_t edx_3 = edx_2 s>> 2
int32_t result = (edx_3 u>> 0x1f) + edx_3

if (result s> arg2 && arg2 s>= 0)
    char* ecx_2 = *(arg1 + 0xb0) + arg2 * 0x18
    result = arg3
    
    if (ecx_2 != result)
        result = sub_403590(ecx_2, result, 0, 0xffffffff)
    
    *(arg1 + 0xc4) = 1

return result
