// 函数: sub_461720
// 地址: 0x461720
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5458
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_460b40(arg1 + 8)
bool cond:0 = *arg2 != 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
void* ecx_1

if (cond:0)
    int32_t* ecx_2 = arg2
    void* edx_1 = ecx_2 + 1
    char i
    
    do
        i = *ecx_2
        ecx_2 += 1
    while (i != 0)
    ecx_1 = ecx_2 - edx_1
else
    ecx_1 = nullptr

sub_402110(&var_2c, arg2, ecx_1)
int32_t var_4 = 0
void* ebx
ebx.b = sub_459830(arg1 + 0x2c, arg1 + 8, &var_2c)

if (var_18 u>= 0x10)
    j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return ebx.b
