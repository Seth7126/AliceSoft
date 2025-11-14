// 函数: sub_4cc620
// 地址: 0x4cc620
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bed78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_edi
int32_t var_50 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if (arg3 != 0)
    int32_t ecx
    int32_t var_30_1 = ecx
    int32_t (__thiscall* var_38)(void* arg1, void** arg2) = sub_4c98e0
    void var_2c
    sub_4ce120(&var_2c, &var_38)
    int32_t var_54_2 = arg4
    int32_t var_4 = 0
    struct partsengine::CPartsList::VTable** eax_5 = sub_4a52a0(arg3 + 0x104)
    int32_t edi_1
    
    if (eax_5 != 0)
        edi_1 = eax_5[2]
    
    struct IInterface::VTable** vFunc_0
    
    if (eax_5 == 0 || arg4 s< edi_1 || eax_5[1] + edi_1 s<= arg4)
        vFunc_0 = nullptr
    else
        vFunc_0 = eax_5[3][arg4 - edi_1].vFunc_0
        
        if (vFunc_0 == 0)
            vFunc_0 = sub_4e7720(eax_5, arg4)
    
    int32_t var_4_1 = 0xffffffff
    void** ebx
    ebx.b = sub_4a4c50(vFunc_0, arg1, arg2, arg5, &var_2c)
    int32_t* var_1c
    
    if (var_1c != 0)
        (*(*var_1c + 0x10))(var_1c != &var_2c)
    
    result = ebx.b
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return result
