// 函数: _test_whether_TOS_is_int
// 地址: 0x70dec1
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

long double x87_r7 = roundint.t(arg1)
x87_r7 - arg1
int32_t ecx
ecx.b = 0
int16_t result = (x87_r7 < arg1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, arg1) ? 1 : 0) << 0xa
    | (x87_r7 == arg1 ? 1 : 0) << 0xe

if (not(test_bit(result:1.b, 6)))
    return result

long double x87_r0 = arg1 * fconvert.t(0.5)
ecx.b = 1
long double x87_r7_2 = roundint.t(x87_r0)
x87_r7_2 - x87_r0
result = (x87_r7_2 < x87_r0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_2, x87_r0) ? 1 : 0) << 0xa
    | (x87_r7_2 == x87_r0 ? 1 : 0) << 0xe | 0x800

if (test_bit(result:1.b, 6))
    ecx.b = 2

return result
