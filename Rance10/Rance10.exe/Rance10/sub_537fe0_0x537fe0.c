// 函数: sub_537fe0
// 地址: 0x537fe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = data_7fcba4
void** eax = sub_432330(edi + 0x118, arg1)
void** edi_1 = *(edi + 0x118)
void** esi = eax
char eax_2

if (esi != edi_1)
    eax_2 = sub_412ca0(arg1, &esi[4])

if (esi == edi_1 || eax_2 != 0)
    esi = edi_1

if (esi != edi_1 && esi != 0xffffffc0)
    return esi[0x19]

return 0
