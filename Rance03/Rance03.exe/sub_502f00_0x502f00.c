// 函数: sub_502f00
// 地址: 0x502f00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c1146
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_ec
int32_t eax_2 = __security_cookie ^ &var_ec
int32_t __saved_edi
int32_t var_fc = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5 = *(arg1 + 0x30)

for (int32_t* i = *(arg1 + 0x2c); i != eax_5; i = &i[0x30])
    (**i)(0)

*(arg1 + 0x30) = *(arg1 + 0x2c)
struct partsengine::CSpriteEngineWrapper::VTable* const var_e8_1 =
    &partsengine::CSpriteEngineWrapper::`vftable'
int32_t var_c_1 = 0
int32_t* eax_8

if (arg2[5] u< 0x10)
    eax_8 = arg2
else
    eax_8 = *arg2

bool result = sub_44a260(eax_8)
int32_t var_c_2 = 0xffffffff

if (result != 0)
    struct partsengine::CConstructionProcess::VTable* var_e0
    sub_47f050(&var_e0)
    int32_t var_c_3 = 1
    int32_t var_dc_1 = 2
    void var_3c
    
    if (&var_3c != arg2)
        sub_401ff0(&var_3c, arg2, 0, 0xffffffff)
    
    sub_481250(arg1 + 0x2c, &var_e0)
    sub_47f160(&var_e0)
    result = true

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_ec)
return result
