// 函数: sub_45d4f0
// 地址: 0x45d4f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = (*(*arg2 + 8))(0, *(arg1 + 0xc) - 1)
int32_t eax_4 = (*(*arg2 + 0x1c))()
int32_t edi_1 = *(arg1 + 8)
int32_t i = 0
int32_t* result = neg.d(eax_4) - (edi_1 << 2)
void* ecx_4 = arg3 + 0x12
arg2 = result

if (*(arg1 + 0xc) s> 0)
    do
        int32_t edx_1 = 0
        
        if (edi_1 s> 0)
            do
                edx_1 += 1
                *esi = *(ecx_4 + 2)
                *(esi + 1) = *(ecx_4 + 1)
                *(esi + 2) = *ecx_4
                char eax_9 = *(ecx_4 + 3)
                ecx_4 += 4
                *(esi + 3) = eax_9
                esi += 4
                edi_1 = *(arg1 + 8)
            while (edx_1 s< edi_1)
            
            result = arg2
        
        i += 1
        esi += result
    while (i s< *(arg1 + 0xc))

return result
