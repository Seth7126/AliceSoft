// 函数: sub_6583d0
// 地址: 0x6583d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg1 + 0x1b0)
void* ecx = *(arg1 + 0x1ac)
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(*(esi + 0x10))
int32_t result = (eax_1 + (edx & 7)) s>> 3
*(ecx + 0x14) += result
*(esi + 0x10) = 0
return result
