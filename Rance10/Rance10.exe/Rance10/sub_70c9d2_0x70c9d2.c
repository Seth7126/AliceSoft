// 函数: sub_70c9d2
// 地址: 0x70c9d2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_14 = edi
uint32_t esi = arg1[1]
int32_t edi_1 = *arg1
int32_t result_1 = __alldiv(edi_1, esi, 0x1e13380, 0) + 0x46
int32_t eax_2
int32_t edx
edx:eax_2 = muls.dp.d(result_1 - 0x46, 0x1e13380)
*arg1 = edi_1 - eax_2
arg1[1] = sbb.d(esi, edx, edi_1 u< eax_2)
int32_t eax_4
int32_t edx_1
edx_1:eax_4 = muls.dp.d(__crt_time_elapsed_leap_years<long>(result_1), 0x15180)
int32_t temp1 = *arg1
*arg1 -= eax_4
int32_t eax_5 = *arg1
arg1[1] = sbb.d(arg1[1], edx_1, temp1 u< eax_4)
int32_t ecx_1 = arg1[1]
int32_t result

if (ecx_1 s> 0 || (ecx_1 s>= 0 && eax_5 u>= 0))
    result = result_1
    
    if (__crt_time_is_leap_year<int32_t>(result) != 0)
        *arg2 = 1
else
    *arg1 = eax_5 + 0x1e13380
    result = result_1 - 1
    arg1[1] = adc.d(ecx_1, 0, eax_5 + 0x1e13380 u< eax_5)
    
    if (__crt_time_is_leap_year<int32_t>(result) != 0)
        int32_t temp4_1 = *arg1
        *arg1 += 0x15180
        arg1[1] = adc.d(arg1[1], 0, temp4_1 + 0x15180 u< temp4_1)
        *arg2 = 1

return result
