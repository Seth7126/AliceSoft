// 函数: sub_44d0a0
// 地址: 0x44d0a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a4f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct cgmanager::CDebugCGLoader::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &cgmanager::CDebugCGLoader::`vftable'
int32_t var_8_1 = 0
sub_44dca0(arg1[2][1].vFunc_0)
void* eax_4 = arg1[2]
*(eax_4 + 4) = eax_4
int32_t* eax_5 = arg1[2]
*eax_5 = eax_5
void* eax_6 = arg1[2]
*(eax_6 + 8) = eax_6
arg1[3] = 0
int32_t* eax_7 = arg1[2]
int32_t* var_20_1 = eax_7
sub_44dda0(&arg1[2], &var_14, *eax_7)
int32_t result = sub_403160(arg1[2], 1, 0x40)
fsbase->NtTib.ExceptionList = ExceptionList
return result
