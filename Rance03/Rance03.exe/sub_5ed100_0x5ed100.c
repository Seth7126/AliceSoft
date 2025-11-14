// 函数: sub_5ed100
// 地址: 0x5ed100
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cbb42
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct systemservice::CApp::VTable** var_14 = arg1
*arg1 = &systemservice::CApp::`vftable'
int32_t var_4 = 0
arg1[0x18] = &bridgemessage::CBridgeMessageQueue::`vftable'
void* var_10 = &arg1[0x18]
var_4.b = 3
sub_448380(&arg1[0x18])
sub_4484a0(&arg1[0x1b])
j__free(arg1[0x1b])
arg1[0x1b] = 0
var_4.b = 1
int32_t* ecx_2 = arg1[0x1a]
arg1[0x19] = &thread::CCriticalSection::`vftable'

if (ecx_2 != 0)
    (**ecx_2)(1)

arg1[0x10] = &bridgemessage::CBridgeMessageQueue::`vftable'
void* var_10_1 = &arg1[0x10]
var_4.b = 5
sub_448380(&arg1[0x10])
sub_4484a0(&arg1[0x13])
j__free(arg1[0x13])
arg1[0x13] = 0
var_4.b = 0
int32_t* ecx_5 = arg1[0x12]
arg1[0x11] = &thread::CCriticalSection::`vftable'

if (ecx_5 != 0)
    (**ecx_5)(1)

int32_t result = sub_441ce0(&arg1[0xe])
fsbase->NtTib.ExceptionList = ExceptionList
return result
