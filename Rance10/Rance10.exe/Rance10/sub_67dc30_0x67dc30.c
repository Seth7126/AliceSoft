// 函数: sub_67dc30
// 地址: 0x67dc30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

bool var_c = arg1.b
uint32_t edi = zx.d(arg3)
bool eax = sub_6ce3b0(arg1 + 4, edi)
void* edx = *(arg1 + 0x9c)
eax = eax == 0

if (edx != 0)
    *(edx + 4) = eax

sub_6ce330(arg1 + 4, edi, eax)
return DrawMenuBar(arg2)
