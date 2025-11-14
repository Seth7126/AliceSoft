// 函数: sub_5e12d0
// 地址: 0x5e12d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cac60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_4c = 0
struct IString::common::CStringWrapper::VTable* const var_2c =
    &common::CStringWrapper::`vftable'{for `IString'}
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_401ff0(&var_28, arg2, 0, 0xffffffff)
int32_t var_4 = 0
void* esi = *data_75d4e8
int32_t eax_8 = var_2c->data(eax_4)
data_75d4e8
char eax_10 = (*(esi + 0x2c))(eax_8)

if (eax_10 != 0)
    struct IString::common::CStringWrapper::VTable* const var_48 =
        &common::CStringWrapper::`vftable'{for `IString'}
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44_1 = 0
    var_4.b = 1
    void* esi_1 = *data_75d4e8
    int32_t eax_13 = var_2c->data()
    data_75d4e8
    
    if ((*(esi_1 + 0x2c))(eax_13) == 0)
        *(arg1 + 0x14) = 0xf
        *(arg1 + 0x10) = 0
        *arg1 = 0
        sub_401ff0(arg1, arg3, 0, 0xffffffff)
    else
        int32_t esi_2 = *data_75d4e8
        int32_t eax_18 = var_2c->data(&var_48)
        data_75d4e8
        (*(esi_2 + 0x4c))(eax_18)
        sub_401f60(arg1, var_48->data())
    
    var_48 = &common::CStringWrapper::`vftable'{for `IString'}
    
    if (var_30_1 u>= 0x10)
        j__free(var_44_1.d)
    
    char var_44_2 = 0
    int32_t var_34_2 = 0
    int32_t var_30_2 = 0xf
else
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = eax_10
    sub_401ff0(arg1, arg3, 0, 0xffffffff)

struct IString::common::CStringWrapper::VTable* const var_2c_1 =
    &common::CStringWrapper::`vftable'{for `IString'}

if (var_14 u>= 0x10)
    j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return arg1
