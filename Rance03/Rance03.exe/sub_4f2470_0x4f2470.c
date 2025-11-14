// 函数: sub_4f2470
// 地址: 0x4f2470
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
    label_4f24f2:
        
        if (vFunc_0 != 0)
            goto label_4f2501
    else
        vFunc_0 = result_1[3][arg3 - result].vFunc_0
        
        if (vFunc_0 == 0)
            result = sub_4e7720(result_1, arg3)
            vFunc_0 = result
            goto label_4f24f2
        
    label_4f2501:
        sub_401f60(&var_28, (**arg11)(eax_4))
        int32_t var_4 = 0
        result =
            sub_4b7d90(&vFunc_0[0x1b], arg2, arg4, arg5, arg6, arg7, arg8, arg9, arg10, &var_28)
        int32_t var_14
        
        if (var_14 u>= 0x10)
            result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_28)
return result
