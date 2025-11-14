// 函数: sub_5e3dd0
// 地址: 0x5e3dd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cb118
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5e3f40(arg1)
struct IComponentSupplier::sys40::CComponentSupplier::VTable** eax_5 = sub_69adc6(8)

if (eax_5 == 0)
    eax_5 = nullptr
else
    *eax_5 = &sys40::CComponentSupplier::`vftable'{for `IComponentSupplier'}
    eax_5[1] = 1

int32_t var_78 = *(arg1 + 0x14)
*(arg1 + 0x44c) = eax_5
bool result = sub_5e0270(var_78, arg1, eax_5)

if (result != 0)
    char var_58
    char* eax_8 = sub_401f60(&var_58, (*(*(arg1 + 0x18) + 0x10))(eax_4))
    int32_t var_4 = 0
    char var_40
    char* eax_10 = sub_401f60(&var_40, (**(arg1 + 0x3c8))())
    var_4.b = 1
    void* var_28
    sub_410a20(eax_10, eax_10, &var_28, eax_8)
    int32_t var_2c
    
    if (var_2c u>= 0x10)
        j__free(var_40.d)
    
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    var_40 = 0
    var_4.b = 4
    int32_t var_44
    
    if (var_44 u>= 0x10)
        j__free(var_58.d)
    
    int32_t var_70_6 = *(arg1 + 0x44c)
    int32_t var_44_1 = 0xf
    int32_t var_48_1 = 0
    var_58 = 0
    int32_t ebx
    ebx.b = sub_5e25c0(arg1 + 0x41c, arg1 + 0xa0, arg1 + 0x42c, &var_28, var_70_6) != 0
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    result = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
