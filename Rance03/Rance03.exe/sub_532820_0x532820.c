// 函数: sub_532820
// 地址: 0x532820
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg1 + 0x2c)
float xmm1_1 = arg3 f- *(arg1 + 0x24)
int32_t edx = int.d((arg2 f- *(arg1 + 0x1c)) * _mm_cvtepi32_ps(zx.o(eax))
    / (*(arg1 + 0x20) f- *(arg1 + 0x1c)))
int32_t ecx =
    int.d(xmm1_1 * _mm_cvtepi32_ps(zx.o(*(arg1 + 0x30))) / (*(arg1 + 0x28) f- *(arg1 + 0x24)))

if (edx s>= 0 && edx s< eax && ecx s>= 0 && ecx s< *(arg1 + 0x30))
    int32_t ecx_1 = *(arg1 + 0x10)
    int32_t edx_1 = (eax * ecx + edx) * 3
    
    for (int32_t* i = *(ecx_1 + (edx_1 << 2)); i != *(ecx_1 + (edx_1 << 2) + 4); i = &i[1])
        void* result = *i
        
        if (not(*(result + 0x34) * arg2 + *(result + 0x38) * arg3 f+ *(result + 0x3c) f> 0)
                && not(*(result + 0x40) * arg2 + *(result + 0x44) * arg3 f+ *(result + 0x48) f> 0)
                && *(result + 0x4c) * arg2 + *(result + 0x50) * arg3 f+ *(result + 0x54) f<= 0)
            return result

return 0
