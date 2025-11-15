// 函数: sub_4eddb0
// 地址: 0x4eddb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = *(arg1 + 0xa4)
int32_t var_c
(*(**(arg1 + 0x74) + 0x20))(&arg5, &var_c, arg5)
int32_t eax_6

if (esi - 1 u> 8)
    eax_6 = 0
else
    switch (esi + &jump_table_4edea4[2]:3)
        case &lookup_table_4edeb0, &lookup_table_4edeb0[3], &lookup_table_4edeb0[6]
            eax_6 = 0
        case &lookup_table_4edeb0[1], &lookup_table_4edeb0[4], &lookup_table_4edeb0[7]
            int32_t eax_3
            int32_t edx_1
            edx_1:eax_3 = sx.q(arg5)
            eax_6 = neg.d((eax_3 - edx_1) s>> 1)
        case &lookup_table_4edeb0[2], &lookup_table_4edeb0[5], &lookup_table_4edeb0[8]
            eax_6 = neg.d(arg5)

float var_8 = _mm_cvtepi32_ps(zx.o(eax_6))
int32_t eax_13

if (esi - 1 u> 8)
    eax_13 = 0
else
    switch (esi + &jump_table_4edebc[2]:3)
        case &lookup_table_4edec8, &lookup_table_4edec8[1], &lookup_table_4edec8[2]
            eax_13 = 0
        case &lookup_table_4edec8[3], &lookup_table_4edec8[4], &lookup_table_4edec8[5]
            int32_t eax_10
            int32_t edx_2
            edx_2:eax_10 = sx.q(var_c)
            eax_13 = neg.d((eax_10 - edx_2) s>> 1)
        case &lookup_table_4edec8[6], &lookup_table_4edec8[7], &lookup_table_4edec8[8]
            eax_13 = neg.d(var_c)

float xmm0_3 = _mm_cvtepi32_ps(zx.o(eax_13))
void* eax_15 = arg4[0x2f]
float var_4 = xmm0_3
void* eax_16

if (eax_15 != 0)
    eax_16 = *(eax_15 + 8)
else
    eax_16 = data_7fcba0

sub_528b80(&arg4[2], &var_4, &var_8, *arg4, arg4[1], &arg4[2], eax_16)
long double x87_r0
long double x87_r1
*arg2 = sub_63ce00(var_8, x87_r0, x87_r1)
long double x87_r2
*arg3 = sub_63ce00(var_4, x87_r1, x87_r2)
return arg3
