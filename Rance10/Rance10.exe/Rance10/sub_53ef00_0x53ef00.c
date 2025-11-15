// 函数: sub_53ef00
// 地址: 0x53ef00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = 0
char* var_8 = arg3
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIComboBoxView::VTable
    ** eax = sub_4f4a80(data_7fcba4 + 0x124, arg2)

if (eax == 0)
    sub_403360(arg3, 0x75d3bb)
    return arg3

int32_t eax_2
int32_t edx
edx:eax_2 = muls.dp.d(0x2aaaaaab, eax[0x71] - eax[0x70])
int32_t edx_1 = edx s>> 2
void* edi_1

if ((edx_1 u>> 0x1f) + edx_1 s<= arg4 || arg4 s< 0)
    edi_1 = &eax[0x2d]
else
    edi_1 = eax[0x70] + arg4 * 0x18

*(arg3 + 0x14) = 0xf
*(arg3 + 0x10) = 0
*arg3 = 0
sub_403590(arg3, edi_1, 0, 0xffffffff)
return arg3
