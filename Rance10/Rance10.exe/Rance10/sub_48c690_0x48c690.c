// 函数: sub_48c690
// 地址: 0x48c690
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_1 = (*(*arg1 + 0x10))()
int32_t* result_1
int32_t* result_2 = result_1
void* edx = result_2[1]
int32_t arg_c
int32_t esi_1 = arg_c - ((edx - *result_2) s>> 2)

if (eax_1 u< esi_1)
    esi_1 = eax_1

if (esi_1 != 0)
    result_1 = nullptr
    sub_48c850(result_2, &arg_c, edx, esi_1, &result_1)

int32_t* ecx_4 = *result_2
void* result = result_2[1]
result_1 = nullptr
uint32_t edi_3 = (result - ecx_4 + 3) u>> 2

if (ecx_4 u> result)
    edi_3 = 0

if (edi_3 != 0)
    do
        float xmm2_1 = arg1[3]
        float xmm3_1 = *ecx_4
        float xmm1_3 = *(arg2[9] + ((arg2[8] & arg2[5]) << 2)) * xmm2_1
            + *(arg2[4] + ((*arg2 & arg2[3]) << 2)) - xmm2_1 * xmm3_1
        *ecx_4 = xmm1_3
        int32_t eax_4 = *arg2
        int32_t edx_6 = eax_4 & arg2[3]
        *arg2 = eax_4 + 1
        *(arg2[4] + (edx_6 << 2)) = xmm3_1
        int32_t eax_7 = arg2[5]
        int32_t esi_3 = eax_7 & arg2[8]
        arg2[5] = eax_7 + 1
        int32_t eax_9 = *ecx_4
        ecx_4 = &ecx_4[1]
        *(arg2[9] + (esi_3 << 2)) = eax_9
        result = result_1 + 1
        result_1 = result
    while (result != edi_3)

return result
