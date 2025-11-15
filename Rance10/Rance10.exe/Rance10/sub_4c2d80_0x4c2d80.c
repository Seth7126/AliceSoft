// 函数: sub_4c2d80
// 地址: 0x4c2d80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi_1 = neg.d(arg2)
int32_t* ecx = *(arg1 + 0x38)
int32_t* edx = ecx
int32_t result = *(arg1 + 0x3c)

if (ecx != result)
    while (*edx != (sbb.d(esi_1, esi_1, arg2 != 0) & (arg2 - 0xc)))
        edx = &edx[1]
        
        if (edx == result)
            break

if (edx != result)
    int32_t edx_2 = (edx - ecx) s>> 2
    
    if (edx_2 != 0xffffffff)
        *(arg1 + 0x44) += *(*(arg1 + 0x48) + (edx_2 << 2))
        result = *(arg1 + 0x48)
        *(result + (edx_2 << 2)) = 0xffffffff

return result
