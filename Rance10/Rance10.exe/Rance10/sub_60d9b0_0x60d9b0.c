// 函数: sub_60d9b0
// 地址: 0x60d9b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
int32_t* eax = arg3
int32_t ebx = eax[6]
void* esi = &eax[2]

if (eax[7] u>= 0x10)
    esi = *esi

int32_t edx = 0
int32_t edi = 0x811c9dc5

if (ebx != 0)
    do
        uint32_t ecx = zx.d(*(esi + edx))
        edx += 1
        edi = (ecx ^ edi) * 0x1000193
    while (edx u< ebx)

int32_t edx_1 = (arg1[6] & edi) << 3
int32_t* ecx_5 = arg1[3] + edx_1

if (ecx_5[1] == eax)
    if (*ecx_5 != eax)
        ecx_5[1] = eax[1]
    else
        *ecx_5 = arg1[1]
        *(arg1[3] + edx_1 + 4) = arg1[1]
    
    eax = arg3
else if (*ecx_5 == eax)
    *ecx_5 = *eax
    eax = arg3

*arg2 = *sub_60db20(&arg1[1], &var_4, eax)
return arg2
