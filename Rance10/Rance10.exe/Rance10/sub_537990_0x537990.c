// 函数: sub_537990
// 地址: 0x537990
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
    void** eax_3 = sub_432330(&esi[0x10], arg2)
    void** edi_3 = esi[0x10]
    void** esi_1 = eax_3
    char eax_5
    
    if (esi_1 != edi_3)
        eax_5 = sub_412ca0(arg2, &esi_1[4])
    
    if (esi_1 == edi_3 || eax_5 != 0)
        esi_1 = edi_3
    
    if (esi_1 != edi_3)
        return esi_1[0xa]

return 0
