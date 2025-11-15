// 函数: ?do_put@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MBE?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAAVios_base@2@DABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z
// 地址: 0x6e663f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x40
int32_t (* var_c)(void* arg1) = sub_74a33f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_11 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_11
void* const var_64_8 = &data_6e664b
int32_t var_8_3 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg7
int32_t var_8 = 0
void var_50
int32_t* eax_3 = sub_6d0f2e(std::ios_base::getloc(arg5, &var_50))
int32_t var_8_1 = 0xffffffff
std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    &var_50)
int32_t var_20
int32_t* var_64_2 = &var_20
char const* const var_68 = "0123456789-"
char const* const var_6c = "0123456789-"
int32_t esi = *(*eax_3 + 0x1c)
j_sub_4033e0()
esi(var_6c, var_68, var_64_2)
int32_t i_1 = 0
char var_3c = 0

if (ebx[4] != 0)
    char* eax_4
    
    if (ebx[5] u< 0x10)
        eax_4 = ebx
    else
        eax_4 = *ebx
    
    eax_4.b = *eax_4
    char var_16
    
    if (eax_4.b == var_16)
        var_3c = 1
        i_1 = 1

int32_t i = i_1

if (i_1 u< ebx[4])
    do
        int32_t* eax_5
        
        if (ebx[5] u< 0x10)
            eax_5 = ebx
        else
            eax_5 = *ebx
        
        if (std::_Find_elem<char>(&var_20, *(eax_5 + i)) u>= 0xa)
            break
        
        i += 1
    while (i u< ebx[4])

if (ebx[5] u>= 0x10)
    ebx = *ebx

int32_t var_28 = 0
int32_t var_24 = 0xf
char var_38 = 0
sub_403490(&var_38, ebx + i_1, i - i_1)
int32_t var_8_2 = 1

if (var_28 == 0)
    sub_405500(&var_38, 1, var_20.b)

int32_t var_64_6 = var_20
void var_7c
sub_4033b0(&var_7c, &var_38)
std::money_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Putmfld(
    arg1, arg2, arg3, arg4, arg5, arg6, var_3c.d)
sub_4033f0(&var_38, 1, nullptr)
void* const __saved_ebp_3 = &data_6e6771
@__security_check_cookie@4(eax_11 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = __saved_ebp_3
return arg1
