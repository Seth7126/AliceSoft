// 函数: sub_4836c0
// 地址: 0x4836c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72eab0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_403590(&var_30, arg2, 0, 0xffffffff)
int32_t var_8_1 = 0
void** esi = sub_432330(arg1 + 4, &var_30)
char eax_6

if (esi != *(arg1 + 4))
    eax_6 = sub_412ca0(&var_30, &esi[4])

if (esi == *(arg1 + 4) || eax_6 != 0)
    esi = *(arg1 + 4)

struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** result

if (esi != *(arg1 + 4))
    struct filesystem::CFile::VTable* const var_40_1 = &filesystem::CFile::`vftable'
    int32_t var_3c_1 = 0xffffffff
    int32_t var_38_1 = 0
    int32_t var_34_1 = 0
    var_8_1.b = 1
    result = sub_67eeb0(&esi[0xa])
else
    result = nullptr

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
