// 函数: sub_636e50
// 地址: 0x636e50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg2[3]
void* ebx = *(arg3 + 0xc)
*(arg3 + 0xc) = 0
void* eax = *(arg1 + 4)
*(arg1 + 4) = arg3
*(arg3 + 0xc) = 0
*(eax + 0xc) = arg3
void* eax_1 = esi + 0x18

if (*eax_1 != 0)
    do
        esi = *eax_1
        eax_1 = esi + 0x18
    while (*(esi + 0x18) != 0)

struct std::_Node_base::std::_Node_if::VTable** eax_2 = sub_6e810c(0x1c)
arg2 = eax_2
eax_2[5] = arg3
eax_2[1] = 0x10
eax_2[2] = 0
eax_2[3] = 0
eax_2[4] = 0
*eax_2 = &std::_Node_if::`vftable'{for `std::_Node_base'}
eax_2[6] = 0
*(esi + 0x18) = eax_2
eax_2[3] = ebx
int32_t result = *(esi + 0x18)
*(ebx + 0x10) = result
return result
