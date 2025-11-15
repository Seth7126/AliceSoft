// 函数: sub_4aa9e0
// 地址: 0x4aa9e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = *(arg3 + 0x90)
int32_t ecx_1 = *(arg3 + 0x9c)
int32_t ecx_2 = *(arg3 + 0xa0)
int32_t ecx_3 = *(arg3 + 0xa4)
int32_t ecx_4 = *(arg3 + 0x88)
int32_t ecx_5 = *(arg3 + 0x8c)
int32_t ecx_6 = *(arg3 + 0x94)
int32_t ecx_7 = *(arg3 + 0x98)
int32_t ecx_8 = *(arg3 + 0xa8)
int32_t eax_1 = *(arg3 + 0xac)
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x66666667, *(arg2 + 0xc4) - *(arg2 + 0xc0))
int32_t edx_1 = edx s>> 4
int32_t i_3 = (edx_1 u>> 0x1f) + edx_1
int32_t eax_4
int32_t edx_2
edx_2:eax_4 = muls.dp.d(0x66666667, *(arg1 + 0xc4) - arg1[0xc].d)
int32_t edx_3 = edx_2 s>> 4
int32_t i = (edx_3 u>> 0x1f) + edx_3

if (i u< i_3)
    i = i_3

int128_t* result
int32_t edx_4
edx_4:result = muls.dp.d(0x66666667, *(arg1 + 0xc4) - arg1[0xc].d)
int32_t edx_5 = edx_4 s>> 4
int32_t i_2 = (edx_5 u>> 0x1f) + edx_5

if (i_3 u< i_2)
    i_2 = i_3

if (i == 0)
    return result

int32_t eax_5
int32_t edx_6
edx_6:eax_5 = muls.dp.d(0x66666667, *(arg1 + 0xc4) - arg1[0xc].d)
int32_t edx_7 = edx_6 s>> 4

if ((edx_7 u>> 0x1f) + edx_7 u< i)
    int32_t edx_9
    
    do
        int128_t xmm0_1 = data_79aa00
        int32_t var_cc_1 = arg1[0xc].d
        int16_t var_84 = 0
        int32_t var_80_1 = 0
        int32_t var_7c_1 = 0
        int128_t var_78_1 = xmm0_1
        int32_t var_68_1 = 0
        int32_t var_64_1 = 0
        int32_t var_60_1 = 0
        void var_88
        sub_4aad80(&arg1[0xc], &var_88, var_cc_1, &var_84)
        int32_t eax_9
        int32_t edx_8
        edx_8:eax_9 = muls.dp.d(0x66666667, *(arg1 + 0xc4) - arg1[0xc].d)
        edx_9 = edx_8 s>> 4
    while ((edx_9 u>> 0x1f) + edx_9 u< i)

int32_t eax_10
int32_t edx_10
edx_10:eax_10 = muls.dp.d(0x66666667, *(arg1 + 0xc4) - arg1[0xc].d)
int32_t edx_11 = edx_10 s>> 4
int32_t eax_13

if (i_2 != 0)
    int32_t ecx_26 = ((edx_11 u>> 0x1f) + edx_11) * 0x28
    int32_t edx_13 = i_3 * 0x28
    int32_t i_1
    
    do
        int32_t edi_2 = arg1[0xc].d
        int32_t esi_2 = *(arg2 + 0xc0)
        
        if (ecx_8 == 1)
            eax_13.b = *(edx_13 + esi_2 - 0x28)
            *(ecx_26 + edi_2 - 0x28) = eax_13.b
        
        if (eax_1 == 1)
            eax_13.b = *(edx_13 + esi_2 - 0x27)
            *(ecx_26 + edi_2 - 0x27) = eax_13.b
        
        if (ecx_4 == 1)
            *(ecx_26 + edi_2 - 0x1c) = *(edx_13 + esi_2 - 0x1c)
            *(ecx_26 + edi_2 - 0x18) = *(edx_13 + esi_2 - 0x18)
        
        if (ecx_5 == 1)
            *(ecx_26 + edi_2 - 0x24) = *(edx_13 + esi_2 - 0x24)
            *(ecx_26 + edi_2 - 0x20) = *(edx_13 + esi_2 - 0x20)
        
        if (ecx_6 == 1)
            *(ecx_26 + edi_2 - 0xc) = *(edx_13 + esi_2 - 0xc)
            *(ecx_26 + edi_2 - 8) = *(edx_13 + esi_2 - 8)
            *(ecx_26 + edi_2 - 4) = *(edx_13 + esi_2 - 4)
        
        if (ecx_7 == 1)
            *(ecx_26 + edi_2 - 0x14) = *(edx_13 + esi_2 - 0x14)
            *(ecx_26 + edi_2 - 0x10) = *(edx_13 + esi_2 - 0x10)
        
        edx_13 -= 0x28
        ecx_26 -= 0x28
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

eax_13.b = ecx_3 == 1
void var_5c
return sub_527720(arg1, arg2, sub_4aac70(arg1, &var_5c), ecx == 1, ecx_1 == 1, ecx_2 == 1, eax_13.b)
