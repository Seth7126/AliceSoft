// 函数: sub_4ac310
// 地址: 0x4ac310
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bd041
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIInputController::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIInputController::VTable** var_10_1 = arg1
*arg1 = &partsengine::CGUIInputController::`vftable'
int32_t var_4 = 2
(*(arg1[1]->vFunc_0 + 4))(eax_2)
sub_485650(&arg1[0x1c])
arg1[0x1b] = &partsengine::CIbisInputWrapper::`vftable'
int32_t result = sub_4e35d0(&arg1[9])
fsbase->NtTib.ExceptionList = ExceptionList
return result
