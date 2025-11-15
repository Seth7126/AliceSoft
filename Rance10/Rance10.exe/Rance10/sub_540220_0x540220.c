// 函数: sub_540220
// 地址: 0x540220
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIMessageWindowView::VTable
    ** result = sub_4f4c00(data_7fcba4 + 0x124, arg3)
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIMessageWindowView::VTable
    ** result_1 = result

if (result_1 != 0)
    void* ecx_2 = &result_1[0x40]
    
    if (result_1[0x45] u>= 0x10)
        ecx_2 = *ecx_2
    
    (*(*arg2 + 4))(ecx_2)
    *arg4 = result_1[0x4c]
    *arg5 = result_1[0x4d]
    result = arg6
    *result = result_1[0x4e]

return result
