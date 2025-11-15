// 函数: sub_5642b0
// 地址: 0x5642b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$___std_fs_get_file_id@8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_20 = &thread::CCriticalLock::`vftable'
void* var_18 = arg1 + 8
EnterCriticalSection(*(arg1 + 0xc) + 4)
char var_1c = 1
int32_t var_8_1 = 0
void* ecx = *(arg1 + 0x18)
int32_t ebx

if (ecx != 0)
    ebx.b = sub_572df0(ecx, arg2, arg3, arg4, arg5)
else
    int64_t* eax_5 = arg3
    ebx.b = 0
    *arg5 = *eax_5
    arg5[1].d = eax_5[1].d

LeaveCriticalSection(*(arg1 + 0xc) + 4)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
