// 函数: sub_46e950
// 地址: 0x46e950
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d6a2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_48
sub_462db0(&var_48, arg2)
int32_t var_8_1 = 0
void** esi = sub_432330(arg1 + 4, &var_48)
char eax_6

if (esi != *(arg1 + 4))
    eax_6 = sub_412ca0(&var_48, &esi[4])

if (esi == *(arg1 + 4) || eax_6 != 0)
    esi = *(arg1 + 4)

struct exfile::CDefineData::VTable** result

if (esi != *(arg1 + 4))
    result = esi[0xa]
else
    struct exfile::CDefineData::VTable** eax_7 = sub_6e810c(0xa4)
    var_8_1.b = 1
    result = sub_46da00(eax_7, arg2, arg3)
    var_8_1.b = 0
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    struct exfile::CDefineData::VTable** result_1 = result
    var_8_1.b = 2
    struct exfile::CDefineData::VTable** var_68_3 = eax_7
    char* var_6c_3 = &var_30
    void* var_54
    sub_461c40(arg1 + 4, &var_54, sub_403590(&var_30, &var_48, 0, 0xffffffff))
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30.d, var_1c_1 + 1, 1)

int32_t var_34

if (var_34 u>= 0x10)
    sub_403160(var_48, var_34 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
