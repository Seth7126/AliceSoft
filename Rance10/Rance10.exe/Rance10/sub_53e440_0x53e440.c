// 函数: sub_53e440
// 地址: 0x53e440
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = 0
char* var_8 = arg3
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIListBoxView::VTable*
    * eax = sub_4f4a20(data_7fcba4 + 0x124, arg2)

if (eax == 0)
    *(arg3 + 0x10) = eax
    *(arg3 + 0x14) = 0xf
    *arg3 = eax.b
    return arg3

void* edi = &eax[0x31]
int32_t eax_2
int32_t edx
edx:eax_2 = muls.dp.d(0x2aaaaaab, eax[0x5e] - eax[0x5d])
int32_t edx_1 = edx s>> 2

if ((edx_1 u>> 0x1f) + edx_1 s> arg4 && arg4 s>= 0)
    edi = *(edi + 0xb0) + arg4 * 0x18

*(arg3 + 0x14) = 0xf
*(arg3 + 0x10) = 0
*arg3 = 0
sub_403590(arg3, edi, 0, 0xffffffff)
return arg3
