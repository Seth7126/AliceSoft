// 函数: sub_64b9a0
// 地址: 0x64b9a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg1
void* edi = esi[0x66]

if (esi[0x38] != 0)
    if (*(edi + 0x44) == 0)
        sub_64b400(esi, (*(edi + 0x48)).b)
        *(edi + 0x44) = esi[0x38]
        *(edi + 0x48) = (*(edi + 0x48) + 1) & 7
    
    *(edi + 0x44) -= 1

char eax_9 = (esi[0x5a]).b
char* edx_2 = edi + 0xcc
int32_t i = 0
arg1 = edx_2

if (esi[0x4c] s> 0)
    do
        int32_t eax_8 = sx.d(**(arg2 + (i << 2))) s>> eax_9 & 1
        sub_64b150(eax_8, edx_2, esi, eax_8)
        edx_2 = arg1
        i += 1
    while (i s< esi[0x4c])

return 1
