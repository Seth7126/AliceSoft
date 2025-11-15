// 函数: sub_453380
// 地址: 0x453380
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = data_7fcb54
void** esi = sub_432330(ebx + 0x20, arg2)
void** eax

if (esi != *(ebx + 0x20))
    eax = sub_412ca0(arg2, &esi[4])

if (esi == *(ebx + 0x20) || eax.b != 0)
    esi = *(ebx + 0x20)

if (esi != *(ebx + 0x20) && esi[0xb] != 2)
    eax.b = 0
    return eax

void** var_8
sub_453ba0(ebx + 0x20, &var_8, arg2)
void** eax_2 = var_8
eax_2[0xb] = 2
eax_2[0xd] = arg1
eax_2.b = 1
return eax_2
