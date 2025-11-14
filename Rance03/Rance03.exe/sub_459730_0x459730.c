// 函数: sub_459730
// 地址: 0x459730
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7ea0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_402110(arg1 + 4, 0x6da15a, nullptr)
sub_402110(arg1 + 0x1c, 0x6da15f, nullptr)
sub_402110(arg1 + 0x34, 0x6da15b, nullptr)
struct exfile::CEXBinaryAnalyser::VTable* const var_30 = &exfile::CEXBinaryAnalyser::`vftable'
void* var_2c = arg1 + 0x4c
int32_t var_48 = arg2
int32_t var_4 = 0
char result = sub_459f10(&var_30, arg3)

if (result != 0)
    result = 1
else
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    char result_1 = result
    sub_402110(&result_1, 0x6dba54, 0x2e)
    var_4.b = 1
    sub_456a00(arg1 + 0x4c, &result_1)
    
    if (var_14_1 u>= 0x10)
        j__free(result_1.d)
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
