// 函数: sub_453480
// 地址: 0x453480
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = data_7fcb54
void** esi = sub_432330(ebx + 0x20, arg1)
void** result

if (esi != *(ebx + 0x20))
    result = sub_412ca0(arg1, &esi[4])

if (esi == *(ebx + 0x20) || result.b != 0)
    esi = *(ebx + 0x20)

if (esi != *(ebx + 0x20) && esi[0xb] != 4)
    result.b = 0
    return result

void** var_8
sub_453ba0(ebx + 0x20, &var_8, arg1)
void** ecx_2 = var_8
ecx_2[0x14].b = arg2
ecx_2[0xb] = 4
return 1
