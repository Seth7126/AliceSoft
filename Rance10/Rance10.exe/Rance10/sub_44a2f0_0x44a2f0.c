// 函数: sub_44a2f0
// 地址: 0x44a2f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a90b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct bridgemessage::CBridgeMessageQueue::VTable** var_14 = arg1
*arg1 = &bridgemessage::CBridgeMessageQueue::`vftable'
struct thread::CCriticalSection::VTable** var_18 = &arg1[1]
arg1[1] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** eax_3 = sub_6e810c(0x1c)
struct thread::CCriticalSection::CImpl::VTable** var_18_1 = eax_3
*eax_3 = &thread::CCriticalSection::CImpl::`vftable'
InitializeCriticalSection(&eax_3[1])
arg1[2] = eax_3
int32_t var_8_1 = 0
void* var_18_2 = &arg1[3]
__builtin_memset(&arg1[3], 0, 0x14)
int32_t* eax_4 = sub_6e810c(8)
arg1[3] = eax_4

if (eax_4 != 0)
    *eax_4 = 0
    eax_4[1] = 0

arg1[3]->vFunc_0 = &arg1[3]
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
