// 函数: sub_5413a0
// 地址: 0x5413a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIPanelView::VTable** 
    result = sub_4f4cc0(data_7fcba4 + 0x124, arg1)
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIPanelView::VTable** 
    result_1 = result

if (result_1 != 0)
    int32_t var_8 = arg2
    
    if (result_1[0x32] != arg2)
        int32_t var_4 = 0
        int32_t* eax = &var_8
        result_1[0x34].b = 1
        
        if (arg2 s<= 0)
            eax = &var_4
        
        result = *eax
        result_1[0x32] = result

return result
