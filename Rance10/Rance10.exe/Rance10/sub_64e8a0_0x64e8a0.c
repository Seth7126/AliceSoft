// 函数: sub_64e8a0
// 地址: 0x64e8a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg1
void* esi = ebx[0x66]
*(esi + 0x70) = *ebx[6]
*(esi + 0x74) = *(ebx[6] + 4)

if (ebx[0x38] != 0 && *(esi + 0x24) == 0)
    sub_64e690(esi, (*(esi + 0x28)).b)

int32_t ebp = 0
int32_t edx_2 = ebx[0x58]
int32_t ecx_2 = ebx[0x5a]
int32_t edi = ebx[0x5c]
int32_t eax_5 = *arg2
int32_t eax_6 = ebx[0x57]
int32_t var_8 = edx_2
int32_t var_c = ecx_2
int32_t var_4 = edi
int32_t var_10 = eax_6

if (eax_6 s<= edx_2)
    int32_t ebx_1 = eax_5
    
    do
        int32_t edi_1 = sx.d(*(ebx_1 + (*(edi + (eax_6 << 2)) << 1)))
        
        if (edi_1 != 0)
            int32_t* edi_3
            
            if (edi_1 s>= 0)
                edi_3 = edi_1 s>> ecx_2.b
                arg2 = edi_3
            else
                edi_3 = neg.d(edi_1) s>> ecx_2.b
                arg2 = not.d(edi_3)
            
            if (edi_3 != 0)
                if (*(esi + 0x80) u> 0)
                    sub_64e520(esi)
                
                if (ebp s> 0xf)
                    int32_t i_2 = ((ebp - 0x10) u>> 4) + 1
                    ebp += neg.d(i_2) << 4
                    int32_t i
                    
                    do
                        int32_t edx_3 = *(esi + 0x7c)
                        
                        if (*(esi + 0x6c) == 0)
                            void* edx_4 = *(esi + (edx_3 << 2) + 0x3c)
                            char* eax_14 = sx.d(*(edx_4 + 0x4f0))
                            sub_64e3c0(eax_14, *(edx_4 + 0x3c0), esi, eax_14)
                        else
                            void* eax_13 = *(esi + (edx_3 << 2) + 0x5c)
                            *(eax_13 + 0x3c0) += 1
                        
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
                
                int32_t i_1 = edi_3 s>> 1
                uint32_t ebx_4 = 1
                
                if (i_1 != 0)
                    do
                        ebx_4 += 1
                        i_1 s>>= 1
                    while (i_1 != 0)
                    
                    if (ebx_4 s> 0xa)
                        *(*arg1 + 0x14) = 6
                        (**arg1)(arg1)
                
                int32_t edx_6 = *(esi + 0x7c)
                int32_t ebp_2 = (ebp << 4) + ebx_4
                char* eax_18
                
                if (*(esi + 0x6c) == 0)
                    int32_t edx_7 = *(esi + (edx_6 << 2) + 0x3c)
                    char* eax_19 = sx.d(*(edx_7 + ebp_2 + 0x400))
                    eax_18 = sub_64e3c0(eax_19, *(edx_7 + (ebp_2 << 2)), esi, eax_19)
                else
                    eax_18 = *(esi + (edx_6 << 2) + 0x5c)
                    *(eax_18 + (ebp_2 << 2)) += 1
                
                sub_64e3c0(eax_18, arg2, esi, ebx_4)
                ecx_2 = var_c
                edx_2 = var_8
                ebp = 0
                ebx_1 = eax_5
            else
                ebp += 1
        else
            ebp += 1
        
        edi = var_4
        eax_6 = var_10 + 1
        var_10 = eax_6
    while (eax_6 s<= edx_2)
    
    if (ebp s> 0)
        *(esi + 0x80) += 1
        
        if (*(esi + 0x80) == 0x7fff)
            sub_64e520(esi)
    
    ebx = arg1

*ebx[6] = *(esi + 0x70)
*(ebx[6] + 4) = *(esi + 0x74)
int32_t result = ebx[0x38]

if (result != 0)
    if (*(esi + 0x24) == 0)
        *(esi + 0x24) = result
        *(esi + 0x28) = (*(esi + 0x28) + 1) & 7
    
    *(esi + 0x24) -= 1

result.b = 1
return result
