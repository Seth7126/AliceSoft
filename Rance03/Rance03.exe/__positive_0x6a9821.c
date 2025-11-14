// 函数: __positive
// 地址: 0x6a9821
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

long double x87_r7 = float.t(0)
long double temp0 = fconvert.t(*arg1)
x87_r7 - temp0
double* eax
eax.w = (x87_r7 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp0) ? 1 : 0) << 0xa
    | (x87_r7 == temp0 ? 1 : 0) << 0xe
bool p = unimplemented  {test ah, 0x41}

if (p)
    return 0

return 1
