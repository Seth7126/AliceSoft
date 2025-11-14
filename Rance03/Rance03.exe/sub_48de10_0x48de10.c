// 函数: sub_48de10
// 地址: 0x48de10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 == 0 || arg3 == 0)
    return 

sub_48dd90(arg1)
*(arg1 + 0x10) = arg2
(**arg2)()
*(arg1 + 0x14) = arg3
(**arg3)()
char* edi_3 = *(arg1 + 0x14) + 0x24

if (sub_487240(*(arg1 + 0x10), edi_3) != 0)
    *(arg1 + 0x28) = 1
    struct IInterface::partsengine::CFlatSpriteView::VTable** eax_4 = sub_69adc6(0x38)
    struct IInterface::partsengine::CFlatSpriteView::VTable** eax_5
    
    if (eax_4 == 0)
        eax_5 = nullptr
    else
        eax_5 = sub_48ecf0(eax_4, *(arg1 + 8), *(arg1 + 0x18))
    
    int32_t* var_1c = *(arg1 + 0x10)
    *(arg1 + 0x1c) = eax_5
    sub_48ef50(eax_5, var_1c, edi_3, nullptr, 3)
    return 

char eax_7 = sub_4873f0(*(arg1 + 0x10), edi_3)
void* ecx_6 = *(arg1 + 0x10)

if (eax_7 != 0)
    *(arg1 + 0x28) = 1
    void*** eax = sub_487890(ecx_6, edi_3)
    
    if (eax != 0)
        struct IInterface::partsengine::CFlatSpriteView::VTable** eax_8 = sub_69adc6(0x38)
        struct IInterface::partsengine::CFlatSpriteView::VTable** ecx_8
        
        if (eax_8 == 0)
            ecx_8 = nullptr
        else
            ecx_8 = sub_48ecf0(eax_8, *(arg1 + 8), *(arg1 + 0x18))
        
        *(arg1 + 0x1c) = ecx_8
        sub_48ef50(ecx_8, *(arg1 + 0x10), &eax[2], eax[8], eax[9])
    
    return 

if (sub_487360(ecx_6, edi_3) != 0)
    *(arg1 + 0x29) = 1
    struct IInterface::partsengine::CFlatLayerView::VTable** eax_13 = sub_69adc6(0x50)
    struct IInterface::partsengine::CFlatLayerView::VTable** eax_14
    
    if (eax_13 == 0)
        eax_14 = nullptr
    else
        eax_14 = sub_490010(eax_13, *(arg1 + 8), *(arg1 + 0xc), *(arg1 + 0x18))
    
    void* ecx_10 = *(arg1 + 0x10)
    *(arg1 + 0x20) = eax_14
    int32_t* eax_15 = sub_4877d0(ecx_10, edi_3)
    sub_490420(*(arg1 + 0x20), *(arg1 + 0x10), eax_15)
    return 

if (sub_487480(*(arg1 + 0x10), edi_3).b == 0)
    return 

*(arg1 + 0x2a) = 1
struct partsengine::IFlatGraphicLayer::partsengine::CFlatEmitterView::VTable** eax_17 =
    sub_69adc6(0x4c)
struct partsengine::IFlatGraphicLayer::partsengine::CFlatEmitterView::VTable** eax_18

if (eax_17 == 0)
    eax_18 = nullptr
else
    eax_18 = sub_489060(eax_17, *(arg1 + 8), *(arg1 + 0xc), *(arg1 + 0x18))

void* ecx_14 = *(arg1 + 0x10)
*(arg1 + 0x24) = eax_18
int32_t* eax_19 = sub_487950(ecx_14, edi_3)
sub_489570(*(arg1 + 0x24), *(arg1 + 0x10), eax_19)
