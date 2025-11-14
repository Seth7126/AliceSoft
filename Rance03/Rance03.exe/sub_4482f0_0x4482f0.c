// 函数: sub_4482f0
// 地址: 0x4482f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6a76
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct bridgemessage::CBridgeMessageQueue::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct bridgemessage::CBridgeMessageQueue::VTable** var_10_1 = arg1
*arg1 = &bridgemessage::CBridgeMessageQueue::`vftable'
int32_t var_4 = 1
sub_448380(arg1)
sub_4484a0(&arg1[3])
int32_t result = j__free(arg1[3])
arg1[3] = 0
int32_t var_4_1 = 0xffffffff
int32_t* ecx_1 = arg1[2]
arg1[1] = &thread::CCriticalSection::`vftable'

if (ecx_1 != 0)
    result = (**ecx_1)(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
