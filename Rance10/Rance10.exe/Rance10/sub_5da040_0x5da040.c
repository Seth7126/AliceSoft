// 函数: sub_5da040
// 地址: 0x5da040
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = 0
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x4bda12f7, arg1[1] - *arg1)
int32_t edx_3 = edx_2 s>> 6
int32_t result = (edx_3 u>> 0x1f) + edx_3

if (result s> 0)
    int32_t esi_1 = 0
    
    do
        int32_t ecx = *arg1
        esi_1 += 0xd8
        ebx += 1
        int32_t xmm0_1 = *(esi_1 + ecx - 0x64)
        *(esi_1 + ecx - 0xc) = _mm_unpacklo_ps(*(esi_1 + ecx - 0x6c), *(esi_1 + ecx - 0x68))
        *(esi_1 + ecx - 4) = xmm0_1
        int32_t eax_4
        int32_t edx_4
        edx_4:eax_4 = muls.dp.d(0x4bda12f7, arg1[1] - *arg1)
        int32_t edx_5 = edx_4 s>> 6
        result = (edx_5 u>> 0x1f) + edx_5
    while (ebx s< result)

return result
