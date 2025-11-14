// 函数: sub_4d5830
// 地址: 0x4d5830
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
struct std::_Func_base<bool>::std::_Func_impl<struct std::_Callable_obj<class std::_Bind<1, bool, struct std::_Pmf_wrap<bool (__thiscall partsengine::CGUIRadioButtonBoxModel::*)(class fileimage::CFileImageAnalyser &), bool, class partsengine::CGUIRadioButtonBoxModel, class fileimage::CFileImageAnalyser &>, class partsengine::CGUIRadioButtonBoxModel *, class std::reference_wrapper<class fileimage::CFileImageAnalyser>>, 0>, class std::allocator<class std::_Func_class<bool>>, bool>::VTable
    ** eax_3 = sub_69adc6(0x14)

if (eax_3 == 0)
    sub_69a4fc()
    noreturn

*eax_3 = &std::_Func_impl<struct std::_Callable_obj<class std::_Bind<1, bool, struct std::_Pmf_wrap<bool (__thiscall partsengine::CGUIRadioButtonBoxModel::*)(class fileimage::CFileImageAnalyser &), bool, class partsengine::CGUIRadioButtonBoxModel, class fileimage::CFileImageAnalyser &>, class partsengine::CGUIRadioButtonBoxModel *, class std::reference_wrapper<class fileimage::CFileImageAnalyser>>, 0>, class std::allocator<class std::_Func_class<bool>>, bool>::`vftable'{for `std::_Func_base<bool>'}
eax_3[1] = *arg2
eax_3[2] = arg2[1]
eax_3[3] = arg2[2]
*(arg1 + 0x10) = eax_3
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
