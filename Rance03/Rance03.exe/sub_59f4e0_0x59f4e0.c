// 函数: sub_59f4e0
// 地址: 0x59f4e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c8956
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_18 = arg3
__chkstk(0x4030)
int32_t eax_2 = __security_cookie ^ &var_18
int32_t var_1c = __security_cookie ^ &var_18
int32_t arg_401c
fsbase->NtTib.ExceptionList = &arg_401c
char arg_10[0x4004]
arg_10[0] = 0
void arg_8
_vsprintf_s(&arg_10, 0x4000, arg4, &arg_8)
uint32_t eax_5 = GetCurrentThreadId()
eax_5.b = data_75d504 == eax_5

if (data_74b43c == 0 || eax_5.b == 0)
    struct thread::CCriticalLock::VTable* const var_14 = &thread::CCriticalLock::`vftable'
    void** var_c_1 = &data_74f98c
    EnterCriticalSection(data_74f990 + 4)
    var_10.b = 1
    int32_t arg_4024 = 0
    int32_t var_8
    sub_401f60(&var_8, &arg_10)
    arg_4024.b = 1
    sub_412d60(&data_75da10, &var_8)
    
    if (arg5 u>= 0x10)
        j__free(var_8)
    
    LeaveCriticalSection(data_74f990 + 4)
else
    sub_64b530(&arg_10)

enum MESSAGEBOX_RESULT result
result.b = 0
fsbase->NtTib.ExceptionList = arg_401c
sub_69a5bc(eax_2 ^ &var_18)
return result
