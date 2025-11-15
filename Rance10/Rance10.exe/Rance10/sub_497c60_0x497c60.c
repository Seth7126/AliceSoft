// 函数: sub_497c60
// 地址: 0x497c60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7300d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4969c0(arg1 + 0x1a0)
int32_t* ecx_1 = *(arg1 + 0x1d0)

if (ecx_1 != 0)
    ecx_1 = (*(*ecx_1 + 4))(eax_2)
    *(arg1 + 0x1d0) = 0

sub_495c70(ecx_1)
int64_t* eax_4 = sub_6e810c(8)
int64_t* var_60 = eax_4
*eax_4 = 0
*(eax_4 + 4) = 1
*eax_4 = &mainsystem::CComponentSupplier::`vftable'{for `common::SuicideRefCounter<class IComponentSupplier>'}
int32_t var_80 = *(arg1 + 0x14)
*(arg1 + 0x1d0) = eax_4
char result = sub_495af0(var_80, arg1, eax_4)

if (result != 0)
    char var_44
    char* eax_7 = sub_403360(&var_44, (*(*(arg1 + 0x18) + 0x10))(eax_2))
    int32_t var_8_1 = 0
    char var_2c
    char* eax_9 = sub_403360(&var_2c, (**(arg1 + 0x134))())
    var_8_1.b = 1
    void* var_5c
    sub_4177a0(eax_9, eax_9, &var_5c, eax_7)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    var_8_1.b = 4
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t* var_78_4 = *(arg1 + 0x1d0)
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    void* ebx
    ebx.b = sub_496310(arg1 + 0x1a0, arg1 + 0xa8, arg1 + 0x1b0, &var_5c, var_78_4) != 0
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c, var_48 + 1, 1)
    
    result = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
