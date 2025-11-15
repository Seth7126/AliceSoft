// 函数: sub_698970
// 地址: 0x698970
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748302
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_40
void* var_24
(*(**arg1 + 8))(&var_24)
int32_t var_8_1 = 0
var_8_1.b = 1
var_8_1.b = 0
void var_18
int32_t result

if (*Concurrency::details::ThreadProxy::~ThreadProxy(&var_18) != *(*arg1 + 8))
    int32_t eax_8 = *arg1
    int32_t var_2c
    std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >(
        &var_2c, &var_24)
    struct std::_Func_base<void>::std::_Func_impl<class <lambda_5e5ab22ea98f4361dbf159481d01f54d>, class std::allocator<int>, void>::VTable
        * const var_68 = &std::_Func_impl<class <lambda_5e5ab22ea98f4361dbf159481d01f54d>, class std::allocator<int>, void>::`vftable'{for `std::_Func_base<void>'}
    int32_t var_64_1 = eax_8
    int32_t var_60_1 = var_2c
    int32_t var_28
    int32_t var_5c_1 = var_28
    struct std::_Func_base<void>::std::_Func_impl<class <lambda_5e5ab22ea98f4361dbf159481d01f54d>, class std::allocator<int>, void>::VTable
        * const* var_44_3 = &var_68
    var_8_1.b = 2
    *arg1
    result = sub_697e80(var_68)
else
    result = Mod1::AddSymbols2(var_24, *arg1, 0xffffffff)

int32_t var_8_2 = 6
int32_t* var_20

if (var_20 != 0)
    bool cond:0_1 = var_20[1] != 1
    result = var_20[1]
    var_20[1] -= 1
    
    if (not(cond:0_1))
        result = (**var_20)()
        int32_t edi_1 = var_20[2]
        var_20[2] -= 1
        
        if (edi_1 == 1)
            result = (*(*var_20 + 4))()

fsbase->NtTib.ExceptionList = ExceptionList
return result
