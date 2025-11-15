// 函数: sub_4b8880
// 地址: 0x4b8880
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
void** eax = sub_432330(arg1 + 0x18, arg3)
void** edi = *(arg1 + 0x18)
void** esi = eax
char eax_2

if (esi != edi)
    eax_2 = sub_412ca0(arg3, &esi[4])

if (esi == edi || eax_2 != 0)
    esi = edi

if (esi == edi)
    sub_403360(arg2, 0x75cfff)
    return arg2

*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
sub_403590(arg2, &esi[0xa], 0, 0xffffffff)
return arg2
