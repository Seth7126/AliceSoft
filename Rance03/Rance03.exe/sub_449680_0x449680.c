// 函数: sub_449680
// 地址: 0x449680
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6c6b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IInterface::cgmanager::CCGManager::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::cgmanager::CCGManager::VTable** var_10_1 = arg1
*arg1 = &cgmanager::CCGManager::`vftable'{for `IInterface'}
arg1[1] = 1
arg1[2] = 0x1000000
arg1[3].b = 0
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = 0
arg1[8] = &cgmanager::CDebugCGLoader::`vftable'
arg1[9].b = 0
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xa] = sub_44b730()
int32_t var_4 = 0
arg1[0xc] = &cgmanager::CDebugCGLoader::`vftable'
arg1[0xd].b = 0
arg1[0xe] = 0
arg1[0xf] = 0
arg1[0xe] = sub_44b730()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
