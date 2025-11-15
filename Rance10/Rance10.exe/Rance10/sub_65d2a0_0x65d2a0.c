// 函数: sub_65d2a0
// 地址: 0x65d2a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result

if (*(arg1 + 0x110) == 0)
    result = *(arg1 + 0x28)
    
    if ((result == 3 || result == 7) && *(arg1 + 0x24) == 3 && *(arg1 + 0x2c) == 2
            && *(arg1 + 0x64) == 3 && *(arg1 + 0x10c) == 0)
        result = *(arg1 + 0xc4)
        
        if (*(result + 8) == 2 && *(result + 0x60) == 1 && *(result + 0xb8) == 1
                && *(result + 0xc) s<= 2 && *(result + 0x64) == 1 && *(result + 0xbc) == 1)
            int32_t edx_1 = *(arg1 + 0x120)
            
            if (*(result + 0x24) == edx_1 && *(result + 0x7c) == edx_1 && *(result + 0xd4) == edx_1)
                int32_t ecx = *(arg1 + 0x124)
                
                if (*(result + 0x28) == ecx && *(result + 0x80) == ecx && *(result + 0xd8) == ecx)
                    result.b = 1
                    return result

result.b = 0
return result
