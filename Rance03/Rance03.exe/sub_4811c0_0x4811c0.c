// 函数: sub_4811c0
// 地址: 0x4811c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 8) - *(arg1 + 4))
int32_t edx_3 = edx_2 s>> 5
int32_t ebx_2 = (edx_3 u>> 0x1f) + edx_3
int32_t eax_2
int32_t edx_4
edx_4:eax_2 = muls.dp.d(0x2aaaaaab, *(arg2 + 8) - *(arg2 + 4))
int32_t edx_5 = edx_4 s>> 5
int32_t result

if (ebx_2 != (edx_5 u>> 0x1f) + edx_5)
    result.b = 0
    return result

int32_t edi = 0

if (ebx_2 s> 0)
    int32_t esi_1 = 0
    
    do
        if (sub_47f1e0(*(arg1 + 4) + esi_1, *(arg2 + 4) + esi_1).b == 0)
            result.b = 0
            return result
        
        edi += 1
        esi_1 += 0xc0
    while (edi s< ebx_2)

result.b = 1
return result
