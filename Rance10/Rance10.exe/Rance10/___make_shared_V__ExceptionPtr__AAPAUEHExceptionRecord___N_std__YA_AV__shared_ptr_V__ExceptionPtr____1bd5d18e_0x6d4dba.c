// 函数: ??$make_shared@V__ExceptionPtr@@AAPAUEHExceptionRecord@@_N@std@@YA?AV?$shared_ptr@V__ExceptionPtr@@@0@AAPAUEHExceptionRecord@@$$QA_N@Z
// 地址: 0x6d4dba
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 8
int32_t (* var_c)(void* arg1) = sub_7494a4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
void* const var_2c_2 = &data_6d4dc6
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
struct std::_Ref_count_base::std::_Ref_count_obj<class __ExceptionPtr>::VTable** eax =
    sub_6e810c(0x60)
struct std::_Ref_count_base::std::_Ref_count_obj<class __ExceptionPtr>::VTable** var_18 = eax
int32_t var_8 = 0
struct std::_Ref_count_base::std::_Ref_count_obj<class __ExceptionPtr>::VTable** eax_1

if (eax == 0)
    eax_1 = nullptr
else
    eax_1 = public: __thiscall std::_Ref_count_obj<class __ExceptionPtr>::_Ref_count_obj<class __ExceptionPtr><struct EHExceptionRecord *&, bool>(struct EHExceptionRecord *&, bool &&)(
        eax, arg2, arg3)

*arg1 = 0
arg1[1] = 0
sub_6d5365(arg1, &eax_1[3], eax_1)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d4e09
return arg1
