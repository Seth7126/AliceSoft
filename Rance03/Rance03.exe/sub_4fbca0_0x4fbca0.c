// 函数: sub_4fbca0
// 地址: 0x4fbca0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0c48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_68 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::VTable** result = sub_4a9f10(arg3)
struct IInterface::VTable** result_1 = result

if (result_1 != 0)
    int32_t* ecx = result_1[0x17]
    
    if (ecx != 0)
        result = (*(*ecx + 8))(1)
        
        if (result == 0xd)
            result = sub_4a4020(result_1)
            
            if (result != 0)
                struct partsengine::CCharSpriteProperty::VTable* var_44
                sub_4ff2c0(&var_44)
                int32_t var_4 = 0
                int32_t var_6c_2 = sub_4d1d40(result, &var_44, arg6)
                void var_54
                int128_t var_38_1 = *sub_47f000(&var_54, arg2, arg4, arg5)
                result = sub_4d1cd0(result, &var_44, arg6)

fsbase->NtTib.ExceptionList = ExceptionList
return result
