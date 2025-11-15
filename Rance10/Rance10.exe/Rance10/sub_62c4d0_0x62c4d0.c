// 函数: sub_62c4d0
// 地址: 0x62c4d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744ff9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48 = 0
void* eax_3 = *(arg1 + 4)
char var_44
int32_t var_30
char var_2c
char* eax_4
int32_t ebx

if (eax_3 != 0)
    char* ecx = *(eax_3 + 0x18)
    
    if (ecx == 0)
        ecx = eax_3 + 0x1c
    
    eax_4 = sub_403360(&var_2c, ecx)
    ebx = 2
else
    var_30 = 0xf
    void* var_34_1 = eax_3
    var_44 = eax_3.b
    eax_4 = &var_44
    ebx = 1

*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
sub_4056a0(arg2, eax_4)
int32_t ebx_1 = ebx | 4

if ((ebx_1.b & 2) != 0)
    ebx_1 &= 0xfffffffd
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0

if ((ebx_1.b & 1) != 0 && var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
