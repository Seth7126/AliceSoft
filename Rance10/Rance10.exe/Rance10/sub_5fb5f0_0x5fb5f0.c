// 函数: sub_5fb5f0
// 地址: 0x5fb5f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 + 0x24)

if (result != *(arg1 + 0x28))
    int32_t var_10
    int32_t var_c
    
    if ((data_7fcbe8 | data_7fcbec) == 0)
        QueryPerformanceFrequency(&var_10)
        data_7fcbe8 = var_10
        data_7fcbec = var_c
    
    QueryPerformanceCounter(&var_10)
    void* eax_4 = *(arg1 + 0x28)
    int32_t edx_1 = var_10
    int32_t edx_2 = edx_1 - *(eax_4 - 8)
    int32_t ecx_1 = sbb.d(var_c, *(eax_4 - 4), edx_1 u< *(eax_4 - 8))
    int32_t temp2_1 = *(arg1 + 0x30)
    *(arg1 + 0x30) += edx_2
    *(arg1 + 0x34) = adc.d(*(arg1 + 0x34), ecx_1, temp2_1 + edx_2 u< temp2_1)
    result = (**(eax_4 - 0x10))(0)
    *(arg1 + 0x28) -= 0x10

return result
