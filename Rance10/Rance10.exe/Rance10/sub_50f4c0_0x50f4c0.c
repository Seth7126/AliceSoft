// 函数: sub_50f4c0
// 地址: 0x50f4c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0
int32_t var_4 = 0
char var_c_1
void* eax_1

if (*(arg1 + 0xf4) != 0)
    eax_1 = arg1 + 0xe4
    
    if (*(arg1 + 0xf8) u>= 0x10)
        eax_1 = *eax_1
    
    var_c_1 = 0

if (*(arg1 + 0xf4) == 0 || *eax_1 == 0xa)
    var_c_1 = 1

sub_50e3f0(arg1, arg1 + 0xcc, &var_8, &var_4, var_c_1)
struct 
    common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable**
     eax_3 = sub_4ef140(*(arg1 + 0xac))
int32_t* eax_4 = sub_4ef220(*(arg1 + 0xb0))
int32_t eax_7 = *(arg1 + 0x218) - eax_3[0x46] + var_4
*arg2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x220) - eax_4[0x46] + var_8))
*arg3 = _mm_cvtepi32_ps(zx.o(eax_7))
return arg3
