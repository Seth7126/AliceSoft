// 函数: sub_4ad990
// 地址: 0x4ad990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
int32_t* ebx = arg4
int32_t* ebp = arg3
void* var_4 = arg1
*ebp = 0
*ebx = 0

if (*(arg2 + 0xe) != 0 && arg2[3].b != 0)
    return 

int32_t edi_1 = ***arg2
int32_t var_18_1 = edi_1
int32_t* eax = sub_4f15e0(*(arg1 + 0xb4))

if (eax == 0)
    return 

int32_t edx_1 = eax[2]

if (edi_1 s< edx_1 || eax[1] + edx_1 s<= edi_1)
    return 

void* edi_3 = eax[3][edi_1 - edx_1]

if (edi_3 == 0)
    return 

int32_t* ecx_3 = *(edi_3 + 0x74)

if (ecx_3 == 0 || (*(*ecx_3 + 8))(1) != 0xd)
    return 

if (*(arg2 + 0xe) == 0)
    int32_t xmm0_1
    eax, xmm0_1 = sub_4edcf0(edi_3)
    *ebp = xmm0_1

if (arg2[3].b == 0)
    int32_t xmm0_2
    eax, xmm0_2 = sub_4edd50(edi_3)
    *ebx = xmm0_2

if (*(arg2 + 0xf) == 0 && *(arg2 + 0xd) == 0)
    return 

arg3 = nullptr
arg4 = nullptr
sub_4ad910(arg2, &arg3, &arg4)

if (*(arg2 + 0xf) != 0)
    float xmm0_5
    long double x87_r0
    long double x87_r1
    eax, xmm0_5 = sub_63ce00(_mm_cvtepi32_ps(zx.o(sub_63ccc0())), x87_r0, x87_r1)
    *ebp = xmm0_5 - _mm_cvtepi32_ps(zx.o(arg3))

if (*(arg2 + 0xd) != 0)
    float xmm0_9
    eax, xmm0_9 = sub_63ce00(_mm_cvtepi32_ps(zx.o(sub_63ccf0())))
    *ebx = xmm0_9 - _mm_cvtepi32_ps(zx.o(arg4))
