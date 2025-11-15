// 函数: sub_61b140
// 地址: 0x61b140
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg4
void* edx = arg1
void* ecx = nullptr
void* var_8 = edx
uint32_t result = *(ebx + 0x4c)
uint32_t result_1 = result
arg4 = nullptr

if (result s> 0)
    uint32_t* esi_1 = arg2
    int32_t edi_1 = result * 0x70
    void* ebp_2 = arg3 - esi_1
    
    while (true)
        switch (*(*(ebx + 0x60) + edi_1 - 0x3c))
            case 0, 0xa, 0xb, 0x12, 0x13, 0x14, 0x15, 0x2f, 0x33, 0x43, 0x50, 0x59, 0x5c, 0x5d
                *esi_1 = *(esi_1 + ebp_2)
            label_61b1ad:
                ecx += 1
                edi_1 -= 0x70
                esi_1 = &esi_1[1]
                arg4 = ecx
                
                if (ecx s>= result_1)
                    break
                
                continue
            case 0xc, 0xd, 0x3f, 0x4f
                result = sub_6213c0(edx + 0x148, *(esi_1 + ebp_2))
                *esi_1 = result
                
                if (result s>= 0)
                    ecx = arg4
                    edx = var_8
                    goto label_61b1ad
        
        result.b = 0
        return result

result.b = 1
return result
