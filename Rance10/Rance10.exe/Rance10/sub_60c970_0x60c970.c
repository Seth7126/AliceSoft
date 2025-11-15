// 函数: sub_60c970
// 地址: 0x60c970
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax_4 = arg3
int32_t ebx = eax_4[6]
void* esi = &eax_4[2]

if (eax_4[7] u>= 0x10)
    esi = *esi

int32_t edx = 0
int32_t edi = 0x811c9dc5

if (ebx != 0)
    do
        uint32_t ecx = zx.d(*(esi + edx))
        edx += 1
        edi = (ecx ^ edi) * 0x1000193
    while (edx u< ebx)

int32_t edx_1 = (*(arg1 + 0x18) & edi) << 3
int32_t* ecx_5 = *(arg1 + 0xc) + edx_1

if (ecx_5[1] == eax_4)
    if (*ecx_5 != eax_4)
        ecx_5[1] = eax_4[1]
    else
        *ecx_5 = *(arg1 + 4)
        *(*(arg1 + 0xc) + edx_1 + 4) = *(arg1 + 4)
    
    eax_4 = arg3
else if (*ecx_5 == eax_4)
    *ecx_5 = *eax_4
    eax_4 = arg3

sub_44b7f0(arg1 + 4, arg2, eax_4)
return arg2
