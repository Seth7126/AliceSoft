// 函数: sub_512130
// 地址: 0x512130
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73815e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if (arg4 != 0)
    char var_48
    char var_38_1 = var_48
    struct std::_Func_base<int32_t, class std::string>::std::_Func_impl<class std::_Binder<struct std::_Unforced,class std::_Mem_fn<int32_t (__thiscall*)(* this, class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const&) const>,class partsengine::CActivityData* const,struct std::_Ph<1> const&>,class std::allocator<int32_t>,int32_t,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >::VTable
        * const var_40 = &std::_Func_impl<class std::_Binder<struct std::_Unforced,class std::_Mem_fn<int32_t (__thiscall*)(* this, class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const&) const>,class partsengine::CActivityData* const,struct std::_Ph<1> const&>,class std::allocator<int32_t>,int32_t,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >::`vftable'{for `std::_Func_base<int32_t, class std::string>'}
    int32_t (__thiscall* var_3c_1)(int32_t* arg1, int32_t* arg2) = sub_510890
    int32_t ecx
    int32_t var_34_1 = ecx
    struct std::_Func_base<int32_t, class std::string>::std::_Func_impl<class std::_Binder<struct std::_Unforced,class std::_Mem_fn<int32_t (__thiscall*)(* this, class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const&) const>,class partsengine::CActivityData* const,struct std::_Ph<1> const&>,class std::allocator<int32_t>,int32_t,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >::VTable
        * const* var_1c_1 = &var_40
    int32_t var_64_1 = arg5
    int32_t var_8_1 = 0
    struct partsengine::CPartsList::VTable** eax_3 = sub_4f14d0(arg4 + 0x34)
    int32_t edi_1
    
    if (eax_3 != 0)
        edi_1 = eax_3[2]
    
    struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** vFunc_0
    
    if (eax_3 == 0 || arg5 s< edi_1 || eax_3[1] + edi_1 s<= arg5)
        vFunc_0 = nullptr
    else
        vFunc_0 = eax_3[3][arg5 - edi_1].vFunc_0
        
        if (vFunc_0 == 0)
            int32_t var_64_2 = arg5
            vFunc_0 = sub_526580(eax_3)
    
    void* ebx
    ebx.b = sub_4f0b80(vFunc_0, arg1, arg2, arg3, &var_40)
    int32_t var_8_2 = 1
    
    if (var_1c_1 != 0)
        (*var_1c_1)->__offset(0x10).d(var_1c_1 != &var_40)
    
    result = ebx.b
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
