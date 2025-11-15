// 函数: sub_541830
// 地址: 0x541830
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormView::VTable** 
    result = sub_4f4d20(data_7fcba4 + 0x124, arg3)

if (result != 0 && (result[0x4f] != arg2 || result[0x50] != arg4 || result[0x51] != arg5))
    result[0x4f] = arg2
    result[0x50] = arg4
    result[0x51] = arg5
    *(result + 0x156) = 1

return result
