// 函数: ??$translate_text_mode_nolock@_W@@YAHHQA_WI@Z
// 地址: 0x712851
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_28 = edi
int32_t ecx_1 = arg1 s>> 6
int32_t edi_1 = (arg1 & 0x3f) * 0x30
int32_t eax_2 = (&data_7fc718)[ecx_1]
HANDLE hFile = *(eax_2 + edi_1 + 0x18)
int16_t* edx = arg2

if (arg3 == 0 || *edx != 0xa)
    *(eax_2 + edi_1 + 0x28) &= 0xfb
else
    *(eax_2 + edi_1 + 0x28) |= 4

void* eax_3 = &edx[arg3]
int16_t* ebx = edx
int16_t* esi_1 = edx

if (edx u< eax_3)
    void* eax_4 = &edx[1]
    
    do
        uint32_t ecx_2 = zx.d(*ebx)
        int16_t var_10_1 = ecx_2.w
        
        if (ecx_2 == 0x1a)
            int32_t ecx_6 = (&data_7fc718)[ecx_1]
            eax_4.b = *(ecx_6 + edi_1 + 0x28)
            
            if ((eax_4.b & 0x40) != 0)
                ecx_6.w = *ebx
                *esi_1 = ecx_6.w
                esi_1 = &esi_1[1]
            else
                eax_4.b |= 2
                *(ecx_6 + edi_1 + 0x28) = eax_4.b
            
            break
        
        edx = arg2
        
        if (var_10_1 != 0xd)
            ebx = &ebx[1]
            *esi_1 = var_10_1
            esi_1 = &esi_1[1]
            eax_4 += 2
        else if (eax_4 u>= eax_3)
            ebx = &ebx[1]
            uint32_t numberOfBytesRead
            int16_t buffer
            
            if (ReadFile(hFile, &buffer, 2, &numberOfBytesRead, nullptr) == 0
                || numberOfBytesRead == 0)
            label_7129cc:
                *esi_1 = 0xd
                esi_1 = &esi_1[1]
                eax_4 += 2
                edx = arg2
            else if ((*((&data_7fc718)[ecx_1] + edi_1 + 0x28) & 0x48) == 0)
                if (buffer == 0xa)
                    edx = arg2
                
                if (buffer != 0xa || esi_1 != edx)
                    __lseeki64_nolock(arg1, 0xfffffffe, 0xffffffff, FILE_CURRENT)
                    
                    if (buffer != 0xa)
                        goto label_7129cc
                    
                    eax_4 += 2
                    edx = arg2
                else
                    *esi_1 = 0xa
                    esi_1 = &esi_1[1]
                    eax_4 += 2
            else
                int16_t buffer_1 = buffer
                
                if (buffer_1 != 0xa)
                    *esi_1 = 0xd
                    *((&data_7fc718)[ecx_1] + edi_1 + 0x2a) = buffer_1.b
                    *((&data_7fc718)[ecx_1] + edi_1 + 0x2b) = buffer_1:1.b
                    *((&data_7fc718)[ecx_1] + edi_1 + 0x2c) = 0xa
                else
                    *esi_1 = 0xa
                
                eax_4 += 2
                edx = arg2
        else
            edx = arg2
            
            if (*eax_4 != 0xa)
                *esi_1 = 0xd
                ebx = &ebx[1]
                esi_1 = &esi_1[1]
                eax_4 += 2
                edx = arg2
            else
                ebx = &ebx[2]
                *esi_1 = 0xa
                eax_4 += 4
                esi_1 = &esi_1[1]
    while (ebx u< eax_3)

return (esi_1 - edx) & 0xfffffffe
