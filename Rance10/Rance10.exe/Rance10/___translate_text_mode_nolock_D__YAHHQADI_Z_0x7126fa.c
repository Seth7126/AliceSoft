// 函数: ??$translate_text_mode_nolock@D@@YAHHQADI@Z
// 地址: 0x7126fa
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* edx = arg2
int32_t ecx_1 = arg1 s>> 6
int32_t edi
int32_t var_28 = edi
int32_t edi_1 = (arg1 & 0x3f) * 0x30
int32_t eax_2 = (&data_7fc718)[ecx_1]
HANDLE hFile = *(eax_2 + edi_1 + 0x18)

if (arg3 == 0 || *edx != 0xa)
    *(eax_2 + edi_1 + 0x28) &= 0xfb
else
    *(eax_2 + edi_1 + 0x28) |= 4

void* eax_3 = edx + arg3
char* ebx = edx
char* esi = edx

if (edx u< eax_3)
    void* eax_4 = &edx[1]
    void* ecx_2
    
    do
        ecx_2.b = *ebx
        
        if (ecx_2.b == 0x1a)
            int32_t ecx_5 = (&data_7fc718)[ecx_1]
            eax_4.b = *(ecx_5 + edi_1 + 0x28)
            
            if ((eax_4.b & 0x40) != 0)
                ecx_5.b = *ebx
                *esi = ecx_5.b
                esi = &esi[1]
            else
                eax_4.b |= 2
                *(ecx_5 + edi_1 + 0x28) = eax_4.b
            
            break
        
        if (ecx_2.b == 0xd)
            ecx_2 = eax_3
            
            if (eax_4 u>= ecx_2)
                ebx = &ebx[1]
                uint32_t numberOfBytesRead
                uint8_t buffer
                
                if (ReadFile(hFile, &buffer, 1, &numberOfBytesRead, nullptr) == 0
                    || numberOfBytesRead == 0)
                label_712810:
                    *esi = 0xd
                    esi = &esi[1]
                    edx = arg2
                else if ((*((&data_7fc718)[ecx_1] + edi_1 + 0x28) & 0x48) == 0)
                    if (buffer == 0xa)
                        edx = arg2
                    
                    if (buffer != 0xa || esi != edx)
                        __lseeki64_nolock(arg1, 0xffffffff, 0xffffffff, FILE_CURRENT)
                        
                        if (buffer != 0xa)
                            goto label_712810
                        
                        edx = arg2
                    else
                        *esi = 0xa
                        esi = &esi[1]
                else
                    uint8_t buffer_1 = buffer
                    
                    if (buffer_1 != 0xa)
                        *esi = 0xd
                        *((&data_7fc718)[ecx_1] + edi_1 + 0x2a) = buffer_1
                    else
                        *esi = buffer_1
                    
                    edx = arg2
                
                eax_4 += 1
                ecx_2 = eax_3
            else if (*eax_4 != 0xa)
                *esi = 0xd
                esi = &esi[1]
                ebx = &ebx[1]
                eax_4 += 1
            else
                ebx = &ebx[2]
                *esi = 0xa
                eax_4 += 2
                esi = &esi[1]
        else
            *esi = ecx_2.b
            esi = &esi[1]
            ebx = &ebx[1]
            eax_4 += 1
            ecx_2 = eax_3
    while (ebx u< ecx_2)

return esi - edx
