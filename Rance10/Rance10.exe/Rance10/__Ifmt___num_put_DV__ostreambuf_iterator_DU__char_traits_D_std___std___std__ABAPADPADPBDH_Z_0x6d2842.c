// 函数: ?_Ifmt@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABAPADPADPBDH@Z
// 地址: 0x6d2842
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = 0x25
void* eax = &arg1[1]

if ((arg3.b & 0x20) != 0)
    *eax = 0x2b
    eax += 1

if ((arg3.b & 8) != 0)
    *eax = 0x23
    eax += 1

char edx = *arg2

if (edx == 0x4c)
    *eax = 0x3649
    eax += 2
    *eax = 0x34
else
    *eax = edx

int32_t edx_2 = arg3 & 0xe00
int32_t ecx

if (edx_2 == 0x400)
    ecx.b = 0x6f
else if (edx_2 == 0x800)
    ecx.b = arg3.b << 3
    ecx.b = not.b(ecx.b)
    ecx.b &= 0x20
    ecx.b |= 0x58
else
    ecx.b = arg2[1]

*(eax + 1) = ecx.b
*(eax + 2) = 0
return arg1
