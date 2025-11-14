// 函数: sub_60a980
// 地址: 0x60a980
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ccff6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct graphengined3d11::CDirect3DDevice::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &graphengined3d11::CDirect3DDevice::`vftable'
int32_t var_4 = 1
sub_60aed0(arg1)
var_4.b = 0
sub_60a4b0(&arg1[0xc])
int32_t* eax_3 = arg1[9]
sub_4200d0(&arg1[9], &var_10, *eax_3, eax_3)
int32_t result = j__free(arg1[9])
fsbase->NtTib.ExceptionList = ExceptionList
return result
