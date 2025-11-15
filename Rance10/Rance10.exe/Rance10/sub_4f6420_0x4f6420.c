// 函数: sub_4f6420
// 地址: 0x4f6420
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = data_7fcba4
void** eax = sub_432330(edi + 0x1c4, arg1)
void** edi_1 = *(edi + 0x1c4)
void** esi = eax
char eax_2

if (esi != edi_1)
    eax_2 = sub_412ca0(arg1, &esi[4])

if (esi == edi_1 || eax_2 != 0)
    esi = edi_1

if (esi == edi_1)
    return 0

int32_t eax_4
int32_t edx
edx:eax_4 = muls.dp.d(0x51eb851f, esi[0xc] - esi[0xb])
int32_t edx_1 = edx s>> 5
return (edx_1 u>> 0x1f) + edx_1 + esi[0xa]
