// 函数: sub_51fa20
// 地址: 0x51fa20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b733b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct passregister::CManager::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &passregister::CManager::`vftable'
int32_t var_4 = 0
sub_51faa0(arg1)
int32_t** eax_3 = arg1[1]
sub_4200d0(&arg1[1], &var_10, *eax_3, eax_3)
j__free(arg1[1])

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
