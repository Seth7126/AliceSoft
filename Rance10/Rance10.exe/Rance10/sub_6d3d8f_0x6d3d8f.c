// 函数: sub_6d3d8f
// 地址: 0x6d3d8f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x34
int32_t (* var_c)(void* arg1) = sub_749335
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_17 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_17
void* const var_58_4 = &data_6d3d9b
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
int32_t ecx = *(arg5 + 0x1c)
int32_t eax_2 = *(arg5 + 0x14) & 0x3000
void* edi = *(arg5 + 0x18)
int32_t var_8 = 0

if (ecx s<= 0 && (ecx s< 0 || edi u<= 0) && eax_2 != 0x2000)
    int32_t var_58 = 6
    edi = 6
    ecx = 0

long double x87_r7 = fconvert.t(arg7)
int32_t var_38 = ecx
void* ecx_1 = edi

if (eax_2 == 0x2000)
    long double x87_r6_2 = fabs(x87_r7)
    long double temp2_1 = fconvert.t(10000000000.0)
    x87_r6_2 - temp2_1
    eax_2.w = (x87_r6_2 < temp2_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, temp2_1) ? 1 : 0) << 0xa
        | (x87_r6_2 == temp2_1 ? 1 : 0) << 0xe | 0x3800
    
    if ((eax_2:1.b & 0x41) == 0)
        void* var_5c_1 = ecx_1
        void* var_60_1 = ecx_1
        var_60_1.q = fconvert.d(x87_r7)
        _frexp(var_60_1, &var_38)
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(var_38)
        ecx_1 = edi + divs.dp.d(sx.q(((eax_4 ^ edx_1) - edx_1) * 0x7597), 0x186a0)

int32_t ecx_3 =
    std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::resize(
    &var_34, ecx_1 + 0x32, 0)
char* ebx = var_34.d
var_38 = var_24

if (var_20 u< 0x10)
    ebx = &var_34

int32_t var_58_2 = ecx_3
int32_t var_5c_3 = ecx_3
var_5c_3.q = fconvert.d(fconvert.t(arg7))
void* var_60_2 = edi
int32_t var_64 = *(arg5 + 0x14)
void var_1c
char* eax_12 = std::num_put<wchar_t,class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::_Ffmt(
    arg1, &var_1c, 0x4c)
void* eax_13 = sub_406aa0(ebx, var_38, eax_12)
char* eax_14 = var_34.d

if (var_20 u< 0x10)
    eax_14 = &var_34

std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Fput(
    arg1, arg2, arg3, arg4, arg5, arg6, eax_14, eax_13)
sub_4033f0(&var_34, 1, nullptr)
@__security_check_cookie@4(eax_17 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d3eac
return arg2
