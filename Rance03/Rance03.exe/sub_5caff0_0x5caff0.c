// 函数: sub_5caff0
// 地址: 0x5caff0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9dc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = *arg3 != 0
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
void* ecx

if (cond:0)
    int32_t* ecx_1 = arg3
    void* esi_1 = ecx_1 + 1
    int32_t eax_5
    
    do
        eax_5.b = *ecx_1
        ecx_1 += 1
    while (eax_5.b != 0)
    ecx = ecx_1 - esi_1
else
    ecx = nullptr

sub_402110(&var_40, arg3, ecx)
int32_t var_4 = 0
int32_t var_4_1 = 0xffffffff
int32_t ebx
ebx.b = sub_5d62c0(&arg1[0x5b], &var_40, &var_50) == 0

if (var_2c u>= 0x10)
    j__free(var_40.d)

char result

if (ebx.b == 0)
    char var_28
    sub_401f60(&var_28, arg4)
    int32_t var_4_2 = 1
    int32_t var_44
    int32_t* ecx_6
    result, ecx_6 = sub_5d62c0(&arg1[0x5b], &var_28, &var_44)
    int32_t var_4_3 = 0xffffffff
    ebx.b = result == 0
    int32_t var_14
    
    if (var_14 u>= 0x10)
        ecx_6 = j__free(var_28.d)
    
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    var_28 = 0
    
    if (ebx.b != 0)
        result = 0
    else
        int32_t var_68_6 = arg5
        var_50 = var_50
        int32_t var_4c_1 = var_44
        result = sub_5cac70(arg1, arg2, &var_50, ecx_6)
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
