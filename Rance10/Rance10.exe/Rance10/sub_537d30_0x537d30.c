// 函数: sub_537d30
// 地址: 0x537d30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = data_7fcba4
void** eax = sub_432330(edi + 0x118, arg1)
void** edi_1 = *(edi + 0x118)
void** esi = eax

if (esi != edi_1)
    eax = sub_412ca0(arg1, &esi[4])

if (esi == edi_1 || eax.b != 0)
    esi = edi_1

if (esi == edi_1 || esi == 0xffffffc0)
    eax.b = 0
    return eax

void** eax_2 = sub_432330(&esi[0x12], arg2)
void** edi_2 = esi[0x12]
void** esi_1 = eax_2

if (esi_1 != edi_2)
    eax_2 = sub_412ca0(arg2, &esi_1[4])

if (esi_1 == edi_2 || eax_2.b != 0)
    esi_1 = edi_2

eax_2.b = esi_1 != edi_2
return eax_2
