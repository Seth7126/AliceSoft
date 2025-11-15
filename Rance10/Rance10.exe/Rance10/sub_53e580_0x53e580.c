// 函数: sub_53e580
// 地址: 0x53e580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = 0
char* var_8 = arg1
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIListBoxView::VTable*
    * eax = sub_4f4a20(data_7fcba4 + 0x124, arg2)

if (eax == 0)
    *(arg1 + 0x10) = eax
    *(arg1 + 0x14) = 0xf
    *arg1 = eax.b
    return arg1

int32_t ebx = eax[0x10]
void* edi = &eax[0x31]
int32_t eax_2
int32_t edx
edx:eax_2 = muls.dp.d(0x2aaaaaab, eax[0x5e] - eax[0x5d])
int32_t edx_1 = edx s>> 2

if ((edx_1 u>> 0x1f) + edx_1 s> ebx && ebx s>= 0)
    edi = *(edi + 0xb0) + ebx * 0x18

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_403590(arg1, edi, 0, 0xffffffff)
return arg1
