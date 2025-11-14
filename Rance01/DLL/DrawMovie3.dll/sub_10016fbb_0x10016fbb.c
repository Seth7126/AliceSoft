// 函数: sub_10016fbb
// 地址: 0x10016fbb
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

*(arg2 - 0x90) = 0xfe
arg1:1.b = arg1:1.b
long double x87_r0
long double x87_r1

if (arg1:1.b != 0)
    int32_t eax_1 = _isintTOS(arg3)
    
    if (eax_1 == 0)
        return __rtindfpop(arg2) __tailcall
    
    arg1:1.b = 0
    
    if (eax_1 != 2)
        arg1:1.b = 0xff
    
    x87_r1 = arg3
    x87_r0 = fabs(arg4)
else
    x87_r0 = arg4
    x87_r1 = arg3

int16_t ecx
char edx
ecx, edx = __ffexpm1(arg1, arg2, __fyl2x(x87_r0, x87_r1))
long double x87_r2 = arg5 + float.t(1)

if ((*(arg2 - 0x9f) & 1) != 0)
    long double x87_r1_3 = float.t(1)
    
    if (data_100224cc == 1)
        x87_r2 = sub_100181d1(x87_r1_3, x87_r2)
    else
        x87_r2 = x87_r1_3 / x87_r1_3

if ((edx & 0x40) == 0)
    __fscale(x87_r2, arg6)

ecx:1.b = ecx:1.b
return sub_100172c8() __tailcall
