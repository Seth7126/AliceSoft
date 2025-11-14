// 函数: sub_5b34e0
// 地址: 0x5b34e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8d58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_34 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = data_75d560
*(arg1 + 0x20) += 1
bool cond:0 = (eax_3 | data_75d564) != 0
struct win32only::CHighResolutionTimer::VTable* const var_20 =
    &win32only::CHighResolutionTimer::`vftable'
int64_t var_18 = 0
int32_t var_28
int32_t result

if (not(cond:0))
    QueryPerformanceFrequency(&var_28)
    data_75d560 = var_28
    data_75d564 = result

int32_t var_4 = 0
sub_5b3640(arg1 + 0x24, &var_20)
void* esi_1 = *(arg1 + 0x28)
QueryPerformanceCounter(&var_28)
*(esi_1 - 8) = var_28
*(esi_1 - 4) = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
