// 函数: ?_Ffmt@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@ABAPADPADDH@Z
// 地址: 0x6d7e2b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = 0x25
void* eax = &arg1[1]

if ((arg3.b & 0x20) != 0)
    *eax = 0x2b
    eax += 1

if ((arg3.b & 0x10) != 0)
    *eax = 0x23
    eax += 1

*eax = 0x2a2e
void* eax_1 = eax + 2

if (arg2 != 0)
    *eax_1 = arg2
    eax_1 += 1

void* ecx_2 = arg3 & 0x3000

if ((arg3.b & 4) == 0)
    if (ecx_2 == 0x2000)
        ecx_2.b = 0x66
    else if (ecx_2 != 0x3000)
        ecx_2.b = ecx_2 != 0x1000
        ecx_2 = (ecx_2 << 1) + 0x65
    else
        ecx_2.b = 0x61
else if (ecx_2 == 0x2000)
    ecx_2.b = 0x66
else if (ecx_2 != 0x3000)
    ecx_2.b = ecx_2 != 0x1000
    ecx_2 = (ecx_2 << 1) + 0x45
else
    ecx_2.b = 0x41

*eax_1 = ecx_2.b
*(eax_1 + 1) = 0
return arg1
