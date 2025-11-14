// 函数: sub_4dfc00
// 地址: 0x4dfc00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t var_4 = ecx
void* esi = data_75d530
int32_t* result
int32_t edi_1

if (*(esi + 4) != 0)
label_4dfc38:
    result, ecx = sub_5e23a0(*(esi + 4))
    
    if (result.b != 0)
        result.b = 1
        return result
    
    esi = data_75d530
    edi_1 = data_75d534
else
    edi_1 = data_75d534
    
    if (edi_1 != 0)
        int32_t var_10_1 = ecx
        result, ecx = sub_6203f0()
        
        if (result != 0)
            result, ecx = (**result)(&data_6ecca8)
            *(esi + 4) = result
            
            if (result != 0)
                goto label_4dfc38
            
            esi = data_75d530
            edi_1 = data_75d534

if (*(esi + 4) != 0)
label_4dfc76:
    result.b = *(*(esi + 4) + 0x29)
    
    if (result.b != 0)
        result.b = 1
        return result
else if (edi_1 != 0)
    int32_t var_10_2 = ecx
    result = sub_6203f0()
    
    if (result != 0)
        result = (**result)(&data_6ecca8)
        *(esi + 4) = result
        
        if (result != 0)
            goto label_4dfc76

result.b = 0
return result
