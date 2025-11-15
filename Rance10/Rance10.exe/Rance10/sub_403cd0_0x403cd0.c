// 函数: sub_403cd0
// 地址: 0x403cd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726de8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
void** edi = arg3
void** edx = arg4
int32_t var_34 = 0

if (ecx != 0)
    struct IString::common::CStringWrapper::VTable* const var_30 =
        &common::CStringWrapper::`vftable'{for `IString'}
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t var_8_1 = 0
    
    if (edx[5] u>= 0x10)
        edx = *edx
    
    if (edi[5] u>= 0x10)
        edi = *edi
    
    (*(*ecx + 0x10))(&var_30, edi, edx)
    char* eax_4 = &var_2c
    
    if (var_18_1 u>= 0x10)
        eax_4 = var_2c.d
    
    sub_403360(arg2, eax_4)
    var_30 = &common::CStringWrapper::`vftable'{for `IString'}
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
else
    *(arg2 + 0x10) = ecx
    *(arg2 + 0x14) = 0xf
    *arg2 = ecx.b
    sub_403590(arg2, edx, ecx, 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
