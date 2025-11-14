// 函数: sub_5249c0
// 地址: 0x5249c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c30a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_24 = &thread::CCriticalLock::`vftable'
void* var_1c = arg1 + 0xc
EnterCriticalSection(*(arg1 + 0x10) + 4)
char var_20 = 1
int32_t var_c_1 = 0
void* ebx = *(arg1 + 0x1c)

if (ebx != 0)
    int64_t* var_40_1 = arg5
    *arg5 = *arg4
    arg5[1].d = arg4[1].d
    sub_530ed0(ebx, arg2, arg3, arg4)
    int64_t* var_40_2 = arg5
    sub_5316f0(ebx, arg2)
    *(arg5 + 4) = sub_530d30(ebx, *arg5, arg5[1].d)
else
    *arg5 = *arg3
    arg5[1].d = arg3[1].d

int32_t result = LeaveCriticalSection(*(arg1 + 0x10) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
