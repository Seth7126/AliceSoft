// 函数: sub_4b0400
// 地址: 0x4b0400
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = arg2

if (esi s< 0)
    return 

int32_t edi_1 = *arg1
int32_t eax_1
int32_t edx_1
edx_1:eax_1 = muls.dp.d(0x2aaaaaab, arg1[1] - edi_1)
int32_t edx_2 = edx_1 s>> 1

if ((edx_2 u>> 0x1f) + edx_2 s> esi)
    arg2 = arg3
    sub_404370(edi_1 + esi * 0xc, &arg2)
