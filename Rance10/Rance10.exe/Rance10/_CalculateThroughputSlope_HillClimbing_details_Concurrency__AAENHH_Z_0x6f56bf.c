// 函数: ?CalculateThroughputSlope@HillClimbing@details@Concurrency@@AAENHH@Z
// 地址: 0x6f56bf
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

double* eax = Concurrency::details::HillClimbing::GetHistory(arg1, arg2)
double* eax_1 = Concurrency::details::HillClimbing::GetHistory(arg1, arg3)
double var_c = fconvert.d(sub_6f58b5(eax))
int32_t eax_2
long double st0_1
st0_1, eax_2 = sub_6f58b5(eax_1)
long double x87_r7_2 = st0_1 - fconvert.t(var_c)
var_c:4.d = arg3 - arg2
long double x87_r7_7 = fabs(x87_r7_2)
long double x87_r6_4 = float.t(0)
x87_r6_4 - x87_r7_7
eax_2.w = (x87_r6_4 < x87_r7_7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_4, x87_r7_7) ? 1 : 0) << 0xa
    | (x87_r6_4 == x87_r7_7 ? 1 : 0) << 0xe | 0x3000
bool p = unimplemented  {test ah, 0x5}
int16_t x87control

if (not(p))
    double var_14_1 = fconvert.d(
        Concurrency::details::HillClimbing::MeasuredHistory::Variance(eax_1)
        / fconvert.t(fconvert.d(float.t(eax_1[2].d))))
    long double st0_4
    st0_4, x87control = __CIsqrt(Concurrency::details::HillClimbing::MeasuredHistory::Variance(eax)
        / fconvert.t(fconvert.d(float.t(eax[2].d))) + fconvert.t(var_14_1))
    x87_r7_7 = fabs(st0_4 / fconvert.t(fconvert.d(x87_r7_2)))

int32_t mxcsr
sub_713b3c(mxcsr, x87control)
return x87_r7_7 * fconvert.t(-1.0) * fconvert.t(fconvert.d(x87_r7_2 / x87_r7_2
    / (fconvert.t(fconvert.d(float.t(var_c:4.d))) / fconvert.t(fconvert.d(float.t(arg2))))
    - fconvert.t(0.14999999999999999)))
