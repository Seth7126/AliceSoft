// 函数: ??$?0AAPAUEHExceptionRecord@@_N@?$_Ref_count_obj@V__ExceptionPtr@@@std@@QAE@AAPAUEHExceptionRecord@@$$QA_N@Z
// 地址: 0x6d4c90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 8
int32_t (* var_c)(void* arg1) = sub_749422
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
void* const var_2c_1 = &data_6d4c9c
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::_Ref_count_base::std::_Ref_count_obj<class __ExceptionPtr>::VTable** var_14 = arg1
arg1[1] = 1
arg1[2] = 1
int32_t var_8 = 0
*arg1 = &std::_Ref_count_obj<class __ExceptionPtr>::`vftable'{for `std::_Ref_count_base'}
void* var_18 = &arg1[3]
var_8.b = 1

if (arg1 != 0xfffffff4)
    __ExceptionPtr::__ExceptionPtr(&arg1[3], *arg2, *arg3)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d4cd9
return arg1
