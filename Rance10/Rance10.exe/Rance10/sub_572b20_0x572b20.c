// 函数: sub_572b20
// 地址: 0x572b20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebp = arg2
int32_t* esi = *ebp
int32_t edi = ebp[1]

if (esi == edi)
    return 

do
    int32_t* eax_1 = *esi
    arg2.b = 0
    int32_t var_24_1 = 0
    sub_574f40(arg1, arg1[1], *eax_1, eax_1[1])
    esi = &esi[2]
while (esi != edi)

int32_t xmm6_1 = 0xff7fffff
int32_t xmm5_1 = 0x7f7fffff
int32_t* xmm0_1 = -0xffffffffff7fffff
int32_t edi_1 = ebp[1]
int32_t xmm7_1 = 0x7f7fffff
int32_t* esi_1 = *ebp
arg2 = 0xff7fffff

while (esi_1 != edi_1)
    int32_t var_10
    int32_t var_c
    int32_t var_8
    int32_t var_4
    sub_5727e0(*esi_1, &var_10, &var_c, &var_8, &var_4)
    esi_1 = &esi_1[2]
    xmm5_1 = _mm_min_ss(var_10, xmm5_1)
    xmm6_1 = _mm_max_ss(var_c, xmm6_1)
    xmm7_1 = _mm_min_ss(var_8, xmm7_1)
    xmm0_1 = __maxss_xmmss_memss(var_4, arg2)
    arg2 = xmm0_1

int32_t eax_3 = arg1[0xb] * arg1[0xa]
arg1[6] = xmm5_1
arg1[7] = xmm6_1
arg1[8] = xmm7_1
arg1[9] = xmm0_1
sub_4d7bd0(&arg1[3], eax_3)
sub_5733e0(arg1, arg1)
sub_574150(arg1)
