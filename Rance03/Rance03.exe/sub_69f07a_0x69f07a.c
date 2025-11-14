// 函数: sub_69f07a
// 地址: 0x69f07a
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
long double x87_r7 = fconvert.t(arg2)
long double x87_r5 = fconvert.t(arg3)
long double x87_r6_1 = x87_r7 + x87_r5

if (data_74b0a0 == 0)
    int32_t var_28 = 1
    return __umatherr(1, arg1, fconvert.d(x87_r7), fconvert.d(x87_r5), fconvert.d(x87_r6_1), arg4)

int32_t var_8_1 = 0xffff
int32_t var_c = arg4
*__errno() = 0x21
int16_t x87control
sub_69f534(x87control)
return fconvert.t(fconvert.d(x87_r6_1))
