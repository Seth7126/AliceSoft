// 函数: sub_10012c40
// 地址: 0x10012c40
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t ebp

if (data_10023504 != 0)
    int32_t var_4 = ebp
    return int.d(fconvert.t(fconvert.d(arg1)))

int32_t var_4_1 = ebp
int64_t var_20 = int.q(arg1)
long double x87_r7_1 = float.t(var_20)
float edx = fconvert.s(arg1)
int32_t result = var_20.d

if (result == 0)
    edx = var_20:4.d

if (result != 0 || (edx & 0x7fffffff) != 0)
    long double x87_r0 = arg1 - x87_r7_1
    
    if (edx s>= 0)
        result = sbb.d(result, 0, fconvert.s(x87_r0) u>= 0x80000001)
        unimplemented  {sbb eax, 0x0}
    else
        result = adc.d(result, 0, (fconvert.s(x87_r0) ^ 0x80000000) u>= 0x80000001)
else
    float var_18_1 = fconvert.s(x87_r7_1)
    float var_18_2 = fconvert.s(arg1)

return result
