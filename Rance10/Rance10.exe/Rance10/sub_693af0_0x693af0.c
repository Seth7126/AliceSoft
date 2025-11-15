// 函数: sub_693af0
// 地址: 0x693af0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct graphengined3d11::CTransformedSpriteShader::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &graphengined3d11::CTransformedSpriteShader::`vftable'
sub_692530(arg1)
sub_684ac0(&arg1[0x19])
sub_684ac0(&arg1[0x14])
int32_t* eax_3 = arg1[0x12]
int32_t* var_24 = eax_3
sub_42e2e0(&arg1[0x12], &var_14, *eax_3)
sub_403160(arg1[0x12], 1, 0x18)
int32_t* eax_4 = arg1[0x10]
int32_t* var_24_1 = eax_4
sub_42e2e0(&arg1[0x10], &var_14, *eax_4)
sub_403160(arg1[0x10], 1, 0x18)
char* result = sub_681c10(&arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
