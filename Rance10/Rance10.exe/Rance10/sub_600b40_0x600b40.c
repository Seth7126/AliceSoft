// 函数: sub_600b40
// 地址: 0x600b40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi_1 = arg2[1] - *arg2
uint32_t result
int32_t edx
edx:result = muls.dp.d(0x92492493, esi_1)
int32_t edx_2 = (edx + esi_1) s>> 6
int32_t edi_3 = (edx_2 u>> 0x1f) - 1 + edx_2

if ((edx_2 u>> 0x1f) - 1 + edx_2 s>= 0)
    int32_t esi_2 = edi_3 * 0x70
    
    while (true)
        switch (*(*arg2 + esi_2 + 0x34))
            case 0, 0xa, 0xb, 0x2f, 0x52, 0x5c
            label_600b96:
                esi_2 -= 0x70
                int32_t temp1_1 = edi_3
                edi_3 -= 1
                
                if (temp1_1 - 1 s< 0)
                    break
                
                continue
            case 0xc, 0xd, 0x12, 0x13, 0x14, 0x15, 0x33, 0x3f, 0x43, 0x4f, 0x50, 0x59, 0x5d
                result = *(arg3 + (edi_3 << 2))
                
                if (result == 0xffffffff)
                    goto label_600b96
                
                if (sub_621db0(arg4, result).b != 0)
                    goto label_600b96
        
        result.b = 0
        return result

result.b = 1
return result
