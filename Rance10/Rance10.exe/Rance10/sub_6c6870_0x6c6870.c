// 函数: sub_6c6870
// 地址: 0x6c6870
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* result = *(arg1 + 0xc)
int32_t edi = *(arg1 + 0x10)

if (result u< edi)
    while (true)
        char edx = *result
        
        if (edx u< 0x81)
            if (edx + 0x20 u> 0xf)
                goto label_6c689c
            
            result = &result[2]
        else if (edx u<= 0x9f || edx + 0x20 u<= 0xf)
            result = &result[2]
        else
        label_6c689c:
            
            if (edx == 0xa)
                *(arg1 + 0xc) += 1
                break
            
            result = &result[1]
        
        *(arg1 + 0xc) = result
        
        if (result u>= edi)
            return result

return result
