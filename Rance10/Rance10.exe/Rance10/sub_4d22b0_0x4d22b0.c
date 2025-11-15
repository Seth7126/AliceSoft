// 函数: sub_4d22b0
// 地址: 0x4d22b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t ebx_3 = (*(arg1 + 0x3c) - *(arg1 + 0x38)) s/ 0xcc - arg2
int32_t ebx_4 = ebx_3 - 1

if (ebx_3 - 1 s< 0)
    ebx_4 = 0

int128_t* result = ebx_4 * 0xcc + *(arg1 + 0x38)

if (*(arg1 + 0x104) != *(arg1 + 0x108))
    int32_t ecx_2 = *(arg1 + 0x3c) - *(arg1 + 0x38)
    int32_t eax_1
    int32_t edx_3
    edx_3:eax_1 = muls.dp.d(0xa0a0a0a1, ecx_2)
    int32_t edx_5 = (edx_3 + ecx_2) s>> 7
    
    if ((edx_5 u>> 0x1f) - 1 + edx_5 != ebx_4)
        sub_4aa9e0(result, arg1 + 0x44, *(arg1 + 0x10))

return result
