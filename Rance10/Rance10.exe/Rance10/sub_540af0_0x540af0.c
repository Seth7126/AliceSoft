// 函数: sub_540af0
// 地址: 0x540af0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4_1 = arg1
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUISpinBoxView::VTable*
    * result = sub_4f4c60(data_7fcba4 + 0x124, arg1)
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUISpinBoxView::VTable*
    * result_1 = result

if (result_1 != 0)
    float xmm0_1 = result_1[0x3e]
    xmm0_1 - arg2
    result:1.b = (xmm0_1 == arg2 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, arg2) ? 1 : 0) << 2
        | (xmm0_1 < arg2 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        result_1[0x3e] = arg2
        result_1[0x56].b = 1

return result
