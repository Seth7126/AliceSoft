// 函数: sub_54c340
// 地址: 0x54c340
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c4ba8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_34 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_54c430(arg1)
struct sealengine::CMOTData::VTable* const var_28 = &sealengine::CMOTData::`vftable'
int32_t var_24 = 0x3cd013a9
void* var_18 = nullptr
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_20 = 0xffffffff
int32_t var_1c = 0
int32_t var_4 = 0
int32_t result
char* ecx_1
result, ecx_1 = sub_54afc0(&var_28, arg2, arg3)
int32_t ebx

if (result.b == 0)
    ebx.b = 0
else
    result, ecx_1 = sub_54c560(arg1, &var_28)
    
    if (result.b == 0)
        ebx.b = 0
    else
        sub_54d110(arg1)
        ecx_1 = arg4
        
        if (ecx_1 != 0 && arg5 s> 0)
            result, ecx_1 = sub_54d2d0(arg1, ecx_1, arg5)
        
        ebx.b = 1

if (var_18 != 0)
    void* var_38_3 = arg3
    char* var_3c_2 = ecx_1
    sub_54ba00(var_18, var_14)
    j__free(var_18)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
