// 函数: sub_4f2380
// 地址: 0x4f2380
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9278
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_28
int32_t eax_2 = __security_cookie ^ &var_28
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_40 = arg3
struct partsengine::CPartsList::VTable** result = sub_4a52a0(data_75d4fc + 0x178)
struct partsengine::CPartsList::VTable** result_1 = result

if (result_1 != 0)
    result = result_1[2]
    struct partsengine::CPartsList::VTable** vFunc_0
    
    if (arg3 s< result || result_1[1] + result s<= arg3)
        vFunc_0 = nullptr
    label_4f23fe:
        
        if (vFunc_0 != 0)
            goto label_4f240d
    else
        vFunc_0 = result_1[3][arg3 - result].vFunc_0
        
        if (vFunc_0 == 0)
            result = sub_4e7720(result_1, arg3)
            vFunc_0 = result
            goto label_4f23fe
        
    label_4f240d:
        sub_401f60(&var_28, (**arg7)(eax_4))
        int32_t var_4 = 0
        result = sub_4a2e30(vFunc_0, arg2, arg4, arg5, arg6, &var_28)
        int32_t var_14
        
        if (var_14 u>= 0x10)
            result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_28)
return result
