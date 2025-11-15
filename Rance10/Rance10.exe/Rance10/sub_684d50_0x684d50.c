// 函数: sub_684d50
// 地址: 0x684d50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746ebb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct graphengined3d11::CDirect3DDevice::VTable** var_18 = arg1
*arg1 = &graphengined3d11::CDirect3DDevice::`vftable'
__builtin_memset(&arg1[1], 0, 0x20)
void* var_14
int32_t* var_28 = &var_14
var_14 = nullptr
__builtin_memset(&arg1[9], 0, 0x24)
sub_685b10(&arg1[9], &arg1[9])
int32_t var_8_1 = 0
arg1[0xc] = 0xffffffff
var_14 = &arg1[0xd]
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xd] = sub_42e780()
__builtin_memset(&arg1[0xf], 0, 0x12)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
