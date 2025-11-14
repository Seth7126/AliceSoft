// 函数: sub_63a5b0
// 地址: 0x63a5b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t var_c = ecx
void* ebx = arg2[5]
int32_t eax
sub_63a210(eax, ebx, arg1, arg2)

if (arg3 == 0)
    _memset(arg4, 0, arg2[*(arg1 + 0x1c) + 3] << 2)
    return 0

uint32_t eax_1 = arg2[1]
int32_t ecx_2 = *(arg1 + 0x1c)
int32_t xmm0_1 = _mm_cvtepi32_ps(zx.o(*(ebx + 0x10)))
sub_63e240(eax_1, *(arg2[2] + (ecx_2 << 2)), arg4, arg2[ecx_2 + 3], *arg2, arg3, eax_1, 
    *(arg3 + (eax_1 << 2)), xmm0_1)
return 1
