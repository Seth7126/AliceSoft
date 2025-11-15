// 函数: _roundf
// 地址: 0x70619f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float arg_4
int32_t eax_1 = sx.d(__fd_int(&arg_4, 1))

if ((eax_1 s<= 0 || eax_1 s> 2) && __fd_int(&arg_4, 0) != 0)
    long double x87_r7_1 = fconvert.t(arg_4)
    long double x87_r7_2
    
    if ((arg_4:2.w & 0x8000) == 0)
        x87_r7_2 = x87_r7_1 + fconvert.t(1.0)
    else
        x87_r7_2 = x87_r7_1 - fconvert.t(1.0)
    
    arg_4 = fconvert.s(x87_r7_2)

return fconvert.t(arg_4)
