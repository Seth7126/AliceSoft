// 函数: sub_4f2670
// 地址: 0x4f2670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c09f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_5c = arg3
struct partsengine::CPartsList::VTable** edx = sub_4a52a0(data_75d4fc + 0x178)
struct partsengine::CPartsList::VTable** result

if (edx == 0)
    result.b = 0
else
    result = edx[2]
    struct partsengine::CPartsList::VTable** vFunc_0
    
    if (arg3 s< result || edx[1] + result s<= arg3)
        vFunc_0 = nullptr
    label_4f26f2:
        
        if (vFunc_0 != 0)
            goto label_4f2706
        
        result.b = 0
    else
        vFunc_0 = edx[3][arg3 - result].vFunc_0
        
        if (vFunc_0 == 0)
            vFunc_0 = sub_4e7720(edx, arg3)
            goto label_4f26f2
        
    label_4f2706:
        void* var_2c
        sub_401f60(&var_2c, (**arg8)(eax_4))
        int32_t var_4 = 0
        sub_401f60(&var_44, (**arg2)())
        var_4.b = 1
        int32_t* ebx
        ebx.b = sub_4a2ee0(vFunc_0, &var_44, arg4, arg5, arg6, arg7, &var_2c).b
        int32_t var_30
        
        if (var_30 u>= 0x10)
            j__free(var_44.d)
        
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
        
        result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
