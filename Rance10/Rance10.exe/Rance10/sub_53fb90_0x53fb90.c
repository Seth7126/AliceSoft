// 函数: sub_53fb90
// 地址: 0x53fb90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4_1 = arg1
int32_t ebx
ebx.b = arg2
struct 
    common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUILayoutBoxView::VTable**
     result = sub_4f4b40(data_7fcba4 + 0x124, arg1)
struct 
    common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUILayoutBoxView::VTable**
     result_1 = result

if (result_1 != 0)
    bool p_2
    
    if (result_1[0x12].b == ebx.b)
        float xmm0_1 = result_1[0x13]
        xmm0_1 - arg3
        result:1.b = (xmm0_1 == arg3 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, arg3) ? 1 : 0) << 2
            | (xmm0_1 < arg3 ? 1 : 0)
        p_2 = unimplemented  {test ah, 0x44}
    
    if (result_1[0x12].b != ebx.b || p_2)
        result_1[0x12].b = ebx.b
        result_1[0x13] = arg3
        result_1[0x1a].b = 1

return result
