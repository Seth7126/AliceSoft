// 函数: sub_42c970
// 地址: 0x42c970
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = *(arg1 + 0x10)
void* result

if (edi u> *(arg1 + 8))
    while (true)
        char* esi_1 = *(arg1 + 8)
        void* edx
        edx.b = *esi_1
        
        if (edx.b u< 0x81)
            if ((edx + 0x20).b u> 0xf)
                goto label_42c9a1
            
            *(arg1 + 8) = &esi_1[1]
        else if (edx.b u<= 0x9f || (edx + 0x20).b u<= 0xf)
            *(arg1 + 8) = &esi_1[1]
        else
        label_42c9a1:
            
            if (edx.b == 0xa)
                *(arg1 + 8) += 1
                break
        
        *(arg1 + 8) += 1
        
        if (edi u<= *(arg1 + 8))
            result.b = 1
            return result

result.b = 1
return result
