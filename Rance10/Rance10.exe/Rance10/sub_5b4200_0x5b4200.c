// 函数: sub_5b4200
// 地址: 0x5b4200
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 + 0x18)
int32_t* edi = *(arg1 + 0x14)
int32_t result_1 = result
int32_t* var_14 = edi

while (edi != result)
    void* ecx = *edi
    int32_t esi_1 = *(ecx + 0x20)
    void* ecx_1 = *(ecx + 0x1c)
    int32_t var_c_1 = esi_1
    
    if (ecx_1 != esi_1)
        do
            int32_t edx_1 = *(ecx_1 + 0x10)
            
            for (int32_t* i = *(ecx_1 + 0xc); i != edx_1; i = &i[3])
                int32_t ebp_1 = 0
                int32_t ebx_3 = (*(arg1 + 0x24) - *(arg1 + 0x20)) s>> 6
                
                if (ebx_3 s<= 0)
                label_5b4274:
                    ebp_1 = 0xffffffff
                else
                    int32_t ebx_5 = *(arg1 + 0x20) + 0x1c
                    
                    while (true)
                        esi_1 = var_c_1
                        
                        if (*ebx_5 == *i)
                            break
                        
                        ebp_1 += 1
                        ebx_5 += 0x40
                        
                        if (ebp_1 s>= ebx_3)
                            goto label_5b4274
                
                i[2] = ebp_1
            
            ecx_1 += 0x18
        while (ecx_1 != esi_1)
        
        edi = var_14
        result = result_1
    
    edi = &edi[1]
    var_14 = edi

return result
