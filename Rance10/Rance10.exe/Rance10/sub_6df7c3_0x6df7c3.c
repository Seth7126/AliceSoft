// 函数: sub_6df7c3
// 地址: 0x6df7c3
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_32c = 0
int32_t var_328 = 0x3b9aca00
int32_t var_330
void var_320
int32_t arg_8
int32_t arg_10
long double x87_r0
int32_t ecx = std::_Stofx_v2(x87_r0, &var_320, &var_330, 
    std::num_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::_Getffld(
        arg1, &var_320, &arg_8, &arg_10, arg5, &var_328), 
    &var_32c)
int32_t eax_4 = var_328
float var_324 = fconvert.s(arg2)

if (eax_4 != 0x3b9aca00 && eax_4 != 0)
    int32_t var_344_2 = ecx
    var_324 = fconvert.s(_ldexpf(fconvert.s(fconvert.t(var_324)), eax_4 << 2))

if (sub_6e320e(&arg_8, &arg_10) != 0)
    *arg6 |= 1

if (var_330 == &var_320 || var_32c != 0)
    *arg6 |= 2
else
    *arg7 = fconvert.s(fconvert.t(var_324))

*arg3 = arg_8
arg3[1] = arg4
@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return arg3
