// 函数: sub_609d90
// 地址: 0x609d90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_60c2a0(arg1 + 0x94, &arg2, arg2)
void** eax = arg2

if (eax == *(arg1 + 0x98))
    return 0

int32_t edi = eax[8]
int32_t eax_2
int32_t edx
edx:eax_2 = muls.dp.d(0x4bda12f7, *(arg1 + 0x38) - *(arg1 + 0x34))
int32_t edx_1 = edx s>> 5

if (edi u< (edx_1 u>> 0x1f) + edx_1)
    return edi * 0x6c + *(arg1 + 0x34)

return 0
