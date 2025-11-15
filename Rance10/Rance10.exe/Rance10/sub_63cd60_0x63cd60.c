// 函数: sub_63cd60
// 地址: 0x63cd60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float var_4 = arg1
void* esi = data_7fcbbc

if (esi != 0 && sub_63c080(esi) != 0)
    (*(**(esi + 0x2c) + 0x60))()
    float xmm1_1 = 1f
    var_4 = fconvert.s(arg2)
    var_4 - 1f
    int32_t eax_4
    eax_4:1.b =
        (var_4 == 1f ? 1 : 0) << 6 | (is_unordered.d(var_4, 1f) ? 1 : 0) << 2 | (var_4 < 1f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        void* esi_1 = data_7fcbbc
        
        if (esi_1 != 0)
            if (sub_63c080(esi_1) == 0)
                return int.d(_mm_cvtepi32_ps(zx.o(arg1)) / 1f)
            
            (*(**(esi_1 + 0x2c) + 0x60))()
            xmm1_1 = fconvert.s(arg3)
        
        return int.d(_mm_cvtepi32_ps(zx.o(arg1)) / xmm1_1)

return arg1
