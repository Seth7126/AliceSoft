// 函数: sub_1000d0e0
// 地址: 0x1000d0e0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t result
int32_t edx
edx:result = muls.dp.d(0x68db8bad, arg2)
int32_t result_1 = arg2 s/ 0x2710

if (result_1 s> 0x3e8 || result_1 s< 0xfffffc18)
    if (*(arg1 + 0x124) s> 1)
        int32_t eax
        eax.b = result_1 s<= 0
        result = ((eax - 1) & 0x7d0) - 0x3e8
        result_1 = result
    else
        result_1 = 0

int32_t edi = *(arg1 + 0x124)

if (edi s> 1)
    int32_t eax_4
    int32_t edx_2
    edx_2:eax_4 = sx.q(result_1)
    int32_t temp1_1 = *(arg1 + 0x128)
    *(arg1 + 0x128) += eax_4
    *(arg1 + 0x12c) = adc.d(*(arg1 + 0x12c), edx_2, temp1_1 + eax_4 u< temp1_1)
    int32_t edx_3
    edx_3:result = sx.q(result_1 * result_1)
    int32_t temp2_1 = *(arg1 + 0x130)
    *(arg1 + 0x130) += result
    *(arg1 + 0x134) = adc.d(*(arg1 + 0x134), edx_3, temp2_1 + result u< temp2_1)

if (edi s> 2)
    int32_t esi_4 = arg3 s/ 0x2710
    
    if (esi_4 s> 0x3e8 || esi_4 s< 0)
        esi_4 = 0x3e8
    
    int32_t eax_10
    int32_t edx_7
    edx_7:eax_10 = sx.q(esi_4 * esi_4)
    int32_t temp3_1 = *(arg1 + 0x140)
    *(arg1 + 0x140) += eax_10
    *(arg1 + 0x144) = adc.d(*(arg1 + 0x144), edx_7, temp3_1 + eax_10 u< temp3_1)
    int32_t edx_8
    edx_8:result = sx.q(esi_4)
    int32_t temp4_1 = *(arg1 + 0x148)
    *(arg1 + 0x148) += result
    *(arg1 + 0x14c) = adc.d(*(arg1 + 0x14c), edx_8, temp4_1 + result u< temp4_1)

*(arg1 + 0x124) = edi + 1
return result
