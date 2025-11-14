// 函数: sub_502e30
// 地址: 0x502e30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c10fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_e4
int32_t eax_2 = __security_cookie ^ &var_e4
int32_t __saved_edi
int32_t var_f4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = *(arg1 + 0x30)

for (int32_t* i = *(arg1 + 0x2c); i != edi; i = &i[0x30])
    (**i)(0)

*(arg1 + 0x30) = *(arg1 + 0x2c)
struct partsengine::CConstructionProcess::VTable* var_e0
sub_47f050(&var_e0)
int32_t var_c_1 = 0
int32_t var_b4 = arg2
int32_t var_b0 = arg3
int32_t var_dc = 1
sub_481250(arg1 + 0x2c, &var_e0)
sub_47f160(&var_e0)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_e4)
return result
