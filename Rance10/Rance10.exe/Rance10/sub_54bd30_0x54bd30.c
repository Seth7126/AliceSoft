// 函数: sub_54bd30
// 地址: 0x54bd30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$?_UnstructuredChoreWrapper@_UnrealizedChore@details@Concurrency@@CAXPAV123@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_e8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CConstructionProcess::VTable* var_e0
sub_4c3030(&var_e0)
int32_t var_8_1 = 0
int32_t var_c4 = arg2
int32_t var_c0 = arg3
int32_t var_b4 = arg4
int32_t var_b0 = arg5
int32_t var_ac = arg6
int32_t var_a8 = arg7
int32_t var_a4 = arg8
int32_t var_dc = 0xa
sub_4c52a0(arg1 + 0x7c, &var_e0)
sub_4c3130(&var_e0)
char* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
