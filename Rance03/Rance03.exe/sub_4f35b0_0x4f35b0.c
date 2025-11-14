// 函数: sub_4f35b0
// 地址: 0x4f35b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5458
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_44 = arg3
struct partsengine::CPartsList::VTable** result = sub_4a52a0(data_75d4fc + 0x178)
struct partsengine::CPartsList::VTable** result_1 = result

if (result_1 != 0)
    result = result_1[2]
    struct partsengine::CPartsList::VTable** vFunc_0
    
    if (arg3 s< result || result_1[1] + result s<= arg3)
        vFunc_0 = nullptr
    label_4f362d:
        
        if (vFunc_0 != 0)
            goto label_4f363c
    else
        vFunc_0 = result_1[3][arg3 - result].vFunc_0
        
        if (vFunc_0 == 0)
            result = sub_4e7720(result_1, arg3)
            vFunc_0 = result
            goto label_4f362d
        
    label_4f363c:
        struct partsengine::CPartsList::VTable* var_2c
        sub_401f60(&var_2c, (**arg2)(eax_4))
        result = arg4
        int32_t var_4 = 0
        
        if (result u<= 3)
            result = sub_4058a0(&vFunc_0[0x120][result * 6], &var_2c)
            
            if (result.b == 0)
                result = &var_2c
                char* ecx_12 = &vFunc_0[0x120][result * 6]
                
                if (ecx_12 != &var_2c)
                    result = sub_401ff0(ecx_12, &var_2c, 0, 0xffffffff)
                
                vFunc_0[0x1c].b = 1
        
        int32_t var_18
        
        if (var_18 u>= 0x10)
            result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
