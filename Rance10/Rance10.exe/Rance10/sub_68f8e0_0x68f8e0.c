// 函数: sub_68f8e0
// 地址: 0x68f8e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_98
int32_t eax_1 = __security_cookie ^ &var_98
int128_t var_90
__builtin_memset(&var_90, 0, 0x70)
(**arg5)()
var_90.d = fconvert.s(arg2)
(*(*arg5 + 4))()
var_90:4.d = fconvert.s(arg3)
int32_t eax_8 = (*(*arg5 + 4))()
int32_t var_94 = 4
var_90:0xc.d = 0
var_90:8.d = fconvert.s(arg4)
long double x87_r3
long double x87_r4
long double x87_r5
long double x87_r6
long double x87_r7
sub_690050(eax_8, &var_94, &var_90, x87_r3, x87_r4, x87_r5, x87_r6, x87_r7, arg2, arg3, arg4, arg5)
bool result = sub_684cb0(arg1 + 0x98, &var_90, *(*(arg1 + 4) + 0x38)) != 0
@__security_check_cookie@4(eax_1 ^ &var_98)
return result
