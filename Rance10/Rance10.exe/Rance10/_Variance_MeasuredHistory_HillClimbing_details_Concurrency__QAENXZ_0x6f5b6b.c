// 函数: ?Variance@MeasuredHistory@HillClimbing@details@Concurrency@@QAENXZ
// 地址: 0x6f5b6b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

double* var_8 = arg1
double* var_c = arg1
int32_t eax = arg1[2].d
long double x87_r7 = float.t(0)
long double x87_r6 = x87_r7

if (eax s>= 2)
    x87_r7 = x87_r6
    long double x87_r6_1 = fconvert.t(*arg1)
    var_c.q = fconvert.d(float.t(eax))
    long double x87_r6_4 = fconvert.t(arg1[1]) - x87_r6_1 * x87_r6_1 / fconvert.t(var_c.q)
    var_c.q = fconvert.d(float.t(eax - 1))
    x87_r6 = x87_r6_4 / fconvert.t(var_c.q)

long double x87_r5_4 = fabs(x87_r6)
long double temp0 = fconvert.t(0.0001)
x87_r5_4 - temp0
eax.w = (x87_r5_4 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_4, temp0) ? 1 : 0) << 0xa
    | (x87_r5_4 == temp0 ? 1 : 0) << 0xe | 0x3000

if ((eax:1.b & 0x41) != 0)
    return x87_r6

return x87_r7
