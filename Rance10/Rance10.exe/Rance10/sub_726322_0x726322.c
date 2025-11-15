// 函数: sub_726322
// 地址: 0x726322
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 - 0x90) = 0xff
long double x87_r0
long double x87_r1
long double x87_r2
long double st0 = fFEXPH(arg1, x87_r0, x87_r1, x87_r2)
char entry_ebx

if (entry_ebx == 0)
    return sub_71a451(arg1) __tailcall

__fscale(ExpHypSum(st0), fneg(float.t(1)))
return sub_71a618() __tailcall
