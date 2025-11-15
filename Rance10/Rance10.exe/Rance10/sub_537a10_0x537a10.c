// 函数: sub_537a10
// 地址: 0x537a10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = data_7fcba4
int32_t var_4 = 0
char* var_8 = arg3
void** eax = sub_432330(edi + 0x118, arg2)
void** edi_1 = *(edi + 0x118)
void** esi = eax
char eax_2

if (esi != edi_1)
    eax_2 = sub_412ca0(arg2, &esi[4])

if (esi == edi_1 || eax_2 != 0)
    esi = edi_1

if (esi != edi_1 && esi != 0xffffffc0)
    sub_5108d0(&esi[0x10], arg3, arg4)
    return arg3

*(arg3 + 0x14) = 0xf
*(arg3 + 0x10) = 0
*arg3 = 0
return arg3
