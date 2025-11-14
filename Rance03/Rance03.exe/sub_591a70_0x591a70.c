// 函数: sub_591a70
// 地址: 0x591a70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c8418
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IShaderParam::sealengine::CShaderParam::VTable* const var_50 =
    &sealengine::CShaderParam::`vftable'{for `IShaderParam'}
int32_t var_4c = 0
int32_t var_48 = 0
char var_44 = 0
int32_t var_40 = 0
int32_t var_3c = 0
char var_38 = 0
int32_t var_34 = 0
char var_30 = 0
int32_t var_2c = 0
int32_t var_28 = 0
int32_t var_24 = 0
char var_20 = 0
int32_t var_1c = 0
int32_t var_c_1 = 0
int32_t* result
long double x87_r0

if (sub_591d70(&var_50, x87_r0, arg2, arg3, arg4, *(arg1 + 8)).b != 0
        && (*(**(arg1 + 4) + 0xd4))(arg3, arg2, &var_50).b != 0
        && sub_591bb0(arg1, arg2, arg3).b != 0)
    if (var_38 == 0)
    label_591b73:
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    result = (*(*arg3 + 0x30))(eax_2)
    
    if (result != 0 && (*(*result + 0x2c))(6, 0, 0, 1).b != 0)
        goto label_591b73

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
