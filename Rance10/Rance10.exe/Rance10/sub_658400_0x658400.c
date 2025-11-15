// 函数: sub_658400
// 地址: 0x658400
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = *(arg1 + 0x1b0)
void* esi = *(arg1 + 0x1ac)
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(*(ebx + 0x10))
*(esi + 0x14) += (eax_1 + (edx & 7)) s>> 3
*(ebx + 0x10) = 0
char eax_6 = (*(*(arg1 + 0x1ac) + 8))(arg1)

if (eax_6 == 0)
    return eax_6

int32_t i = 0

if (*(arg1 + 0x130) s> 0)
    void* ecx = ebx + 0x18
    
    do
        *ecx = 0
        ecx += 4
        i += 1
    while (i s< *(arg1 + 0x130))

*(ebx + 0x14) = 0
*(ebx + 0x2c) = *(arg1 + 0xfc)

if (*(arg1 + 0x194) == 0)
    *(ebx + 0x28) = 0

int32_t eax_7
eax_7.b = 1
return eax_7
