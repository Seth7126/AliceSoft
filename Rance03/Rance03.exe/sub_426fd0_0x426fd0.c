// 函数: sub_426fd0
// 地址: 0x426fd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b4ed0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 0xf
int32_t var_3c = 0
char var_4c = 0
int32_t var_c_1 = 0
sub_42cd50(arg1 + 0x944, &var_4c)
*(arg1 + 0x910) = sub_42e360(arg1 + 0x944)

if (arg1 + 0x914 != &var_4c)
    sub_401ff0(arg1 + 0x914, &var_4c, 0, 0xffffffff)

int32_t var_34
char* eax_6 = sub_424270(arg1 + 0x6f0, &var_34)
var_c_1.b = 1

if (arg1 + 0x92c != eax_6)
    sub_401ff0(arg1 + 0x92c, eax_6, 0, 0xffffffff)

var_c_1.b = 0
int32_t var_20

if (var_20 u>= 0x10)
    j__free(var_34)

LRESULT result = sub_429a20(arg1 + 0x8e8)

if (var_38 u>= 0x10)
    result = j__free(var_4c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
