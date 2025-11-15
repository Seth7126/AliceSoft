// 函数: sub_61b250
// 地址: 0x61b250
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
int32_t ebx = 0
void* var_4 = arg1
int32_t ebp = *(arg3 + 0x4c)
uint32_t result

if (ebp s> 0)
    int32_t esi_1 = ebp * 0x70
    
    while (true)
        switch (*(*(arg3 + 0x60) + esi_1 - 0x3c))
            case 0, 0xa, 0xb, 0x12, 0x13, 0x14, 0x15, 0x2f, 0x33, 0x43, 0x50, 0x59, 0x5c, 0x5d
                goto label_61b2a4
            case 0xc, 0xd, 0x3f, 0x4f
                if (sub_621db0(arg1 + 0x148, *(arg2 + (ebx << 2))).b != 0)
                    arg1 = var_4
                label_61b2a4:
                    ebx += 1
                    esi_1 -= 0x70
                    
                    if (ebx s>= ebp)
                        break
                    
                    continue
        
        result.b = 0
        return result

result.b = 1
return result
