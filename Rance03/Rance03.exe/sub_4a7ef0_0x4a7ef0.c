// 函数: sub_4a7ef0
// 地址: 0x4a7ef0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edx = *arg3
void* edi = *arg2
int32_t ecx = *(edx + 4)
int32_t eax = *(edi + 4)

if (eax s< ecx)
    *arg2 = edx
    *arg3 = edi
else if (eax s<= ecx)
    int32_t eax_1 = *(edi + 8)
    int32_t ecx_1 = *(edx + 8)
    
    if (eax_1 s< ecx_1)
        *arg2 = edx
        *arg3 = edi
    else if (eax_1 s<= ecx_1 && *(edi + 0xc) s< *(edx + 0xc))
        *arg2 = edx
        *arg3 = edi

void* edx_1 = *arg2
void* ecx_2 = *arg4
int32_t edi_1 = *(edx_1 + 4)
int32_t result = *(ecx_2 + 4)

if (result s< edi_1)
label_4a7f4b:
    *arg4 = edx_1
    *arg2 = ecx_2
    void* edx_2 = *arg3
    result = *(ecx_2 + 4)
    int32_t edi_3 = *(edx_2 + 4)
    
    if (result s< edi_3)
        *arg2 = edx_2
        *arg3 = ecx_2
    else if (result s<= edi_3)
        result = *(ecx_2 + 8)
        int32_t edi_4 = *(edx_2 + 8)
        
        if (result s< edi_4)
            *arg2 = edx_2
            *arg3 = ecx_2
        else if (result s<= edi_4)
            result = *(ecx_2 + 0xc)
            
            if (result s< *(edx_2 + 0xc))
                *arg2 = edx_2
                *arg3 = ecx_2
else if (result s<= edi_1)
    result = *(ecx_2 + 8)
    int32_t edi_2 = *(edx_1 + 8)
    
    if (result s< edi_2)
        goto label_4a7f4b
    
    if (result s<= edi_2)
        result = *(ecx_2 + 0xc)
        
        if (result s< *(edx_1 + 0xc))
            goto label_4a7f4b

return result
