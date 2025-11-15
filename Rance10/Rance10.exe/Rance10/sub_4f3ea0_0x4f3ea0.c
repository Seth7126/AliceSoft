// 函数: sub_4f3ea0
// 地址: 0x4f3ea0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = arg2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ebp - 1)
int32_t esi_1 = (eax_1 - edx) s>> 1

while (arg4 s< ebp)
    void* edx_1 = *arg5
    void* eax_4 = *(arg3 + (esi_1 << 2))
    int32_t edi_1 = *(edx_1 + 4)
    int32_t ecx = *(eax_4 + 4)
    
    if (ecx s>= edi_1)
        if (ecx s> edi_1)
            break
        
        int32_t ecx_1 = *(eax_4 + 8)
        int32_t edi_2 = *(edx_1 + 8)
        
        if (ecx_1 s>= edi_2)
            if (ecx_1 s> edi_2)
                break
            
            if (*(eax_4 + 0xc) s>= *(edx_1 + 0xc))
                break
    
    *(arg3 + (ebp << 2)) = eax_4
    int32_t eax_6
    int32_t edx_2
    edx_2:eax_6 = sx.q(esi_1 - 1)
    ebp = esi_1
    esi_1 = (eax_6 - edx_2) s>> 1

int32_t result = *arg5
*(arg3 + (ebp << 2)) = result
return result
