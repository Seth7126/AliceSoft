// 函数: __fFEXP
// 地址: 0x71a331
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 - 0x90) = 0xfe
int16_t ecx
ecx:1.b = 0
int16_t ecx_1
char edx
ecx_1, edx = __ffexpm1(ecx, arg1, 
    arg2 * (fconvert.t(1.4426950407214463) + fconvert.t(1.675171316223821e-10)))
long double x87_r1 = arg3 + float.t(1)

if ((*(arg1 - 0x9f) & 1) != 0)
    long double x87_r0_2 = float.t(1)
    x87_r1 = x87_r0_2 / x87_r0_2

if ((edx & 0x40) == 0)
    __fscale(x87_r1, arg4)

ecx_1:1.b = ecx_1:1.b
return sub_71a618() __tailcall
