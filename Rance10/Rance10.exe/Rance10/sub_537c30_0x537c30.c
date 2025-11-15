// 函数: sub_537c30
// 地址: 0x537c30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = data_7fcba4
int32_t var_4 = 0
char* var_8 = arg1
void** eax = sub_432330(edi + 0x118, arg2)
void** edi_1 = *(edi + 0x118)
void** esi = eax
char eax_2

if (esi != edi_1)
    eax_2 = sub_412ca0(arg2, &esi[4])

if (esi == edi_1 || eax_2 != 0)
    esi = edi_1

if (esi == edi_1 || esi == 0xffffffc0)
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
    return arg1

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_403590(arg1, &esi[0x21], 0, 0xffffffff)
return arg1
