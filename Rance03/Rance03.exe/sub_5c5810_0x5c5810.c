// 函数: sub_5c5810
// 地址: 0x5c5810
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9be8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* result_1
int32_t eax_2 = __security_cookie ^ &result_1
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[0x8d] -= 4
int32_t var_50 = *arg1[0x8d]
char var_20
__swprintf_c(&var_20, 0x10, 0x6e7340)
int32_t var_24 = 0xf
bool cond:0 = var_20 != 0
int32_t var_28 = 0
char var_38 = 0
void* ecx

if (cond:0)
    char* ecx_1 = &var_20
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    void var_1f
    ecx = ecx_1 - &var_1f
else
    ecx = nullptr

sub_402110(&var_38, &var_20, ecx)
int32_t var_4 = 0
int32_t* eax_6
int32_t* ecx_4
int32_t edx
eax_6, ecx_4, edx = sub_5d62c0(&arg1[0x5b], &var_38, &result_1)
int32_t var_4_1 = 0xffffffff
int32_t ebx
ebx.b = eax_6.b == 0

if (var_24 u>= 0x10)
    eax_6, ecx_4, edx = j__free(var_38.d)

int32_t var_24_1 = 0xf
int32_t var_28_1 = 0
var_38 = 0
int32_t* result

if (ebx.b == 0)
    int32_t ecx_5 = arg1[0x8b]
    int32_t edi_3 = (arg1[0x8d] - arg1[0x8a]) s>> 2
    
    if (edi_3 + 1 u>= ecx_5)
        sub_64ad90(&arg1[0x89], ecx_5 * 2)
        arg1[0x8d] = arg1[0x8a] + (edi_3 << 2)
    
    result = result_1
    *arg1[0x8d] = result
    arg1[0x8d] += 4
else
    result = sub_5c24e0(eax_6, edx, ecx_4, arg1, 0x6e730c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &result_1)
return result
