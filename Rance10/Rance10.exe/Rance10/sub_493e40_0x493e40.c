// 函数: sub_493e40
// 地址: 0x493e40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72fb88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebx = arg2
void** var_34 = arg3
void** edi = arg6
int32_t var_38 = arg7
int32_t var_3c = 0
sub_494190(&var_34, &var_38)
void** eax_4 = var_34

if (eax_4 == *data_7fcb84)
label_493f14:
    arg3[5] = 0xf
    arg3[4] = 0
    *arg3 = nullptr
    sub_403590(arg3, edi, 0, 0xffffffff)
else
    void* ecx_1 = eax_4[5]
    
    if (ecx_1 == 0)
        goto label_493f14
    
    if (ebx[5] u>= 0x10)
        ebx = *ebx
    
    int32_t* eax_6 = (*(*(ecx_1 + 4) + 0x28))(ebx)
    
    if (eax_6 == 0)
        goto label_493f14
    
    struct IString::common::CStringWrapper::VTable* var_30 =
        &common::CStringWrapper::`vftable'{for `IString'}
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t var_8_1 = 0
    
    if (edi[5] u>= 0x10)
        edi = *edi
    
    (*(*eax_6 + 0x18))(&var_30, arg4, arg5, edi)
    char* eax_8 = &var_2c
    
    if (var_18_1 u>= 0x10)
        eax_8 = var_2c.d
    
    sub_403360(arg3, eax_8)
    sub_404c60(&var_30)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg3
