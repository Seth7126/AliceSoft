// 函数: sub_587d40
// 地址: 0x587d40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct sealengine::CDrawInstance::sealengine::CLineListView::VTable** ebx = arg2
void* __offset(sealengine::CDrawInstance::sealengine::CLineListView::VTable, 0x230) edi_1 =
    *ebx + 0x230

if ((edi_1 - 0x230)->__offset(0x230).d == (edi_1 - 0x230)->__offset(0x234).d)
    int32_t* ecx = *(arg1 + 0x64)
    *(arg1 + 0x64) = 0
    
    if (ecx != 0)
        (*(*ecx + 0x1c))(1)
    
    int32_t result
    result.b = 1
    return result

if (*(arg1 + 0x64) == 0)
    struct sealengine::CDrawInstance::sealengine::CLineListView::VTable*** eax_1 = sub_589ad0(&arg2)
    
    if (arg1 + 0x64 != eax_1)
        struct sealengine::CDrawInstance::sealengine::CLineListView::VTable** edx_1 = *eax_1
        *eax_1 = nullptr
        int32_t* ecx_2 = *(arg1 + 0x64)
        *(arg1 + 0x64) = edx_1
        
        if (ecx_2 != 0)
            (*(*ecx_2 + 0x1c))(1)
    
    struct sealengine::CDrawInstance::sealengine::CLineListView::VTable** ecx_3 = arg2
    
    if (ecx_3 != 0)
        (*ecx_3)->vFunc_7(1)

struct sealengine::CDrawInstance::sealengine::CLineListView::VTable* ecx_4 = *ebx
int32_t edx_2 = 1
int32_t ebp = 1

if ((ecx_4->__offset(0x114).d - ecx_4->__offset(0x110).d) s>> 2 != 0)
    edx_2 = *ecx_4->__offset(0x110).d

if ((ecx_4->__offset(0x114).d - ecx_4->__offset(0x110).d) s>> 2 u> 1)
    ebp = *(ecx_4->__offset(0x110).d + 4)

int32_t eax_10
eax_10.b = ebp != 0
return sub_58b7f0(*(arg1 + 0x64), edi_1, ecx_4 + 0xe4, edx_2 != 0, eax_10.b, arg3) != 0
