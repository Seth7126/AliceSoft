// 函数: sub_41d070
// 地址: 0x41d070
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b445f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpanalysis::CTreeViewCallback::dpanalysis::CWorkSpace::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &dpanalysis::CWorkSpace::`vftable'{for `dpanalysis::CTreeViewCallback'}
int32_t var_4 = 3
sub_41d100(arg1)
sub_41cff0(&arg1[0x22])
sub_41cff0(&arg1[0x13])
sub_41cff0(&arg1[4])
int32_t* eax_3 = arg1[2]
sub_4200d0(&arg1[2], &var_10, *eax_3, eax_3)
int32_t result = j__free(arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
