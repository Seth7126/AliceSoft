// 函数: sub_5419b0
// 地址: 0x5419b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx
ebx.b = arg2
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormView::VTable** 
    eax = sub_4f4d20(data_7fcba4 + 0x124, arg1)
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormView::VTable** 
    ecx_2 = eax

if (ecx_2 != 0 && ecx_2[0x55].b != ebx.b)
    ecx_2[0x55].b = ebx.b
    
    if (ebx.b != 0)
        int32_t eax_1 = ecx_2[0x3b]
        ecx_2[0x3c] = eax_1
        *(ecx_2 + 0x156) = 1
        return eax_1
    
    eax = ecx_2[0x3c]
    ecx_2[0x3b] = eax
    *(ecx_2 + 0x156) = 1

return eax
