// 函数: sub_44a260
// 地址: 0x44a260
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b6e30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = data_75d4c8
int32_t var_38 = 0xf
int32_t var_3c = 0
bool cond:0 = *arg1 != 0
var_4c = 0
void* ecx

if (cond:0)
    int32_t* ecx_1 = arg1
    void* edx_1 = ecx_1 + 1
    char i
    
    do
        i = *ecx_1
        ecx_1 += 1
    while (i != 0)
    ecx = ecx_1 - edx_1
else
    ecx = nullptr

sub_402110(&var_4c, arg1, ecx)
int32_t var_c_1 = 0
int32_t var_c_2 = 0xffffffff
int32_t ebx
ebx.b = sub_44ac80(edi + 0x20, &var_4c)

if (var_38 u>= 0x10)
    j__free(var_4c.d)

bool result

if (ebx.b == 0)
    result = (*(*(*(**(edi + 0x10) + 0x10))(2) + 0xc))(arg1)

if (ebx.b != 0 || result != 0)
    result = true
else
    int32_t var_34
    sub_401f60(&var_34, arg1)
    int32_t var_c_3 = 1
    ebx.b = sub_44ac80(edi + 0x30, &var_34)
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    
    result = ebx.b != 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
