// 函数: sub_4c5220
// 地址: 0x4c5220
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x51eb851f, *(arg1 + 8) - *(arg1 + 4))
int32_t edx_3 = edx_2 s>> 6
int32_t ebp_2 = (edx_3 u>> 0x1f) + edx_3
int32_t eax_1
int32_t edx_4
edx_4:eax_1 = muls.dp.d(0x51eb851f, *(arg2 + 8) - *(arg2 + 4))
int32_t edx_5 = edx_4 s>> 6
int32_t result

if (ebp_2 != (edx_5 u>> 0x1f) + edx_5)
    result.b = 0
    return result

int32_t edi = 0

if (ebp_2 s> 0)
    void* esi_1 = *(arg1 + 4)
    void* ebx_2 = *(arg2 + 4) - esi_1
    
    do
        if (sub_4c31d0(esi_1, ebx_2 + esi_1).b == 0)
            result.b = 0
            return result
        
        edi += 1
        esi_1 += 0xc8
    while (edi s< ebp_2)

result.b = 1
return result
