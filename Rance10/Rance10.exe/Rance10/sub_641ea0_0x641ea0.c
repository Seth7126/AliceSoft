// 函数: sub_641ea0
// 地址: 0x641ea0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$___std_fs_get_file_id@8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = data_7fcbc4
struct thread::CCriticalLock::VTable* const var_20 = &thread::CCriticalLock::`vftable'
void* var_18 = edi + 0x174
EnterCriticalSection(*(edi + 0x178) + 4)
char var_1c = 1
int32_t var_8_1 = 0
int32_t* ecx = *(edi + 0x20)

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    *(edi + 0x20) = 0

*(edi + 0x20) = arg1

if (arg1 != 0)
    (**arg1)(eax_2)

*(edi + 0x180) = arg1
int32_t result = LeaveCriticalSection(*(edi + 0x178) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
