// 函数: sub_498b80
// 地址: 0x498b80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730216
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct filesystem::CFilePath::VTable* const var_34 = &filesystem::CFilePath::`vftable'
int32_t result_1 = 0xf
int32_t var_20 = 0
char var_30 = 0
int32_t var_8_1 = 0
sub_67e6d0(&var_34)
int32_t var_38 = 0xf
int32_t var_3c = 0
char var_4c = 0
sub_403490(&var_4c, "AliceSoft", 9)
var_8_1.b = 1
sub_67eaf0(&var_34)
sub_4055a0(&var_30, &var_4c, 0, 0xffffffff)
var_8_1.b = 0

if (var_38 u>= 0x10)
    sub_403160(var_4c.d, var_38 + 1, 1)

sub_67eaf0(&var_34)
sub_4055a0(&var_30, arg2, 0, 0xffffffff)
char* eax_5 = sub_404f20(&var_4c, &var_30)

if (arg1 + 0x34 != eax_5)
    int32_t eax_6 = *(arg1 + 0x48)
    
    if (eax_6 u>= 0x10)
        sub_403160(*(arg1 + 0x34), eax_6 + 1, 1)
    
    *(arg1 + 0x48) = 0xf
    bool cond:0_1 = *(arg1 + 0x48) u< 0x10
    *(arg1 + 0x44) = 0
    char* eax_8
    
    if (cond:0_1)
        eax_8 = arg1 + 0x34
    else
        eax_8 = *(arg1 + 0x34)
    
    *eax_8 = 0
    sub_4056a0(arg1 + 0x34, eax_5)

if (var_38 u>= 0x10)
    sub_403160(var_4c.d, var_38 + 1, 1)

int32_t result = result_1
var_34 = &filesystem::CFilePath::`vftable'

if (result u>= 0x10)
    result = sub_403160(var_30.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
