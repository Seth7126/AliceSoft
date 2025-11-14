// 函数: sub_4ad3f0
// 地址: 0x4ad3f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_1 = *(arg1 + 8)
*(arg1 + 0x54) = eax_1
*(arg1 + 0x64) = eax_1
*(arg1 + 0x68) = 0
__builtin_memset(arg1 + 0xc, 0, 0x14)
*(arg1 + 0x60) = 0
char* edx = *(arg2 + 4)
uint32_t* result

if (&edx[1] u<= *(arg2 + 8))
    result.b = *edx == 1
    *(arg1 + 0x68) = result.b
    *(arg2 + 4) += 1
    void* edx_1 = *(arg2 + 4)
    
    if (edx_1 + 1 u<= *(arg2 + 8))
        result.b = *edx_1 == 1
        *(arg1 + 0x23) = result.b
        *(arg2 + 4) += 1
        
        if (sub_468b20(arg2, arg1 + 0x10).b != 0)
            return sub_468b20(arg2, arg1 + 0x14) != 0

result.b = 0
return result
