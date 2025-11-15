// 函数: sub_5441c0
// 地址: 0x5441c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_4f4e40(data_7fcba4 + 0x124, arg3)

if (eax == 0)
    eax.b = 0
    return eax

void* edi = *(eax + 0x44)
sub_555e00(edi, 0x19, arg7)
void* eax_1 = *(edi + (arg7 << 2) + 0x7c)

if (*(eax_1 + 0x3c) != arg2 || *(eax_1 + 0x40) != arg4 || *(eax_1 + 0x48) != arg5
        || *(eax_1 + 0x4c) != arg6)
    *(eax_1 + 0x3c) = arg2
    *(eax_1 + 0x40) = arg4
    *(eax_1 + 0x48) = arg5
    *(eax_1 + 0x4c) = arg6
    *(eax_1 + 0x50) = 1

eax_1.b = 1
return eax_1
