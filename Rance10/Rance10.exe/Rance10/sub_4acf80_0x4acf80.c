// 函数: sub_4acf80
// 地址: 0x4acf80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg3

if (*(edi + 0x19) != 0)
    return 

void* esi_1 = arg2
int32_t* ecx = *(esi_1 + 0x74)

if (ecx == 0 || (*(*ecx + 8))(1) != 0xd)
    return 

struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormView::VTable** 
    eax = sub_4efa20(esi_1)

if (eax[0x37] != eax[0x2d] || (*eax)->vFunc_6().b == 0)
    return 

arg2.b = *(edi + 0xc) s<= 0x1e
long double x87_r0
long double x87_r1
float xmm0_3 = sub_63ce00(_mm_cvtepi32_ps(zx.o(sub_63ccc0())), x87_r0, x87_r1)
arg3.b = _mm_cvtepi32_ps(zx.o(*(edi + 0xc))) f>= xmm0_3 - 30f
bool var_4_1 = *(edi + 0x10) s<= 0x1e
long double x87_r2
float xmm0_7 = sub_63ce00(_mm_cvtepi32_ps(zx.o(sub_63ccf0())), x87_r1, x87_r2)
bool var_8_1 = _mm_cvtepi32_ps(zx.o(*(edi + 0x10))) >= xmm0_7 - 30f
sub_4ab8a0(arg1 + 0xa0, *(esi_1 + 0x40), var_4_1, var_8_1, arg2.b, arg3.b)
*(arg1 + 0xb8) = *(esi_1 + 0x90)
*(arg1 + 0xbc) = *(esi_1 + 0x94)
