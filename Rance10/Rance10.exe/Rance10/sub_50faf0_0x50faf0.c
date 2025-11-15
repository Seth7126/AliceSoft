// 函数: sub_50faf0
// 地址: 0x50faf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
bool cond:0 = *(arg1 + 0x1ac) == 0
void* eax = *(arg1 + 0xa0)
*arg4 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x220))) f+ *(eax + 0x90)
*arg2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x218))) f+ *(eax + 0x94)
int32_t ebp

if (cond:0)
    ebp = 0
else
    ebp = (*sub_4ef140(*(arg1 + 0xac)))->vFunc_9(1)

int32_t eax_8 = (*(*sub_4efcc0(*(arg1 + 0xa0)) + 0x24))(1) - *(arg1 + 0x220) - *(arg1 + 0x224) - ebp
bool cond:1 = *(arg1 + 0x1ad) == 0
*arg5 = _mm_cvtepi32_ps(zx.o(eax_8)) + *arg4
int32_t ebp_1

if (cond:1)
    ebp_1 = 0
else
    ebp_1 = (*(*sub_4ef220(*(arg1 + 0xb0)) + 0x28))(1)

*arg3 = _mm_cvtepi32_ps(zx.o((*(*sub_4efcc0(*(arg1 + 0xa0)) + 0x28))(1) - *(arg1 + 0x218)
    - *(arg1 + 0x21c) - ebp_1)) + *arg2
return arg3
