// 函数: sub_68b6d0
// 地址: 0x68b6d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728076
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct graphengined3d11::CShaderManager::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &graphengined3d11::CShaderManager::`vftable'
sub_68bdc0(arg1)
sub_684ac0(&arg1[0x58])
sub_684ac0(&arg1[0x53])
sub_684ac0(&arg1[0x4e])
sub_684ac0(&arg1[0x49])
sub_684ac0(&arg1[0x44])
sub_684ac0(&arg1[0x3f])
sub_684ac0(&arg1[0x3a])
int32_t var_8_1 = 0
`eh vector vbase constructor iterator'(&arg1[0x26], 0x14, 4, sub_684ac0)
int32_t* eax_4 = arg1[0x24]
int32_t* var_24 = eax_4
sub_42e2e0(&arg1[0x24], &var_14, *eax_4)
sub_403160(arg1[0x24], 1, 0x18)
int32_t* eax_5 = arg1[0x22]
int32_t* var_24_1 = eax_5
sub_42e2e0(&arg1[0x22], &var_14, *eax_5)
sub_403160(arg1[0x22], 1, 0x18)
arg1[0x14] = &graphengine::CShaderParam::`vftable'{for `IShaderParam'}
char* result = sub_681c10(&arg1[4])
fsbase->NtTib.ExceptionList = ExceptionList
return result
