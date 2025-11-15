// 函数: sub_64eaa0
// 地址: 0x64eaa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg1
void* esi = *(edi + 0x198)
*(esi + 0x70) = **(edi + 0x18)
*(esi + 0x74) = *(*(edi + 0x18) + 4)

if (*(edi + 0xe0) != 0 && *(esi + 0x24) == 0)
    sub_64e690(esi, (*(esi + 0x28)).b)

void* ecx_2 = *(edi + 0x168)
int32_t i = 0
arg1 = ecx_2

if (*(edi + 0x130) s> 0)
    do
        char* eax_4
        eax_4.w = **(arg2 + (i << 2))
        eax_4.w s>>= ecx_2.b
        sub_64e3c0(eax_4, sx.d(eax_4.w), esi, 1)
        ecx_2 = arg1
        i += 1
    while (i s< *(edi + 0x130))

**(edi + 0x18) = *(esi + 0x70)
*(*(edi + 0x18) + 4) = *(esi + 0x74)
int32_t result = *(edi + 0xe0)

if (result != 0)
    if (*(esi + 0x24) == 0)
        *(esi + 0x24) = result
        *(esi + 0x28) = (*(esi + 0x28) + 1) & 7
    
    *(esi + 0x24) -= 1

result.b = 1
return result
