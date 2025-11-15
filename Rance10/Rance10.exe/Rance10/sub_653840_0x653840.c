// 函数: sub_653840
// 地址: 0x653840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = arg4
void* ebp = arg1
void* esi = ecx
int32_t i = *(ebp + 0x104)
void* eax = *(ebp + 0x1c)

if (i s> 0)
    do
        char* eax_1 = *(arg3 - ecx + esi)
        esi += 4
        sub_700660(*(esi - 4), eax_1, eax)
        i -= 1
    while (i s> 0)
    
    ebp = arg1
    ecx = arg4

return sub_6535f0(arg2, *(ebp + 0x104), ecx, *(ebp + 0x1c), *(arg2 + 0x24) * *(arg2 + 0x1c))
