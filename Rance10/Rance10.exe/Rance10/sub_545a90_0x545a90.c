// 函数: sub_545a90
// 地址: 0x545a90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_4f4e40(data_7fcba4 + 0x124, arg1)

if (eax == 0)
    eax.b = 0
    return eax

void* esi = *(eax + 0x44)
sub_555e00(esi, 0x1c, arg2)
void* ecx_3 = *(*(esi + (arg2 << 2) + 0x7c) + 0x94)

if (ecx_3 != 0)
    return sub_436410(ecx_3) __tailcall

void* eax_1
eax_1.b = 1
return eax_1
