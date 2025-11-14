// 函数: sub_4ce120
// 地址: 0x4ce120
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bbc98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_10_1 = arg1
*(arg1 + 0x10) = 0
int32_t var_4 = 0
struct std::_Func_base<int32_t, class std::string>::std::_Func_impl<struct std::_Callable_obj<class std::_Bind<0, void, class std::_Mem_fn_wrap<int, int (__thiscall partsengine::CActivityData::*)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const, class partsengine::CActivityData const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &>, class partsengine::CActivityData *const, class std::_Ph<1> &>, 0>, class std::allocator<class std::_Func_class<int, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>, int, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>::VTable
    ** eax_3 = sub_69adc6(0x14)

if (eax_3 == 0)
    sub_69a4fc()
    noreturn

*eax_3 = &std::_Func_impl<struct std::_Callable_obj<class std::_Bind<0, void, class std::_Mem_fn_wrap<int, int (__thiscall partsengine::CActivityData::*)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const, class partsengine::CActivityData const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &>, class partsengine::CActivityData *const, class std::_Ph<1> &>, 0>, class std::allocator<class std::_Func_class<int, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>, int, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>::`vftable'{for `std::_Func_base<int32_t, class std::string>'}
eax_3[1] = *arg2
int32_t eax_4
eax_4.b = arg2[1].b
eax_3[2].b = eax_4.b
eax_3[3] = arg2[2]
*(arg1 + 0x10) = eax_3
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
