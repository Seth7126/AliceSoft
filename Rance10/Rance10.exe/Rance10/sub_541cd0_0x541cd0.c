// 函数: sub_541cd0
// 地址: 0x541cd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct 
    common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable**
     eax = sub_4f4d80(data_7fcba4 + 0x124, arg1)

if (eax == 0 || arg2 s< 0 || (eax[0x2a] - eax[0x29]) s>> 4 s<= arg2)
    return 0

int32_t* esi_2 = (arg2 << 4) + eax[0x29]
int32_t eax_4
int32_t edx
edx:eax_4 = muls.dp.d(0x2aaaaaab, esi_2[1] - *esi_2)
int32_t edx_1 = edx s>> 1
return (edx_1 u>> 0x1f) + edx_1
