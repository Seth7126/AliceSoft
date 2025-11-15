// 函数: sub_448920
// 地址: 0x448920
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0
uint32_t eax = sub_4365c0(arg2)
int32_t eax_1
int32_t esi_1

if (eax s>= 0)
    int32_t esi_5 = eax & 0x40000000
    eax_1 = 2
    int32_t esi_6 = neg.d(esi_5)
    esi_1 = neg.d(sbb.d(esi_6, esi_6, esi_5 != 0)) + 1
else if ((eax & 0x40000000) == 0)
    int32_t esi_2 = eax & 0x20000000
    eax_1 = 3
    int32_t esi_3 = neg.d(esi_2)
    esi_1 = sbb.d(esi_3, esi_3, esi_2 != 0) & 3
else
    eax_1 = sub_448eb0(&var_8, eax)
    esi_1 = var_8

arg2[1] += eax_1
int32_t eax_2 = arg2[1]

if (esi_1 s<= 0)
    *arg1 = 0
    eax_2.b = 1
    return eax_2

int32_t* ecx_2 = *arg2
uint32_t edx_2 = eax_2 u>> 3
var_8 = eax_2 & 7
char* eax_5 = *ecx_2 + edx_2
uint32_t edi_1 = zx.d(*eax_5) << 8

if (var_8 != 0 && edx_2 + 1 u< ecx_2[1] - **arg2)
    edi_1 |= zx.d(eax_5[1])

arg2[1] += esi_1
int32_t edi_4 = edi_1 u>> (8 - var_8.b) u>> (8 - esi_1.b) & ((1 << esi_1.b) - 1)
*arg1 = edi_4

if ((edi_4 & 1 << (esi_1.b - 1)) == 0)
    *arg1 = (edi_4 + 1) | 0xffffffff << esi_1.b

int32_t eax_12
eax_12.b = 1
return eax_12
