// 函数: sub_4ab5b0
// 地址: 0x4ab5b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
void* result = arg1
void* result_1 = result
void* esi = *(result + 4)
int32_t edi = *(result + 8)

if (esi != edi)
    int32_t* ecx
    int32_t edx_1
    
    while (true)
        ecx = *esi
        edx_1 = *(esi + 4)
        
        if (ecx != edx_1)
            break
        
    label_4ab606:
        esi += 0x10
        
        if (esi == edi)
            return result
    
    while (true)
        result = ecx[1]
        int32_t* ebx_1 = *ecx
        
        if (result != ebx_1)
            while (*ebx_1 != arg2)
                ebx_1 = &ebx_1[1]
                
                if (ebx_1 == result)
                    break
            
            if (result != ebx_1)
                sub_4b00d0(esi, arg2)
                result = *esi
                
                if (result == *(esi + 4))
                    int32_t var_18_2 = 0
                    int32_t ecx_4 = sub_4ac500(result, *(result_1 + 8), esi + 0x10, esi)
                    void* edx_3 = *(result_1 + 8)
                    int32_t var_18_3 = 0
                    int32_t var_1c_2 = ecx_4
                    result = sub_4ac590(edx_3 - 0x10, edx_3)
                    *(result_1 + 8) -= 0x10
                
                break
        
        ecx = &ecx[3]
        
        if (ecx == edx_1)
            goto label_4ab606

return result
