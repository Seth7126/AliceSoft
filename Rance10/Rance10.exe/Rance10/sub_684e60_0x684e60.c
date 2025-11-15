// 函数: sub_684e60
// 地址: 0x684e60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728076
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct graphengined3d11::CDirect3DDevice::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &graphengined3d11::CDirect3DDevice::`vftable'
sub_6850e0(arg1)
int32_t var_8_1 = 0
sub_6847f0(&arg1[0x10])
int32_t* eax_3 = arg1[0xd]
int32_t* var_24 = eax_3
sub_42e2e0(&arg1[0xd], &var_14, *eax_3)
int32_t result = sub_403160(arg1[0xd], 1, 0x18)
void* ecx_2 = arg1[9]

if (ecx_2 != 0)
    result = sub_403160(ecx_2, (arg1[0xb] - ecx_2) s>> 2, 4)
    arg1[9] = 0
    arg1[0xa] = 0
    arg1[0xb] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
