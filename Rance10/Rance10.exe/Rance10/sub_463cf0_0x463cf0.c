// 函数: sub_463cf0
// 地址: 0x463cf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72c3e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_68 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x4c) = arg4
sub_403490(arg1 + 4, 0x75cd93, nullptr)
sub_403490(arg1 + 0x1c, 0x75cda6, nullptr)
sub_403490(arg1 + 0x34, 0x75cd92, nullptr)
bool cond:0 = *(arg1 + 0x64) u< 0x10
void* esi = arg1 + 0x50
*(esi + 0x10) = 0
char* eax_5

if (cond:0)
    eax_5 = esi
else
    eax_5 = *esi

*eax_5 = 0
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
int32_t var_8_1 = 0
var_8_1.b = 1
void* var_48
sub_4055a0(esi, sub_4175e0(sub_403490(&var_30, 0x75e31c, 0x32), &var_30, &var_48, \n"), 0, 
    0xffffffff)
int32_t var_34

if (var_34 u>= 0x10)
    sub_403160(var_48, var_34 + 1, 1)

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

struct exfile::CEXTextAnalyser::VTable* const var_54 = &exfile::CEXTextAnalyser::`vftable'
void* var_50 = esi
int32_t var_8_2 = 2
char result

if (sub_467ad0(&var_54, arg3, arg2, *(arg1 + 0x4c)) != 0)
    bool cond:1_1 = *(esi + 0x14) u< 0x10
    *(esi + 0x10) = 0
    
    if (not(cond:1_1))
        esi = *esi
    
    *esi = 0
    result = 1
else
    sub_45ee50(esi)
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
