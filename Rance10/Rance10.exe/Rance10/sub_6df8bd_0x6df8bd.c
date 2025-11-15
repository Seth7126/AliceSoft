// 函数: sub_6df8bd
// 地址: 0x6df8bd
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_328 = 0
int32_t var_324 = 0x3b9aca00
int32_t var_32c
void var_320
int32_t arg_8
int32_t arg_10
int32_t ecx = std::_Stodx_v2(&var_320, &var_32c, 
    std::num_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::_Getffld(
        arg1, &var_320, &arg_8, &arg_10, arg5, &var_324), 
    &var_328)
int32_t eax_4 = var_324
double var_334 = fconvert.d(arg2)

if (eax_4 != 0x3b9aca00 && eax_4 != 0)
    int32_t var_348_2 = ecx
    int32_t var_34c_2 = ecx
    var_34c_2.q = fconvert.d(arg2)
    var_334 = fconvert.d(_ldexp(arg3, var_34c_2, eax_4 << 2))

if (sub_6e320e(&arg_8, &arg_10) != 0)
    *arg6 |= 1

if (var_32c == &var_320 || var_328 != 0)
    *arg6 |= 2
else
    *arg7 = fconvert.d(fconvert.t(var_334))

*arg3 = arg_8
arg3[1] = arg4
@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
