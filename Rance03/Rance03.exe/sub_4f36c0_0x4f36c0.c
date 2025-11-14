// 函数: sub_4f36c0
// 地址: 0x4f36c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5458
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_44 = arg3
struct partsengine::CPartsList::VTable** eax_5 = sub_4a52a0(data_75d4fc + 0x178)
int32_t result

if (eax_5 == 0)
    result = (*(*arg2 + 4))(0x6da5bb)
else
    int32_t eax_6 = eax_5[2]
    struct IInterface::VTable** vFunc_0
    
    if (arg3 s< eax_6 || eax_5[1] + eax_6 s<= arg3)
        vFunc_0 = nullptr
    label_4f373b:
        
        if (vFunc_0 != 0)
            goto label_4f3747
        
        result = (*(*arg2 + 4))(0x6da5bb)
    else
        vFunc_0 = eax_5[3][arg3 - eax_6].vFunc_0
        
        if (vFunc_0 == 0)
            vFunc_0 = sub_4e7720(eax_5, arg3)
            goto label_4f373b
        
    label_4f3747:
        int32_t* var_2c
        sub_4a3390(vFunc_0, &var_2c, arg4)
        int32_t var_4 = 0
        int32_t* edx_1 = &var_2c
        int32_t var_18
        
        if (var_18 u>= 0x10)
            edx_1 = var_2c
        
        result = (*(*arg2 + 4))(edx_1)
        
        if (var_18 u>= 0x10)
            result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
