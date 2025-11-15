// 函数: sub_44ba70
// 地址: 0x44ba70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ab46
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class IInterface>::cgmanager::CCGManager::VTable** var_14 = arg1
arg1[1] = 1
*arg1 = &cgmanager::CCGManager::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
arg1[2] = 0x8000000
arg1[3].b = 0
sub_406210(&arg1[4])
int32_t var_8_1 = 0
arg1[0x11] = 0
arg1[0x12] = 0
arg1[0x13] = 0
arg1[0x14] = &cgmanager::CDebugCGLoader::`vftable'
arg1[0x15].b = 0
void* var_18 = &arg1[0x14]
void* var_18_1 = &arg1[0x16]
arg1[0x16] = 0
arg1[0x17] = 0
arg1[0x16] = sub_44e4c0()
var_8_1.b = 1
arg1[0x18] = &cgmanager::CDebugCGLoader::`vftable'
arg1[0x19].b = 0
void* var_18_2 = &arg1[0x18]
void* var_18_3 = &arg1[0x1a]
arg1[0x1a] = 0
arg1[0x1b] = 0
arg1[0x1a] = sub_44e4c0()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
