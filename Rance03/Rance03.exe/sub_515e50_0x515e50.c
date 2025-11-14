// 函数: sub_515e50
// 地址: 0x515e50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bdff0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** edi = arg1 + 4
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_401ff0(&var_28, edi, 0, 0xffffffff)
int32_t var_4 = 0
void** esi = arg1 + 0x1c
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
sub_401ff0(&var_40, esi, 0, 0xffffffff)
var_4.b = 1
bool cond:0 = edi[5] u< 0x10
char eax_5 = *(arg1 + 0xe4)
int32_t var_44 = *(arg1 + 0xec)
int32_t eax_7 = *(arg1 + 0xe8)
edi[4] = 0

if (not(cond:0))
    edi = *edi

*edi = nullptr
bool cond:1 = esi[5] u< 0x10
esi[4] = 0

if (not(cond:1))
    esi = *esi

*esi = nullptr
int32_t* result = sub_515cc0(arg1, &var_28, &var_40, eax_5.d, eax_7, &var_44)

if (var_2c u>= 0x10)
    result = j__free(var_40.d)

int32_t var_2c_1 = 0xf
int32_t var_30_1 = 0
var_40 = 0

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
