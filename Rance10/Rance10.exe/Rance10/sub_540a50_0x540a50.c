// 函数: sub_540a50
// 地址: 0x540a50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4_1 = arg1
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUISpinBoxView::VTable*
    * result = sub_4f4c60(data_7fcba4 + 0x124, arg1)
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUISpinBoxView::VTable*
    * result_1 = result

if (result_1 == 0)
    return result

float xmm0 = result_1[0x3d]
xmm0 - arg2
result:1.b =
    (xmm0 == arg2 ? 1 : 0) << 6 | (is_unordered.d(xmm0, arg2) ? 1 : 0) << 2 | (xmm0 < arg2 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    int32_t xmm0_1 = result_1[0x40]
    
    if (not(xmm0_1 f> arg2))
        xmm0_1 = _mm_min_ss(result_1[0x3f], arg2)
    
    result_1[0x3d] = xmm0_1
    result_1[0x56].b = 1

return sub_4b7ab0(result_1) __tailcall
