// 函数: sub_51b250
// 地址: 0x51b250
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
void** eax_1 = sub_432330(arg1 + 0x24, arg2)
void** edi = *(arg1 + 0x24)
void** esi = eax_1

if (esi != edi)
    eax_1 = sub_412ca0(arg2, &esi[4])

if (esi == edi || eax_1.b != 0)
    esi = edi

if (esi == edi)
    eax_1.b = 0
    return eax_1

int32_t var_14_2 = arg3
sub_510d20(&esi[0x10], arg1)
sub_516210(arg1 + 0x24, &arg2, esi)
int32_t* eax_3
eax_3.b = 1
return eax_3
