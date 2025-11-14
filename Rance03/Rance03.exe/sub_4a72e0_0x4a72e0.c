// 函数: sub_4a72e0
// 地址: 0x4a72e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bcb3c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIController::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIController::VTable** var_10_1 = arg1
*arg1 = &partsengine::CGUIController::`vftable'
int32_t var_4 = 0
sub_4a7380(arg1)
arg1[4] = &partsengine::CGUIInputController::`vftable'
void* var_10_2 = &arg1[4]
int32_t var_4_1 = 3
(*(arg1[5]->vFunc_0 + 4))(eax_2)
sub_485650(&arg1[0x20])
arg1[0x1f] = &partsengine::CIbisInputWrapper::`vftable'
sub_4e35d0(&arg1[0xd])

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
