// 函数: sub_4634e0
// 地址: 0x4634e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72c278
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_403490(arg1 + 4, 0x75cd93, nullptr)
sub_403490(arg1 + 0x1c, 0x75cda6, nullptr)
sub_403490(arg1 + 0x34, 0x75cd92, nullptr)
void* esi_1 = arg1 + 0x50
*(esi_1 + 0x10) = 0
char* eax_3

if (*(esi_1 + 0x14) u< 0x10)
    eax_3 = esi_1
else
    eax_3 = *esi_1

*eax_3 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_8_1 = 0
var_8_1.b = 1
void* var_44
sub_4055a0(esi_1, sub_4175e0(sub_403490(&var_2c, 0x75e2a8, 0x2e), &var_2c, &var_44, \n"), 0, 
    0xffffffff)
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44, var_30 + 1, 1)

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

struct exfile::CEXBinaryAnalyser::VTable* const var_4c = &exfile::CEXBinaryAnalyser::`vftable'
void* var_48 = esi_1
int32_t var_60 = arg2
int32_t var_8_2 = 2
char result

if (sub_463fc0(&var_4c, arg3) != 0)
    bool cond:0_1 = *(esi_1 + 0x14) u< 0x10
    *(esi_1 + 0x10) = 0
    
    if (not(cond:0_1))
        esi_1 = *esi_1
    
    *esi_1 = 0
    result = 1
else
    sub_45ee50(esi_1)
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
