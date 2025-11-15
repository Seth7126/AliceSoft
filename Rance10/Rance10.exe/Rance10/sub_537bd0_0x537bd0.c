// 函数: sub_537bd0
// 地址: 0x537bd0
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

void* result = &esi[0x10]

if (esi == edi_1)
    result = nullptr

if (result != 0 && result + 0x44 != arg2)
    return sub_403590(result + 0x44, arg2, 0, 0xffffffff)

return result
