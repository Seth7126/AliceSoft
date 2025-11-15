// 函数: sub_518280
// 地址: 0x518280
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$?_UnstructuredChoreWrapper@_UnrealizedChore@details@Concurrency@@CAXPAV123@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_f8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = *(arg1 + 0x44)
sub_555e00(esi, 0x18, arg8)
void* esi_1 = *(esi + (arg8 << 2) + 0x7c)
struct partsengine::CConstructionProcess::VTable* var_e0
sub_4c3030(&var_e0)
int32_t var_8_1 = 0
sub_4c3680(&var_e0, arg2, arg3, arg4, arg5, arg6, arg7)
sub_4c52a0(esi_1 + 0x7c, &var_e0)
sub_4c3130(&var_e0)
char* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
