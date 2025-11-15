// 函数: sub_4ed9c0
// 地址: 0x4ed9c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_40 = edi
int32_t esi = *(arg1 + 0xa4)
float var_30
float var_2c
(*(**(arg1 + 0x74) + 0x20))(&var_30, &var_2c, arg11)
int32_t eax_6

if (esi - 1 u> 8)
    eax_6 = 0
else
    switch (esi + &jump_table_4edb74[2]:3)
        case &lookup_table_4edb80, &lookup_table_4edb80[3], &lookup_table_4edb80[6]
            eax_6 = 0
        case &lookup_table_4edb80[1], &lookup_table_4edb80[4], &lookup_table_4edb80[7]
            int32_t eax_3
            int32_t edx_1
            edx_1:eax_3 = sx.q(arg2)
            eax_6 = neg.d((eax_3 - edx_1) s>> 1)
        case &lookup_table_4edb80[2], &lookup_table_4edb80[5], &lookup_table_4edb80[8]
            eax_6 = neg.d(arg2)

float xmm0_1 = _mm_cvtepi32_ps(zx.o(eax_6))
int32_t eax_13
int32_t entry_ebx

if (esi - 1 u> 8)
    eax_13 = 0
else
    switch (esi + &jump_table_4edb8c[2]:3)
        case &lookup_table_4edb98, &lookup_table_4edb98[1], &lookup_table_4edb98[2]
            eax_13 = 0
        case &lookup_table_4edb98[3], &lookup_table_4edb98[4], &lookup_table_4edb98[5]
            int32_t eax_10
            int32_t edx_2
            edx_2:eax_10 = sx.q(entry_ebx)
            eax_13 = neg.d((eax_10 - edx_2) s>> 1)
        case &lookup_table_4edb98[6], &lookup_table_4edb98[7], &lookup_table_4edb98[8]
            eax_13 = neg.d(entry_ebx)

float xmm1_1 = _mm_cvtepi32_ps(zx.o(arg2))
float var_34 = xmm0_1
float xmm1_2 = xmm1_1 + xmm0_1
float var_24 = xmm0_1
void* eax_15 = *(arg1 + 0x31c)
float xmm2_1 = _mm_cvtepi32_ps(zx.o(eax_13))
var_2c = xmm1_2
var_30 = xmm2_1
float var_1c = xmm1_2
float xmm0_4 = _mm_cvtepi32_ps(zx.o(entry_ebx)) + xmm2_1
void* eax_16

if (eax_15 != 0)
    eax_16 = *(eax_15 + 8)
else
    eax_16 = data_7fcba0

sub_528960(&var_2c, &var_34, arg1 + 0x268, *(arg1 + 0x260), *(arg1 + 0x264), &var_2c, &var_24, 
    &var_1c, eax_16)
long double x87_r0
long double x87_r1
*arg3 = sub_63ce00(var_34, x87_r0, x87_r1)
long double x87_r2
*arg4 = sub_63ce00(var_30, x87_r1, x87_r2)
long double x87_r3
*arg5 = sub_63ce00(var_2c, x87_r2, x87_r3)
long double x87_r4
*arg6 = sub_63ce00(xmm2_1, x87_r3, x87_r4)
long double x87_r5
*arg7 = sub_63ce00(var_24, x87_r4, x87_r5)
long double x87_r6
*arg8 = sub_63ce00(xmm0_4, x87_r5, x87_r6)
long double x87_r7
*arg9 = sub_63ce00(var_1c, x87_r6, x87_r7)
*arg10 = sub_63ce00(xmm0_4, x87_r7, x87_r0)
return arg10
