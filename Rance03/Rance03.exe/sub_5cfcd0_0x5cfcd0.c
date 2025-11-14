// 函数: sub_5cfcd0
// 地址: 0x5cfcd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx = arg4
void* ecx = nullptr
uint32_t result = *(ebx + 0x28)
uint32_t result_1 = result
arg4 = nullptr

if (result s> 0)
    uint32_t* esi_1 = arg2
    int32_t edi_2 = result * 0x28
    void* ebp_2 = arg3 - esi_1
    
    while (true)
        switch (*(*(ebx + 0x3c) + edi_2 - 0x10))
            case 0, 0xa, 0xb, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1b, 0x1f, 0x20, 
                    0x2f, 0x33, 0x34
                result = *(esi_1 + ebp_2)
            label_5cfd51:
                ecx += 1
                *esi_1 = result
                edi_2 -= 0x28
                arg4 = ecx
                esi_1 = &esi_1[1]
                
                if (ecx s>= result_1)
                    break
                
                continue
            case 0xc
                int32_t edx_1 = *(esi_1 + ebp_2)
                
                if (edx_1 u< (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2)
                    result = *(*(arg1 + 0x174) + (edx_1 << 2))
                    
                    if (result != 0)
                        result = sub_5d6330(arg1 + 0x16c, result)
                        
                        if (result s>= 0)
                            ecx = arg4
                            goto label_5cfd51
        
        result.b = 0
        return result

result.b = 1
return result
