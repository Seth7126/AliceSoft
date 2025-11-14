// 函数: sub_4398b0
// 地址: 0x4398b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = *(arg1 + 0x10)
void* result

if (esi u> *(arg1 + 8))
    while (true)
        char* result_1 = *(arg1 + 8)
        result.b = *result_1
        
        if ((result.b u>= 0x81 && result.b u<= 0x9f) || (result.b u>= 0xe0 && result.b u<= 0xef))
            result = result_1
            
            if (*result == 0x81 && *(result + 1) == 0x40)
                *(arg1 + 8) = result + 2
            
            break
        
        if (sx.d(result.b) - 9 u> 0x17)
            break
        
        switch (result.b)
            case 9, 0xa, 0xd, 0x20
                *(arg1 + 8) = &result_1[1]
                
                if (esi u> &result_1[1])
                    continue
                
                result.b = 1
                return result
            case 0xb, 0xc, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 
                    0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f
                break

result.b = 1
return result
