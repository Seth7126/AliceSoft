// 函数: sub_5d9ef0
// 地址: 0x5d9ef0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x4bda12f7, arg1[1] - *arg1)
int32_t edx_3 = edx_2 s>> 6
int32_t ebx_2 = (edx_3 u>> 0x1f) + edx_3
int32_t result

if (ebx_2 != (arg2[1] - *arg2) s/ 0x1c)
    result.b = 0
    return result

int32_t i = 0

if (ebx_2 s> 0)
    int32_t ebx_3 = 0
    int32_t ebp_1 = 0
    int32_t edx_9
    
    do
        ebp_1 += 0x1c
        int32_t ecx_2 = *arg1
        ebx_3 += 0xd8
        i += 1
        int32_t edx_7 = *arg2
        *(ecx_2 + ebx_3 - 0xd0) = *(edx_7 + ebp_1 - 0x1c)
        *(ecx_2 + ebx_3 - 0xc0) = *(edx_7 + ebp_1 - 0xc)
        *(ecx_2 + ebx_3 - 0xb8) = *(edx_7 + ebp_1 - 4)
        int32_t eax_7
        int32_t edx_8
        edx_8:eax_7 = muls.dp.d(0x4bda12f7, arg1[1] - *arg1)
        edx_9 = edx_8 s>> 6
    while (i s< (edx_9 u>> 0x1f) + edx_9)

arg1[0x10].b = 1
result.b = 1
return result
