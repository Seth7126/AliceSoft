// 函数: sub_4cd910
// 地址: 0x4cd910
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x10)

if (ecx != 0)
    (*(*ecx + 0x10))(ecx != arg1)
    *(arg1 + 0x10) = 0

struct std::_Func_base<bool, int32_t, class std::string const&>::std::_Func_impl<struct std::_Callable_obj<class <lambda_864194526412a95bb686c09bc9d426de>,0>,class std::allocator<class std::_Func_class<bool,int32_t,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const&> >,bool,int32_t,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const&>::VTable
    ** eax_2 = sub_69adc6(0x24)

if (eax_2 == 0)
    sub_69a4fc()
    noreturn

*eax_2 = &std::_Func_impl<struct std::_Callable_obj<class <lambda_864194526412a95bb686c09bc9d426de>,0>,class std::allocator<class std::_Func_class<bool,int32_t,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const&> >,bool,int32_t,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const&>::`vftable'{for `std::_Func_base<bool, int32_t, class std::string const&>'}
*(eax_2 + 4) = *arg2
*(eax_2 + 0x14) = arg2[1].q
eax_2[7] = *(arg2 + 0x18)
*(arg1 + 0x10) = eax_2
return arg1
