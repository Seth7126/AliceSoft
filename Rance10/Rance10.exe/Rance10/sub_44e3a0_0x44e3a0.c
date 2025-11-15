// 函数: sub_44e3a0
// 地址: 0x44e3a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *arg2
*arg2 = *(esi + 8)
void* eax_1 = *(esi + 8)

if (*(eax_1 + 0xd) == 0)
    *(eax_1 + 4) = arg2

*(esi + 4) = arg2[1]
void* eax_3 = *arg1

if (arg2 == *(eax_3 + 4))
    *(eax_3 + 4) = esi
    *(esi + 8) = arg2
    arg2[1] = esi
    return eax_3

void** eax_4 = arg2[1]

if (arg2 != eax_4[2])
    *eax_4 = esi
    *(esi + 8) = arg2
    arg2[1] = esi
    return eax_4

eax_4[2] = esi
*(esi + 8) = arg2
arg2[1] = esi
return eax_4
