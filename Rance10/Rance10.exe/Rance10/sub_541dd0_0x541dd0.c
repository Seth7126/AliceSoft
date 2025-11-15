// 函数: sub_541dd0
// 地址: 0x541dd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct 
    common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable**
     result = sub_4f4d80(data_7fcba4 + 0x124, arg3)
struct 
    common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable**
     result_1 = result

if (result_1 != 0 && arg2 s>= 0)
    result = (result_1[0x2a] - result_1[0x29]) s>> 4
    
    if (result s> arg2)
        return sub_4b0330((arg2 << 4) + result_1[0x29], arg4, arg5, arg6, arg7)

return result
