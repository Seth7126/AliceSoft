// 函数: sub_641fe0
// 地址: 0x641fe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$___std_fs_get_file_id@8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_7fcbc4
struct thread::CCriticalLock::VTable* const var_20 = &thread::CCriticalLock::`vftable'
void* var_18 = esi + 0x174
EnterCriticalSection(*(esi + 0x178) + 4)
char var_1c = 1
int32_t var_8_1 = 0
int32_t ebx
ebx.b = sub_6411a0(esi + 0x18, arg1, arg2, arg3)
LeaveCriticalSection(*(esi + 0x178) + 4)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
