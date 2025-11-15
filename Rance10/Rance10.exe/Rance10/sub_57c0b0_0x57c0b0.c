// 函数: sub_57c0b0
// 地址: 0x57c0b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result = *arg1
int32_t ecx = arg1[1]
int32_t* result_1 = result
int32_t var_4 = ecx

while (result != ecx)
    void* edi_1 = *result
    int32_t* edx_1 = *(edi_1 + 0x55c)
    
    if (edx_1 != 0)
        if ((*(*edx_1 + 0x14))().b != 0)
            goto label_57c14d
        
        result = result_1
        ecx = var_4
    
    int32_t* esi_1 = *(edi_1 + 0x568)
    int32_t edi_2 = *(edi_1 + 0x56c)
    
    if (esi_1 != edi_2)
        do
            *esi_1
            
            if (sub_57c0b0().b != 0)
                goto label_57c14d
            
            esi_1 = &esi_1[1]
        while (esi_1 != edi_2)
        
        result = result_1
        ecx = var_4
    
    result = &result[1]
    result_1 = result

int32_t* esi_2 = arg1[7]
int32_t edi_3 = arg1[8]

if (esi_2 == edi_3)
label_57c144:
    result.b = 0
    return result

while (true)
    *esi_2
    
    if (sub_57c0b0().b != 0)
        break
    
    esi_2 = &esi_2[1]
    
    if (esi_2 == edi_3)
        goto label_57c144

label_57c14d:
result.b = 1
return result
