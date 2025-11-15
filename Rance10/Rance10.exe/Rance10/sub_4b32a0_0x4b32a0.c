// 函数: sub_4b32a0
// 地址: 0x4b32a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = 0x18
int32_t ebp = *(arg1 + 0xe8)

if (*(arg1 + 0x154) == 0)
    edi = *(arg1 + 0xec)

if (ebp s<= 0 || edi s<= 0)
    return 

struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** eax_1 =
    sub_4b36c0(arg1)
int32_t edx_1 = 0
int32_t ebx_1 = 0
int32_t var_c = 0
int32_t var_14 = 0

if (eax_1 != 0)
    (*(eax_1[0x1d]->vFunc_0 + 0x20))(&var_c, &var_14, 1)
    edx_1 = var_c
    ebx_1 = var_14

int32_t edi_3 = edi - *(arg1 + 0x108) - 0x18
bool ecx_1 = edx_1 s<= ebp - 8
bool cond:1_1 = ebx_1 s<= edi_3
bool var_15_1 = ecx_1

if (ecx_1 != 0)
    ebx_1.b = cond:1_1
    
    if (cond:1_1 == 0)
        var_15_1 = edx_1 s<= ebp - 0x18
else if (cond:1_1 == 0)
    ebx_1.b = cond:1_1
else
    ebx_1.b = ebx_1 s<= edi_3 - 0x10

int32_t ecx_2 = 0x10
int32_t eax_6 = 0x10

if (ebx_1.b != 0)
    eax_6 = 0

int32_t ebp_2 = ebp - 8 - eax_6

if (var_15_1 != 0)
    ecx_2 = 0

int32_t edi_4 = edi_3 - ecx_2
int32_t var_2c_2

if (ebp_2 s<= 0 || edi_4 s<= 0)
    *(*(arg1 + 0xa4) + 0xaa) = 0
    struct 
        common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIPanelView::VTable**
         eax_10 = sub_4ef940(*(arg1 + 0xa4))
    
    if (eax_10[0x2a] != 1 || eax_10[0x2b] != 1)
        eax_10[0x2a] = 1
        eax_10[0x2b] = 1
        eax_10[0x34].b = 1
    
    var_2c_2 = 0
else
    *(*(arg1 + 0xa4) + 0xaa) = 1
    sub_4b4d50(sub_4ef940(*(arg1 + 0xa4)), ebp_2, edi_4)
    var_2c_2 = 0xff

sub_4b4d80(sub_4ef940(*(arg1 + 0xa4)), *(arg1 + 0x148), *(arg1 + 0x14c), *(arg1 + 0x150), var_2c_2)
*(*(arg1 + 0xac) + 0xa4) = 3
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIPanelView::VTable** 
    ecx_7

if (ebx_1.b == 0)
    if (0x3c s> edi || 0x3c s> ebp)
        ecx_7.b = 0
    else
        ecx_7.b = 1
    
    *(*(arg1 + 0xac) + 0xaa) = ecx_7.b
    struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable
        ** eax_15 = sub_4ef140(*(arg1 + 0xac))
    
    if (eax_15[0x42] != 0x10)
        eax_15[0x42] = 0x10
        eax_15[0x87].b = 1
    
    struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable
        ** eax_16 = sub_4ef140(*(arg1 + 0xac))
    
    if (eax_16[0x43] != 0x10)
        eax_16[0x43] = 0x10
        eax_16[0x87].b = 1
    
    struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable
        ** eax_17 = sub_4ef140(*(arg1 + 0xac))
    
    if (eax_17[0x41] != 0x10)
        eax_17[0x41] = 0x10
        eax_17[0x87].b = 1
    
    struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable
        ** eax_18 = sub_4ef140(*(arg1 + 0xac))
    
    if (eax_18[0x40] != edi_4)
        eax_18[0x40] = edi_4
        eax_18[0x87].b = 1
    
    int32_t eax_19 = var_14
    struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable
        ** eax_20 = sub_4ef140(*(arg1 + 0xac))
    
    if (eax_20[0x44] != eax_19)
        int32_t var_2c_3 = eax_20[0x46]
        eax_20[0x44] = eax_19
        sub_4f7c10(&eax_20[0x33])
        eax_20[0x87].b = 1
    
    struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable
        ** eax_22
    eax_22, ecx_7 = sub_4ef140(*(arg1 + 0xac))
    
    if (eax_22[0x45] != edi_4)
        int32_t var_2c_4 = eax_22[0x46]
        eax_22[0x45] = edi_4
        sub_4f7c10(&eax_22[0x33])
        eax_22[0x87].b = 1
else
    *(*(arg1 + 0xac) + 0xaa) = 0

*(*(arg1 + 0xb0) + 0xa4) = 7

if (var_15_1 != 0)
    *(*(arg1 + 0xb0) + 0xaa) = 0
    return 

if (0x3c s> edi || 0x3c s> ebp)
    ecx_7.b = 0
else
    ecx_7.b = 1

*(*(arg1 + 0xb0) + 0xaa) = ecx_7.b
int32_t* eax_26 = sub_4ef220(*(arg1 + 0xb0))

if (eax_26[0x42] != 0x10)
    eax_26[0x42] = 0x10
    eax_26[0x87].b = 1

int32_t* eax_27 = sub_4ef220(*(arg1 + 0xb0))

if (eax_27[0x43] != 0x10)
    eax_27[0x43] = 0x10
    eax_27[0x87].b = 1

int32_t* eax_28 = sub_4ef220(*(arg1 + 0xb0))

if (eax_28[0x41] != 0x10)
    eax_28[0x41] = 0x10
    eax_28[0x87].b = 1

int32_t* eax_29 = sub_4ef220(*(arg1 + 0xb0))

if (eax_29[0x40] != ebp_2)
    eax_29[0x40] = ebp_2
    eax_29[0x87].b = 1

int32_t ebx_4 = var_c
int32_t* eax_30 = sub_4ef220(*(arg1 + 0xb0))

if (eax_30[0x44] != ebx_4)
    int32_t var_2c_5 = eax_30[0x46]
    eax_30[0x44] = ebx_4
    sub_4f7c10(&eax_30[0x33])
    eax_30[0x87].b = 1

int32_t* eax = sub_4ef220(*(arg1 + 0xb0))

if (eax[0x45] == ebp_2)
    return 

int32_t var_2c_6 = eax[0x46]
eax[0x45] = ebp_2
sub_4f7c10(&eax[0x33])
eax[0x87].b = 1
