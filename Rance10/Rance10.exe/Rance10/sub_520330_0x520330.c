// 函数: sub_520330
// 地址: 0x520330
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = *(arg1[0x6f] + 0xa4)
int32_t edi = (*(*arg1 + 0x24))(1)
int32_t edi_1

if (esi - 1 u> 8)
    edi_1 = 0
else
    switch (esi + &jump_table_5203ec[2]:3)
        case &lookup_table_5203f8, &lookup_table_5203f8[3], &lookup_table_5203f8[6]
            edi_1 = 0
        case &lookup_table_5203f8[1], &lookup_table_5203f8[4], &lookup_table_5203f8[7]
            int32_t eax_5
            int32_t edx_1
            edx_1:eax_5 = sx.q(edi)
            edi_1 = neg.d((eax_5 - edx_1) s>> 1)
        case &lookup_table_5203f8[2], &lookup_table_5203f8[5], &lookup_table_5203f8[8]
            edi_1 = neg.d(edi)

void* ecx = arg1[0x6f]
float var_4 = 0f
float var_8 = 0f
void* eax_8 = *(ecx + 0x31c)
void* eax_9

if (eax_8 != 0)
    eax_9 = *(eax_8 + 8)
else
    eax_9 = data_7fcba0

sub_528b80(ecx + 0x268, &var_4, &var_8, (zx.o(0)).d, (zx.o(0)).d, ecx + 0x268, eax_9)
long double x87_r0
long double x87_r1
var_8 = sub_63ce00(var_8, x87_r0, x87_r1)
long double x87_r2
int32_t result = sub_63ce00(var_4, x87_r1, x87_r2)
_mm_cvtepi32_ps(zx.o(edi_1))
return result
