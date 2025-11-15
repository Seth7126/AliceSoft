// 函数: sub_4b1660
// 地址: 0x4b1660
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = *(arg1 + 0xb0)
int32_t* eax_1 = arg3[2] - arg3[1]
void* eax_2

if (*(ecx + 0xaa) != 0 && *(ecx + 0xab) != 0)
    eax_2 = *(arg1 + 0xac)

int32_t* eax_6
int32_t esi_1
int32_t edi_1

if (*(ecx + 0xaa) != 0 && *(ecx + 0xab) != 0 && (*(eax_2 + 0xaa) == 0 || *(eax_2 + 0xab) == 0))
    edi_1 = sub_4ef220(ecx)[0x46]
    int32_t* eax_4 = sub_4ef220(*(arg1 + 0xb0))
    esi_1 = sub_522930(eax_4, eax_4[0x86], eax_4[0x45])
    eax_6 = sub_4ef220(*(arg1 + 0xb0))
    goto label_4b172e

void* ecx_4 = *(arg1 + 0xac)

if (*(ecx_4 + 0xaa) != 0 && *(ecx_4 + 0xab) != 0)
    edi_1 = sub_4ef140(ecx_4)[0x46]
    struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable
        ** eax_8 = sub_4ef140(*(arg1 + 0xac))
    esi_1 = sub_522930(eax_8, eax_8[0x86], eax_8[0x45])
    eax_6 = sub_4ef140(*(arg1 + 0xac))
label_4b172e:
    int32_t eax_11
    int32_t edx_1
    edx_1:eax_11 = sx.q(esi_1)
    int32_t var_14_3 = ((eax_11 - edx_1) s>> 1) * eax_1 + edi_1
    sub_4f7c10(&eax_6[0x33])

return sub_4cbd50(arg1 + 0xc, arg3, arg2)
