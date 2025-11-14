// 函数: sub_4f2df0
// 地址: 0x4f2df0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0a33
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_90
int32_t eax_2 = __security_cookie ^ &var_90
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t xmm2
var_90 = xmm2
int32_t var_a8 = arg3
struct partsengine::CPartsList::VTable** result = sub_4a52a0(data_75d4fc + 0x178)
struct partsengine::CPartsList::VTable** result_1 = result

if (result_1 != 0)
    result = result_1[2]
    struct partsengine::CPartsList::VTable** vFunc_0
    
    if (arg3 s< result || result_1[1] + result s<= arg3)
        vFunc_0 = nullptr
    label_4f2e8a:
        
        if (vFunc_0 != 0)
            goto label_4f2e99
    else
        vFunc_0 = result_1[3][arg3 - result].vFunc_0
        
        if (vFunc_0 == 0)
            result = sub_4e7720(result_1, arg3)
            vFunc_0 = result
            goto label_4f2e8a
        
    label_4f2e99:
        int32_t var_88
        sub_401f60(&var_88, (**arg5)(eax_4))
        int32_t var_4 = 0
        int32_t xmm1
        int32_t var_70 = xmm1
        int32_t var_6c_1 = var_90
        void var_68
        sub_50b610(&var_68, arg2, arg4, &var_88)
        var_4.b = 1
        sub_4bd150(&vFunc_0[0x70], &var_70)
        result = sub_4b7cf0(&var_68)
        int32_t var_74
        
        if (var_74 u>= 0x10)
            result = j__free(var_88)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_90)
return result
