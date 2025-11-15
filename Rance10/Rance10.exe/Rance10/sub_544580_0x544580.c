// 函数: sub_544580
// 地址: 0x544580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_4f4e40(data_7fcba4 + 0x124, arg3)

if (eax == 0)
    eax.b = 0
    return eax

void* edi = *(eax + 0x44)
sub_555e00(edi, 0x1a, arg7)
void* eax_1 = *(edi + (arg7 << 2) + 0x7c)

if (arg5 s>= 0 && arg6 s>= 0 && arg2 s>= 0 && arg4 s>= 0)
    *(eax_1 + 0x2c) = arg2
    *(eax_1 + 0x30) = arg4
    *(eax_1 + 0x38) = arg5
    *(eax_1 + 0x3c) = arg6
    *(eax_1 + 0x20) = 1

eax_1.b = 1
return eax_1
