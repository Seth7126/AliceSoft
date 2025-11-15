// 函数: sub_585590
// 地址: 0x585590
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t edi = arg2
uint32_t* result = *(edi + 4)

if (result + 1 u<= *(edi + 8))
    bool cond:0_1 = *result == 1
    *(edi + 4) = result + 1
    result.b = cond:0_1
    *(arg1 + 0x10c) = result.b
    result = *(edi + 4)
    
    if (result + 1 u<= *(edi + 8))
        bool cond:1_1 = *result == 1
        *(edi + 4) = result + 1
        result.b = cond:1_1
        *(arg1 + 0x10d) = result.b
        result = *(edi + 4)
        
        if (result + 1 u<= *(edi + 8))
            bool cond:2_1 = *result == 1
            *(edi + 4) = result + 1
            result.b = cond:2_1
            *(arg1 + 0x10e) = result.b
            result = *(edi + 4) + 1
            
            if (result u<= *(edi + 8))
                *(edi + 4) = result
                
                if (sub_61ec90(edi, &arg2).b != 0)
                    sub_42c9c0(arg1 + 0x110, arg2)
                    return sub_6c9470(edi, arg1 + 0x110) != 0

result.b = 0
return result
