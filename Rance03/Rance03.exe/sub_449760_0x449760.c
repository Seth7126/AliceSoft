// 函数: sub_449760
// 地址: 0x449760
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6ca6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IInterface::cgmanager::CCGManager::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &cgmanager::CCGManager::`vftable'{for `IInterface'}
int32_t var_4 = 1
sub_449c30(arg1)
var_4.b = 0
arg1[0xc] = &cgmanager::CDebugCGLoader::`vftable'
sub_44b360(arg1[0xe]->__offset(0x4).d)
void* eax_4 = arg1[0xe]
*(eax_4 + 4) = eax_4
int32_t* eax_5 = arg1[0xe]
*eax_5 = eax_5
void* eax_6 = arg1[0xe]
*(eax_6 + 8) = eax_6
arg1[0xf] = 0
int32_t** eax_7 = arg1[0xe]
sub_44b3e0(&arg1[0xe], &var_10, *eax_7, eax_7)
j__free(arg1[0xe])
int32_t var_4_1 = 0xffffffff
arg1[8] = &cgmanager::CDebugCGLoader::`vftable'
sub_44b360(arg1[0xa]->__offset(0x4).d)
void* eax_9 = arg1[0xa]
*(eax_9 + 4) = eax_9
int32_t* eax_10 = arg1[0xa]
*eax_10 = eax_10
void* eax_11 = arg1[0xa]
*(eax_11 + 8) = eax_11
arg1[0xb] = 0
int32_t** eax_12 = arg1[0xa]
sub_44b3e0(&arg1[0xa], &var_10, *eax_12, eax_12)
int32_t result = j__free(arg1[0xa])
fsbase->NtTib.ExceptionList = ExceptionList
return result
