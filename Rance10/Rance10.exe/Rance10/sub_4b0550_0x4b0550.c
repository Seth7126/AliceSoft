// 函数: sub_4b0550
// 地址: 0x4b0550
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t ebx = arg2
uint32_t* result = *(ebx + 4)

if (result + 1 u<= *(ebx + 8))
    bool cond:0_1 = *result == 1
    *(ebx + 4) = result + 1
    result.b = cond:0_1
    arg1[3].b = result.b
    result = *(ebx + 4)
    
    if (result + 1 u<= *(ebx + 8))
        bool cond:1_1 = *result == 1
        *(ebx + 4) = result + 1
        result.b = cond:1_1
        *(arg1 + 0xd) = result.b
        result = *(ebx + 4)
        
        if (result + 1 u<= *(ebx + 8))
            bool cond:2_1 = *result == 1
            *(ebx + 4) = result + 1
            result.b = cond:2_1
            *(arg1 + 0xe) = result.b
            result = *(ebx + 4)
            
            if (result + 1 u<= *(ebx + 8))
                bool cond:3_1 = *result == 1
                *(ebx + 4) = result + 1
                result.b = cond:3_1
                arg2 = 0
                *(arg1 + 0xf) = result.b
                
                if (sub_61ec90(ebx, &arg2).b != 0)
                    void* ecx_6 = sub_4b0c30(arg1, arg2)
                    int32_t* i = *arg1
                    
                    for (int32_t edi_1 = arg1[1]; i != edi_1; i = &i[3])
                        uint32_t var_10_1 = ebx
                        char eax
                        eax, ecx_6 = sub_4af870(i, ecx_6)
                        
                        if (eax == 0)
                            return 0
                    
                    return 1

result.b = 0
return result
