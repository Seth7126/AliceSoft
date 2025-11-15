// 函数: sub_4ad090
// 地址: 0x4ad090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg3 + 8) == 0)
    goto label_4ad0d7

if (*(arg3 + 9) == 0)
    sub_4ab8a0(arg1 + 0xa0, *(arg2 + 0x40), *(arg1 + 0xc0), *(arg1 + 0xc1), *(arg1 + 0xc2), 
        *(arg1 + 0xc3))
label_4ad0d7:
    
    if (*(arg3 + 9) != 0)
        goto label_4ad0dd
    
    return 

label_4ad0dd:
int32_t* ecx_1 = *(arg2 + 0x74)

if (ecx_1 == 0 || (*(*ecx_1 + 8))(1) != 0xd)
    return 

struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormView::VTable** 
    eax = sub_4efa20(arg2)

if (eax[0x37] != eax[0x2d] || (*eax)->vFunc_6().b == 0)
    return 

int32_t xmm0_1 = *(arg1 + 0xbc)
*(arg2 + 0x90) = *(arg1 + 0xb8)
*(arg2 + 0x94) = xmm0_1
