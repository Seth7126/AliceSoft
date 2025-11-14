// 函数: sub_4601a0
// 地址: 0x4601a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = *(arg1 + 0xc)
void* result

if (esi u> *(arg1 + 4))
    while (true)
        char* edx_1 = *(arg1 + 4)
        result.b = *edx_1
        
        if ((result.b u>= 0x81 && result.b u<= 0x9f) || (result.b u>= 0xe0 && result.b u<= 0xef))
            *(arg1 + 4) = &edx_1[1]
        else if (result.b == 0xa)
            *(arg1 + 4) += 1
            break
        
        *(arg1 + 4) += 1
        
        if (esi u<= *(arg1 + 4))
            result.b = 1
            return result

result.b = 1
return result
