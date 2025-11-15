// 函数: sub_463b40
// 地址: 0x463b40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72c3a0
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
int32_t* ecx_3

if (arg3[5] u< 0x10)
    ecx_3 = arg3
else
    ecx_3 = *arg3

void* eax_5 = arg3[4] + ecx_3
int32_t var_6c = 0.d
void* result_1 = nullptr
int32_t var_54 = 0
int32_t var_50 = 0
sub_405b10(&result_1, ecx_3, eax_5)
void* esi_1 = arg1 + 0x50
int32_t var_8_1 = 0
bool cond:0 = *(esi_1 + 0x14) u< 0x10
*(esi_1 + 0x10) = 0
char* eax_6

if (cond:0)
    eax_6 = esi_1
else
    eax_6 = *esi_1

*eax_6 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
var_8_1.b = 1
var_8_1.b = 2
void* var_44
sub_4055a0(esi_1, sub_4175e0(sub_403490(&var_2c, 0x75e2e8, 0x32), &var_2c, &var_44, \n"), 0, 
    0xffffffff)
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44, var_30 + 1, 1)

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

struct exfile::CEXTextAnalyser::VTable* const var_4c = &exfile::CEXTextAnalyser::`vftable'
char var_48
var_48.d = esi_1
var_8_1.b = 3
void* ebx

if (sub_467ad0(&var_4c, &result_1, arg2, *(arg1 + 0x4c)) != 0)
    bool cond:1_1 = *(esi_1 + 0x14) u< 0x10
    *(esi_1 + 0x10) = 0
    
    if (not(cond:1_1))
        esi_1 = *esi_1
    
    *esi_1 = 0
    ebx.b = 1
else
    sub_45ee50(esi_1)
    ebx.b = 0

void* result = result_1

if (result != 0)
    sub_403160(result, var_50 - result, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
