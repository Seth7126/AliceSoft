// 函数: ?do_put@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MBE?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAAVios_base@2@DO@Z
// 地址: 0x6e6774
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x64
int32_t (* var_c)(void* arg1) = sub_74a374
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_10 = __security_cookie ^ &__saved_ebp
int32_t var_84 = eax_10
void* const var_88_9 = &data_6e6780
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
char var_64 = 0
bool p = unimplemented  {test ah, 0x5}

if (not(p))
    var_64 = 1
    x87_r7 = fneg(x87_r7)

long double x87_r6_1 = fconvert.t(9.9999999999999997e+34)
void* i = nullptr
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
    int32_t* eax_3 = sub_6d0f2e(std::ios_base::getloc(arg5, &var_74))
    int32_t var_8_1 = 0xffffffff
    std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
        &var_74)
    int32_t var_88_3 = 0x30
    int32_t esi_2 = *(*eax_3 + 0x20)
    j_sub_4033e0()
    char eax_4 = esi_2(var_88_3)
    int32_t var_40_1 = 0xf
    char var_88_4 = 0
    int32_t var_44_1 = 0
    char var_54 = 0
    sub_4e2870(&var_54, eax_1, var_88_4)
    char* eax_5 = var_54.d
    int32_t var_8_2 = 1
    
    if (var_40_1 u< 0x10)
        eax_5 = &var_54
    
    void* esi_4 = *eax_3
    void* var_90_1 = &var_3c
    *(esi_4 + 0x1c)
    j_sub_4033e0()
    (*(esi_4 + 0x1c))(var_90_1, eax_1 + &var_3c, eax_5)
    sub_405500(&var_54, i, eax_4)
    int32_t var_88_7 = eax_4.d
    void var_a0
    sub_4033b0(&var_a0, &var_54)
    std::money_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Putmfld(
        arg1, arg2, arg3, arg4, arg5, arg6, var_64.d)
    sub_4033f0(&var_54, 1, nullptr)
else
    *arg1 = arg2
    arg1[1] = arg3

void* const __saved_ebp_3 = &data_6e68e6
@__security_check_cookie@4(eax_10 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = __saved_ebp_3
return arg1
