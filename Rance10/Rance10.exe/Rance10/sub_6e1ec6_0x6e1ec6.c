// 函数: sub_6e1ec6
// 地址: 0x6e1ec6
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x64
int32_t (* var_c)(void* arg1) = sub_749ef5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_11 = __security_cookie ^ &__saved_ebp
int32_t var_84 = eax_11
void* const var_88_9 = &data_6e1ed2
int32_t var_8_3 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx
int32_t var_6c = ecx
long double x87_r7 = float.t(0)
long double x87_r6 = fconvert.t(arg7)
x87_r6 - x87_r7
struct _EXCEPTION_REGISTRATION_RECORD** eax
eax.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000
char var_60 = 0
bool p = unimplemented  {test ah, 0x5}

if (not(p))
    var_60 = 1
    x87_r7 = fneg(x87_r7)

long double x87_r6_1 = fconvert.t(9.9999999999999997e+34)
int32_t i = 0
x87_r6_1 - x87_r7
eax.w = (x87_r6_1 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7) ? 1 : 0) << 0xa
    | (x87_r6_1 == x87_r7 ? 1 : 0) << 0xe | 0x3000
bool p_1 = unimplemented  {test ah, 0x41}

if (not(p_1))
    while (i u< 0x1388)
        x87_r7 = x87_r7 / fconvert.t(10000000000.0)
        i += 0xa
        x87_r6_1 - x87_r7
        eax.w = (x87_r6_1 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7 ? 1 : 0) << 0xe | 0x2800
        bool p_2 = unimplemented  {test ah, 0x41}
        
        if (p_2)
            break

int32_t var_88 = ecx
int32_t var_8c = ecx
var_8c.q = fconvert.d(x87_r6_1)
void var_3c
void* eax_1 = sub_406aa0(&var_3c, 0x28, "%.0Lf")

if (eax_1 s>= 0)
    int32_t var_8 = 0
    void var_74
    int32_t* eax_3 = sub_6d6aa9(std::ios_base::getloc(arg5, &var_74))
    int32_t var_8_1 = 0xffffffff
    std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
        &var_74)
    int32_t var_88_3 = 0x30
    int32_t esi_2 = *(*eax_3 + 0x30)
    j_sub_4033e0()
    int32_t var_44_1 = 0
    uint32_t eax_5 = zx.d(esi_2(var_88_3))
    int16_t var_88_4 = 0
    int32_t var_40_1 = 7
    int16_t var_54 = 0
    sub_6defed(&var_54, eax_1, var_88_4)
    int16_t* eax_6 = var_54.d
    int32_t var_8_2 = 1
    
    if (var_40_1 u< 8)
        eax_6 = &var_54
    
    void* esi_4 = *eax_3
    void* var_90_1 = &var_3c
    *(esi_4 + 0x2c)
    j_sub_4033e0()
    (*(esi_4 + 0x2c))(var_90_1, eax_1 + &var_3c, eax_6)
    std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::append(
        &var_54, i, eax_5.w)
    uint32_t var_88_7 = eax_5
    void var_a0
    std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >(
        &var_a0, &var_54)
    sub_6de1a1(arg1, arg2, arg3, arg4, arg5, arg6, var_60.d)
    std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Tidy(
        &var_54, 1, nullptr)
else
    *arg1 = arg2
    arg1[1] = arg3

void* const __saved_ebp_3 = &data_6e203c
@__security_check_cookie@4(eax_11 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = __saved_ebp_3
return arg1
