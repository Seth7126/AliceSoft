// 函数: sub_463630
// 地址: 0x463630
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72c2b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x4c) = arg4
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_403590(&var_30, arg3, 0, 0xffffffff)
int32_t var_8_1 = 0
sub_403490(arg1 + 4, 0x75cd93, nullptr)
sub_403490(arg1 + 0x1c, 0x75cda6, nullptr)
sub_403490(arg1 + 0x34, 0x75cd92, nullptr)
void** var_44
sub_67f950(&var_44, &var_30)
var_8_1.b = 1
void** esi = var_44
int32_t var_40
void* ebx

if (esi == var_40)
label_4636fc:
    var_8_1.b = 0
    sub_417070(&var_44)
    
    if (arg1 + 0x1c != &var_30)
        sub_403590(arg1 + 0x1c, &var_30, 0, 0xffffffff)
    
    ebx.b = 1
else
    while (true)
        if (sub_463760(arg1, arg2, esi, *(arg1 + 0x4c)) == 0)
            sub_417070(&var_44)
            ebx.b = 0
            break
        
        esi = &esi[6]
        
        if (esi == var_40)
            goto label_4636fc

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

int32_t* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
