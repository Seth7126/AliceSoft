// 函数: sub_47b3b0
// 地址: 0x47b3b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_47b520(arg1)
*(arg1 + 8) = 0x100
*(arg1 + 0xc) = 0x100
int32_t ecx
ecx.b = mulu.dp.d(0x100, 4) u>> 0x20 != 0
int32_t var_c = neg.d(ecx) | 0x400
int32_t var_10 = 0x10000
*(arg1 + 4) = sub_6e8787()
int32_t edx = 0x100
int32_t* i = 0x10
**(arg1 + 4) = sub_6e8787()
int32_t result

do
    int32_t* ecx_4 = *(arg1 + 4)
    *(i + ecx_4 - 0xc) = *ecx_4 + edx
    int32_t* ecx_5 = *(arg1 + 4)
    *(i + ecx_5 - 8) = *ecx_5 + 0x100 + edx
    int32_t* ecx_6 = *(arg1 + 4)
    *(i + ecx_6 - 4) = *ecx_6 + 0x200 + edx
    int32_t* ecx_7 = *(arg1 + 4)
    *(i + ecx_7) = *ecx_7 + 0x300 + edx
    int32_t* ecx_8 = *(arg1 + 4)
    result = *ecx_8 + 0x400 + edx
    edx += 0x500
    *(i + ecx_8 + 4) = result
    i = &i[5]
while (i s< 0x40c)

result.b = 1
return result
