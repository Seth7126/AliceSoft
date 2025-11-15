// 函数: sub_537f00
// 地址: 0x537f00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
void* edi = data_7fcba4
void** eax = sub_432330(edi + 0x118, arg1)
void** edi_1 = *(edi + 0x118)
void** esi = eax
char eax_2

if (esi != edi_1)
    eax_2 = sub_412ca0(arg1, &esi[4])

if (esi == edi_1 || eax_2 != 0)
    esi = edi_1

void* ecx_1 = &esi[0x10]

if (esi == edi_1)
    ecx_1 = nullptr

if (ecx_1 == 0)
    return 0

var_4 = arg2
return sub_513ea0(ecx_1 + 0x20, &var_4)
