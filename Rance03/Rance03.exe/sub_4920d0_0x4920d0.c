// 函数: sub_4920d0
// 地址: 0x4920d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = *(arg1 + 0x70)
void* eax = *(esi + 0xf0)

if (eax == 0)
    eax.b = 0
    return eax

int32_t ecx = *(eax + 0x44)
*(eax + 0x48) = 0

if (arg2 s>= ecx)
    *(esi + 0x16a) = 1
    *(esi + 0x16c) = arg2 - ecx
    int32_t eax_3
    eax_3.b = 1
    return eax_3

int32_t var_8 = arg2
sub_490e40(*(esi + 0xf0))
*(esi + 0x168) = 1
void* eax_2
eax_2.b = 1
return eax_2
