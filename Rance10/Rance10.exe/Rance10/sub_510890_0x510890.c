// 函数: sub_510890
// 地址: 0x510890
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** eax = sub_432330(arg1, arg2)
void** edi_1 = *arg1
void** esi = eax
char eax_2

if (esi != edi_1)
    eax_2 = sub_412ca0(arg2, &esi[4])

if (esi == edi_1 || eax_2 != 0)
    esi = edi_1

if (esi != edi_1)
    return esi[0xa]

return 0
