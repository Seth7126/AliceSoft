// 函数: sub_4a9d80
// 地址: 0x4a9d80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a4f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CAlphaClipperManager::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CAlphaClipperManager::`vftable'
int32_t var_8_1 = 0
sub_42e7b0(arg1[1][1].vFunc_0)
void* eax_4 = arg1[1]
*(eax_4 + 4) = eax_4
int32_t* eax_5 = arg1[1]
*eax_5 = eax_5
void* eax_6 = arg1[1]
*(eax_6 + 8) = eax_6
arg1[2] = 0
int32_t* eax_7 = arg1[1]
int32_t* var_20_1 = eax_7
sub_4602e0(&arg1[1], &var_14, *eax_7)
int32_t result = sub_403160(arg1[1], 1, 0x18)
fsbase->NtTib.ExceptionList = ExceptionList
return result
