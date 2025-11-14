// 函数: _isintTOS
// 地址: 0x10017161
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

long double x87_r7 = roundint.t(arg1)
x87_r7 - arg1

if (not(test_bit(
        ((x87_r7 < arg1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, arg1) ? 1 : 0) << 0xa
            | (x87_r7 == arg1 ? 1 : 0) << 0xe):1.b, 
        6)))
    return 0

long double x87_r7_2 = arg1 * fconvert.t(data_10021712)
long double x87_r6_2 = roundint.t(x87_r7_2)
x87_r6_2 - x87_r7_2

if (test_bit(
        ((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe):1.b, 
        6))
    return 2

return 1
