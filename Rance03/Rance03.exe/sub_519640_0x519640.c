// 函数: sub_519640
// 地址: 0x519640
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b2e88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg1 + 0xdc
int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
sub_401ff0(&var_34, esi, 0, 0xffffffff)
int32_t var_c_1 = 0
bool cond:0 = esi[5] u< 0x10
esi[4] = 0

if (not(cond:0))
    esi = *esi

*esi = nullptr
int32_t result = sub_519700(arg1, &var_34)

if (var_20 u>= 0x10)
    result = j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
