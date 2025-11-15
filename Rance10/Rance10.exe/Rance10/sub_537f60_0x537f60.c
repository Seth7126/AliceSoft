// 函数: sub_537f60
// 地址: 0x537f60
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

int32_t esi_1 = esi[0x18]
int32_t var_8 = arg2
void** var_4
void** eax_2
eax_2.b = esi_1 != *sub_42eb70(&esi[0x18], &var_4, &var_8)
return eax_2
