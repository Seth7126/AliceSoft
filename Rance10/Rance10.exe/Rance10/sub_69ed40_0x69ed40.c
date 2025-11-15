// 函数: sub_69ed40
// 地址: 0x69ed40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t ebx = arg2
int32_t edx = *(arg1 + 0x2c)
int32_t esi = *(arg1 + 0x6c)
char* edi = *(arg1 + 0x78)
uint32_t i_1 = *(arg1 + 0x7c)
char* eax_2 = *(arg1 + 0x38) + esi
char* var_10 = eax_2
int32_t var_c

if (esi u<= edx - 0x106)
    var_c = 0
else
    var_c = esi - edx + 0x106

uint32_t ecx
ecx.b = *(edi + eax_2 - 1)
char var_16 = ecx.b
void* esi_4 = &eax_2[0x102]
ecx.b = *(edi + eax_2)
char var_15 = ecx.b

if (edi u>= *(arg1 + 0x8c))
    i_1 = *(arg1 + 0x7c) u>> 2

int32_t edx_1 = *(arg1 + 0x90)

if (edx_1 u> *(arg1 + 0x74))
    edx_1 = *(arg1 + 0x74)

uint32_t i

do
    ecx.b = var_15
    char* edx_3 = *(arg1 + 0x38) + ebx
    
    if (*(edx_3 + edi) == ecx.b)
        ecx.b = var_16
        
        if (*(edx_3 + edi - 1) == ecx.b)
            ecx.b = *edx_3
            
            if (ecx.b == *eax_2)
                ecx.b = edx_3[1]
                
                if (ecx.b == eax_2[1])
                    void* eax_3 = &eax_2[2]
                    char* edx_4 = &edx_3[2]
                    
                    do
                        ecx.b = *(eax_3 + 1)
                        eax_3 += 1
                        
                        if (ecx.b != edx_4[1])
                            break
                        
                        ecx.b = *(eax_3 + 1)
                        eax_3 += 1
                        
                        if (ecx.b != edx_4[2])
                            break
                        
                        ecx.b = *(eax_3 + 1)
                        eax_3 += 1
                        
                        if (ecx.b != edx_4[3])
                            break
                        
                        ecx.b = *(eax_3 + 1)
                        eax_3 += 1
                        
                        if (ecx.b != edx_4[4])
                            break
                        
                        ecx.b = *(eax_3 + 1)
                        eax_3 += 1
                        
                        if (ecx.b != edx_4[5])
                            break
                        
                        ecx.b = *(eax_3 + 1)
                        eax_3 += 1
                        
                        if (ecx.b != edx_4[6])
                            break
                        
                        ecx.b = *(eax_3 + 1)
                        eax_3 += 1
                        
                        if (ecx.b != edx_4[7])
                            break
                        
                        ecx.b = *(eax_3 + 1)
                        eax_3 += 1
                        edx_4 = &edx_4[8]
                        
                        if (ecx.b != *edx_4)
                            break
                    while (eax_3 u< esi_4)
                    
                    eax_2 = var_10
                    
                    if (eax_3 - esi_4 + 0x102 s> edi)
                        edi = eax_3 - esi_4 + 0x102
                        *(arg1 + 0x70) = ebx
                        
                        if (eax_3 - esi_4 + 0x102 s>= edx_1)
                            break
                        
                        edx_4.b = *(eax_3 - esi_4 + 0x102 + eax_2 - 1)
                        char* ecx_2
                        ecx_2.b = *(eax_3 - esi_4 + 0x102 + eax_2)
                        var_16 = edx_4.b
                        var_15 = ecx_2.b
    
    ebx = zx.d(*(*(arg1 + 0x40) + ((*(arg1 + 0x34) & ebx) << 1)))
    
    if (ebx u<= var_c)
        break
    
    i = i_1
    i_1 -= 1
while (i != 1)
char* eax_5 = *(arg1 + 0x74)

if (edi u<= eax_5)
    return edi

return eax_5
