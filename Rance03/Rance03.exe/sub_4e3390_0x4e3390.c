// 函数: sub_4e3390
// 地址: 0x4e3390
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c03d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_esi
int32_t eax_4 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IString::common::CStringWrapper::VTable* const var_2c =
    &common::CStringWrapper::`vftable'{for `IString'}
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t* result
int32_t ecx_1
result, ecx_1 = sub_401ff0(&var_28, arg2, 0, 0xffffffff)
int32_t var_4 = 0
void* esi = data_75d530
char* eax_7

if (*(esi + 4) != 0)
    eax_7 = var_2c->data(0, eax_4)
    result = sub_5e20f0(*(esi + 4), arg1, eax_7)
else if (data_75d534 != 0)
    int32_t var_3c_1 = ecx_1
    result = sub_6203f0()
    
    if (result != 0)
        result = (**result)(&data_6ecca8)
        *(esi + 4) = result
        
        if (result != 0)
            eax_7 = var_2c->data(0, eax_4)
            result = sub_5e20f0(*(esi + 4), arg1, eax_7)
struct IString::common::CStringWrapper::VTable* const var_2c_1 =
    &common::CStringWrapper::`vftable'{for `IString'}

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
