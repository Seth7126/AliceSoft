// 函数: sub_4a2280
// 地址: 0x4a2280
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

BOOL result

if ((**(arg1 + 0x38))().b != 0)
    struct common::CPoint::VTable* const var_c = &common::CPoint::`vftable'
    int32_t var_8_1 = 0
    int32_t var_4_1 = 0
    
    if (sub_4a54c0(arg1 + 0xc0, arg2, &var_c).b != 0)
        POINT point
        __builtin_memset(&point, 0, 8)
        
        if (ClientToScreen(**(arg1 + 0x10), &point) != 0
                && sub_4a2ae0(arg1, point.x, point.y).b != 0)
            result.b = 1
            return result

result.b = 0
return result
