// 函数: _fminf
// 地址: 0x70624d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float arg_4
float arg_8

if (__fdtest(&arg_4) == 2)
    return fconvert.t(arg_8)

int16_t eax_1 = __fdtest(&arg_8)
long double x87_r7 = fconvert.t(arg_4)

if (eax_1 != 2)
    long double x87_r6_1 = fconvert.t(arg_8)
    x87_r6_1 - x87_r7
    
    if ((((x87_r6_1 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) == 0)
        return x87_r6_1
    
    x87_r6_1 - x87_r7
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1) && (arg_4:2.w & 0x8000) != 0)
        return x87_r6_1

return x87_r7
