// 函数: sub_5ecf80
// 地址: 0x5ecf80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cbadc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct systemservice::CApp::VTable** var_14 = arg1
*arg1 = &systemservice::CApp::`vftable'
arg1[1].b = 0
__builtin_memset(&arg1[2], 0, 0x38)
arg1[0xe] = sub_5eda90()
int32_t var_4 = 0
arg1[0x10] = &bridgemessage::CBridgeMessageQueue::`vftable'
void* var_10 = &arg1[0x10]
arg1[0x11] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** edi = sub_69adc6(0x1c)

if (edi == 0)
    edi = nullptr
else
    *edi = &thread::CCriticalSection::CImpl::`vftable'
    InitializeCriticalSection(&edi[1])

arg1[0x12] = edi
var_4.b = 1
sub_448450(&arg1[0x13])
var_4.b = 2
arg1[0x18] = &bridgemessage::CBridgeMessageQueue::`vftable'
void* var_10_1 = &arg1[0x18]
arg1[0x19] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** edi_1 = sub_69adc6(0x1c)

if (edi_1 == 0)
    edi_1 = nullptr
else
    *edi_1 = &thread::CCriticalSection::CImpl::`vftable'
    InitializeCriticalSection(&edi_1[1])

arg1[0x1a] = edi_1
var_4.b = 3
sub_448450(&arg1[0x1b])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
