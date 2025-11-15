// 函数: sub_5c21e0
// 地址: 0x5c21e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73fec1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 0
int32_t* var_3c = arg2
arg2[4] = 0
arg2[5] = 0
arg2[5] = 0xf
bool cond:0 = arg2[5] u< 0x10
arg2[4] = 0
char* eax_3

if (cond:0)
    eax_3 = arg2
else
    eax_3 = *arg2

*eax_3 = 0
int32_t var_8_1 = 0
int32_t* esi = *arg1
int32_t var_38_1 = 1
void* i = *esi
void* i_1 = i

for (; i != esi; i = i_1)
    int32_t var_8_2 = 1
    void* var_30
    sub_4055a0(arg2, sub_5c1210(*(i + 0x14), &var_30, nullptr), 0, 0xffffffff)
    var_8_2.b = 0
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        sub_403160(var_30, var_1c + 1, 1)
    
    sub_429080(&i_1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
