// 函数: sub_46d150
// 地址: 0x46d150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = *(arg1 + 0xc)
void* result

if (edi u> *(arg1 + 4))
    while (true)
        char* esi_1 = *(arg1 + 4)
        void* edx
        edx.b = *esi_1
        
        if (edx.b u< 0x81)
            if ((edx + 0x20).b u> 0xf)
                goto label_46d181
            
            *(arg1 + 4) = &esi_1[1]
        else if (edx.b u<= 0x9f || (edx + 0x20).b u<= 0xf)
            *(arg1 + 4) = &esi_1[1]
        else
        label_46d181:
            
            if (edx.b == 0xa)
                *(arg1 + 4) += 1
                break
        
        *(arg1 + 4) += 1
        
        if (edi u<= *(arg1 + 4))
            result.b = 1
            return result

result.b = 1
return result
