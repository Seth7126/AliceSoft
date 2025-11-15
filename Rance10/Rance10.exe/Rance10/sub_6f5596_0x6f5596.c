// 函数: sub_6f5596
// 地址: 0x6f5596
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
long double result = fconvert.t(arg1)
long double x87_r6 = float.t(0)
x87_r6 - result
int32_t eax
eax.w = (x87_r6 < result ? 1 : 0) << 8 | (is_unordered.t(x87_r6, result) ? 1 : 0) << 0xa
    | (x87_r6 == result ? 1 : 0) << 0xe | 0x3000
bool p = unimplemented  {test ah, 0x44}

if (not(p))
    return result

x87_r6 - result
eax.w = (x87_r6 < result ? 1 : 0) << 8 | (is_unordered.t(x87_r6, result) ? 1 : 0) << 0xa
    | (x87_r6 == result ? 1 : 0) << 0xe
bool p_1 = unimplemented  {test ah, 0x5}
int32_t var_8_1

var_8_1 = p_1 ? 0xffffffff : 1

var_c.q = fconvert.d(float.t(var_8_1))
return fconvert.t(var_c.q)
