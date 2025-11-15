// 函数: sub_65e3e0
// 地址: 0x65e3e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx
void* var_4 = ecx
void* ebx = arg1
void* ebp = *(ebx + 0x1b8)

if (*(ebp + 0x5c) s>= *(ebx + 0x11c))
    void* edx_1 = *(ebx + 0xc4)
    int32_t i = 0
    arg1 = edx_1
    
    if (*(ebx + 0x24) s> 0)
        void* esi_1 = ebp + 0x64
        void* eax_1 = 0xffffff9c - ebp
        var_4 = eax_1
        
        do
            (*(esi_1 - 0x30))(ebx, edx_1, *(arg2 + (i << 2)) + ((*arg3 * *esi_1) << 2), 
                eax_1 + 0xc + esi_1 + ebp)
            i += 1
            eax_1 = var_4
            edx_1 = arg1 + 0x58
            arg1 = edx_1
            esi_1 += 4
        while (i s< *(ebx + 0x24))
    
    *(ebp + 0x5c) = 0

int32_t edx_4 = *(ebx + 0x11c) - *(ebp + 0x5c)

if (edx_4 u> *(ebp + 0x60))
    edx_4 = *(ebp + 0x60)

int32_t ecx_3 = *arg5
int32_t edi_2 = arg6 - ecx_3

if (edx_4 u<= edi_2)
    edi_2 = edx_4

(*(*(ebx + 0x1bc) + 4))(ebx, ebp + 0xc, *(ebp + 0x5c), arg4 + (ecx_3 << 2), edi_2)
*arg5 += edi_2
*(ebp + 0x5c) += edi_2
*(ebp + 0x60) -= edi_2
int32_t* result = *(ebp + 0x5c)

if (result s>= *(ebx + 0x11c))
    result = arg3
    *result += 1

return result
