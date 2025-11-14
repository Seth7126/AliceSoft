// 函数: ?OffForSym@GSI1@@UAEKPAE@Z
// 地址: 0x60a610
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6ccf81
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* i = arg3
struct graphengined3d11::CBlendState::VTable** result = arg4
struct graphengined3d11::CBlendState::VTable** result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 8)
    struct graphengined3d11::CBlendState::VTable** result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = &graphengined3d11::CBlendState::`vftable'
        int32_t* ecx = *(i + 4)
        result[1] = ecx
        
        if (ecx != 0)
            (*(*ecx + 4))(ecx)
    
    result = &result[2]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
