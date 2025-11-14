// 函数: ?_CallCatchBlock2@@YAPAXPAUEHRegistrationNode@@PBU_s_FuncInfo@@PAXHK@Z
// 地址: 0x69e0a8
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t __security_cookie_1 = __security_cookie
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = nullptr
int32_t var_14 = __security_cookie_1 ^ &ExceptionList
int32_t var_10 = arg2
int32_t (* var_18)(int32_t* arg1, void** arg2, int32_t* arg3) = sub_69dfd8
int32_t* var_c = arg1
int32_t var_8 = arg4 + 1
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = __CallSettingFrame@12(arg1, arg3, arg1, arg5)
fsbase->NtTib.ExceptionList = ExceptionList
return result
