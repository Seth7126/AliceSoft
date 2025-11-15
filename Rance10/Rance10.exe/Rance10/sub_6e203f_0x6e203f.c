// 函数: sub_6e203f
// 地址: 0x6e203f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x4c
int32_t (* var_c)(void* arg1) = sub_749f2a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_11 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_11
void* const var_70_8 = &data_6e204b
int32_t var_8_3 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg7
int32_t var_8 = 0
void var_5c
struct std::ctype_base::std::ctype<wchar_t>::VTable* eax_3 =
    sub_633850(std::ios_base::getloc(arg5, &var_5c))
int32_t var_8_1 = 0xffffffff
std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    &var_5c)
int32_t var_2c
int32_t* var_70_2 = &var_2c
char const* const var_74 = "0123456789-"
char const* const var_78 = "0123456789-"
int32_t esi = *(eax_3->vFunc_0 + 0x2c)
j_sub_4033e0()
esi(var_78, var_74, var_70_2)
int32_t i_1 = 0
char var_48 = 0

if (ebx[4] != 0)
    int16_t* eax_4
    
    if (ebx[5] u< 8)
        eax_4 = ebx
    else
        eax_4 = *ebx
    
    eax_4.w = *eax_4
    int16_t var_18
    
    if (eax_4.w == var_18)
        var_48 = 1
        i_1 = 1

int32_t i = i_1

if (i_1 u< ebx[4])
    do
        int32_t* eax_5
        
        if (ebx[5] u< 8)
            eax_5 = ebx
        else
            eax_5 = *ebx
        
        if (std::_Find_elem<uint16_t>(&var_2c, *(eax_5 + (i << 1))) u>= 0xa)
            break
        
        i += 1
    while (i u< ebx[4])

if (ebx[5] u>= 8)
    ebx = *ebx

void var_44
sub_6d783c(&var_44, ebx + (i_1 << 1), i - i_1)
int32_t var_8_2 = 1
int32_t var_34

if (var_34 == 0)
    sub_631b70(&var_44, 1, var_2c.w)

int32_t var_70_6 = var_2c
void var_88
sub_631da0(&var_88, &var_44)
sub_6de72a(arg1, arg2, arg3, arg4, arg5, arg6, var_48.d)
sub_631740(&var_44, 1, nullptr)
void* const __saved_ebp_3 = &data_6e2164
@__security_check_cookie@4(eax_11 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = __saved_ebp_3
return arg1
