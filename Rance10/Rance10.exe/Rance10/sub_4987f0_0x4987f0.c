// 函数: sub_4987f0
// 地址: 0x4987f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73018e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct filesystem::CFilePath::VTable* const var_34 = &filesystem::CFilePath::`vftable'
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
int32_t var_8_1 = 0
sub_403590(&var_30, &data_7fd490, 0, 0xffffffff)
sub_67eb70(&var_34)
void* var_4c
char* eax_4 = sub_404f20(&var_4c, &var_30)

if (arg1 + 4 != eax_4)
    int32_t eax_5 = *(arg1 + 0x18)
    
    if (eax_5 u>= 0x10)
        sub_403160(*(arg1 + 4), eax_5 + 1, 1)
    
    *(arg1 + 0x18) = 0xf
    bool cond:0_1 = *(arg1 + 0x18) u< 0x10
    *(arg1 + 0x14) = 0
    char* eax_7
    
    if (cond:0_1)
        eax_7 = arg1 + 4
    else
        eax_7 = *(arg1 + 4)
    
    *eax_7 = 0
    sub_4056a0(arg1 + 4, eax_4)

var_8_1.b = 0
int32_t var_38

if (var_38 u>= 0x10)
    sub_403160(var_4c, var_38 + 1, 1)

if (arg1 + 0x1c != arg1 + 4)
    sub_403590(arg1 + 0x1c, arg1 + 4, 0, 0xffffffff)

sub_498920(arg1, arg2)
var_34 = &filesystem::CFilePath::`vftable'

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
