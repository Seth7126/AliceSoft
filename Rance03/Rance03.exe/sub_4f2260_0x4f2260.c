// 函数: sub_4f2260
// 地址: 0x4f2260
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4b08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t xmm3
int32_t var_30 = xmm3
int32_t xmm2
int32_t var_38 = xmm2
int32_t xmm1
int32_t var_34 = xmm1
int32_t var_54 = arg3
struct partsengine::CPartsList::VTable** result = sub_4a52a0(data_75d4fc + 0x178)
struct partsengine::CPartsList::VTable** result_1 = result

if (result_1 != 0)
    result = result_1[2]
    struct partsengine::CPartsList::VTable** vFunc_0
    
    if (arg3 s< result || result_1[1] + result s<= arg3)
        vFunc_0 = nullptr
    label_4f22f4:
        
        if (vFunc_0 != 0)
            goto label_4f2329
    else
        vFunc_0 = result_1[3][arg3 - result].vFunc_0
        
        if (vFunc_0 == 0)
            result = sub_4e7720(result_1, arg3)
            vFunc_0 = result
            goto label_4f22f4
        
    label_4f2329:
        int32_t var_4 = 0
        void* var_2c
        int32_t var_60_1 = sub_401f60(&var_2c, (**arg6)(eax_4))
        result = sub_4b7bc0(&vFunc_0[0x1b], arg4, arg2, arg5, &var_2c)
        int32_t var_18
        
        if (var_18 u>= 0x10)
            result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return result
