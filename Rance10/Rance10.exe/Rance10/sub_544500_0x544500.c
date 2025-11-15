// 函数: sub_544500
// 地址: 0x544500
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_4f4e40(data_7fcba4 + 0x124, arg1)

if (eax == 0)
    eax.b = 0
    return eax

void* esi = *(eax + 0x44)
sub_555e00(esi, 0x1a, arg2)
void* eax_2 = *(*(esi + (arg2 << 2) + 0x7c) + 0x60)
void* ecx_3 = *(eax_2 + 0x68)
*(eax_2 + 0x138) = 1

if (ecx_3 != 0)
    sub_4da910(ecx_3, *(ecx_3 + 0xc), *(ecx_3 + 0x10))

eax_2.b = 1
return eax_2
