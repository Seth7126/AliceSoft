// 函数: sub_5cfdd0
// 地址: 0x5cfdd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
int32_t ebx = 0
void* var_4 = arg1
int32_t ebp = *(arg3 + 0x28)
uint32_t result

if (ebp s> 0)
    int32_t esi_3 = ebp * 0x28
    
    while (true)
        switch (*(*(arg3 + 0x3c) + esi_3 - 0x10))
            case 0, 0xa, 0xb, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1b, 0x1f, 0x20, 
                    0x2f, 0x33, 0x34
                goto label_5cfe26
            case 0xc
                if (sub_5d5e80(arg1 + 0x16c, *(arg2 + (ebx << 2))).b != 0)
                    arg1 = var_4
                label_5cfe26:
                    ebx += 1
                    esi_3 -= 0x28
                    
                    if (ebx s>= ebp)
                        break
                    
                    continue
        
        result.b = 0
        return result

result.b = 1
return result
