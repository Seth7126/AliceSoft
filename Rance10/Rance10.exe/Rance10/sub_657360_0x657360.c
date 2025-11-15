// 函数: sub_657360
// 地址: 0x657360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebp = *(arg1 + 0x5c)
int32_t i = arg5
int32_t* edi = arg4
char* result = arg3
int32_t* ebx = *arg2 + (result << 2)

for (; i s> 0; i -= 1)
    char* ecx_1 = *ebx
    ebx = &ebx[1]
    char* eax_1 = *edi
    edi = &edi[1]
    result = sub_700660(eax_1, ecx_1, ebp)

return result
