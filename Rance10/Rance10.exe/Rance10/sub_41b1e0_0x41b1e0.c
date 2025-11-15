// 函数: sub_41b1e0
// 地址: 0x41b1e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 s< 0)
    return 

int32_t eax_1
int32_t edx_3
edx_3:eax_1 = muls.dp.d(0x38e38e39, *(arg1 + 0xc) - *(arg1 + 8))
int32_t edx_4 = edx_3 s>> 4

if (arg2 s>= (edx_4 u>> 0x1f) + edx_4)
    return 

int32_t eax = *(arg1 + 8) + arg2 * 0x48

if (eax == 0)
    return 

eax += 0x30
*(eax + 0x10) = 0

if (*(eax + 0x14) u>= 0x10)
    eax = *eax

*eax = 0
