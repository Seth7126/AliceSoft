// 函数: ??$_Boost_call@V<lambda_bc27f093c9b87246d0ac55627ea49ac0>@@@?A0xcf5fba64@@YANABV<lambda_bc27f093c9b87246d0ac55627ea49ac0>@@@Z
// 地址: 0x68ae20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747201
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* i = arg3
struct graphengined3d11::CSamplerState::VTable** result = arg4
struct graphengined3d11::CSamplerState::VTable** result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 8)
    struct graphengined3d11::CSamplerState::VTable** result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = &graphengined3d11::CSamplerState::`vftable'
        int32_t* ecx = *(i + 4)
        result[1] = ecx
        
        if (ecx != 0)
            (*(*ecx + 4))(ecx)
    
    result = &result[2]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
