// 函数: sub_683920
// 地址: 0x683920
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct graphengine::CTextureManager::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &graphengine::CTextureManager::`vftable'
sub_6839b0(arg1)
int32_t** eax_3 = arg1[4]
sub_4f27c0(&arg1[4], &var_14, *eax_3, eax_3)
sub_403160(arg1[4], 1, 0x14)
int32_t** eax_4 = arg1[1]
sub_4346e0(&arg1[1], &var_14, *eax_4, eax_4)
int32_t result = sub_403160(arg1[1], 1, 0x18)
fsbase->NtTib.ExceptionList = ExceptionList
return result
