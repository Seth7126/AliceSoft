// 函数: $$000000
// 地址: 0x7262d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 - 0x90) = 0xff
char ecx
long double st0
long double x87_r0
long double x87_r1
long double x87_r2
st0, ecx = fFEXPH(arg1, x87_r0, x87_r1, x87_r2)
char entry_ebx

if (entry_ebx == 0)
    return sub_71a70d(ecx, sub_71a451(arg1)) __tailcall

__fscale(st0 - ExpHypCopyInv(st0), fneg(float.t(1)))
return sub_71a618() __tailcall
