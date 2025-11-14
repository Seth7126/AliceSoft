// 函数: sub_5cc9c0
// 地址: 0x5cc9c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5a18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
char* edx = (*(*arg1[9] + 4))(__security_cookie ^ &__saved_edi)
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
void* ecx_1

if (*edx != 0)
    char* ecx_2 = edx
    char* eax_6
    
    do
        eax_6.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_6.b != 0)
    ecx_1 = ecx_2 - &ecx_2[1]
else
    ecx_1 = nullptr

sub_402110(&var_28, edx, ecx_1)
int32_t var_4 = 0
int32_t* result_1
int32_t* eax_7
int32_t* ecx_5
int32_t edx_1
eax_7, ecx_5, edx_1 = sub_5d62c0(&arg1[0x5b], &var_28, &result_1)
int32_t* result

if (eax_7.b != 0)
    int32_t ecx_6 = arg1[0x8b]
    int32_t edi_4 = (arg1[0x8d] - arg1[0x8a]) s>> 2
    
    if (edi_4 + 1 u>= ecx_6)
        sub_64ad90(&arg1[0x89], ecx_6 * 2)
        arg1[0x8d] = arg1[0x8a] + (edi_4 << 2)
    
    result = result_1
    *arg1[0x8d] = result
    arg1[0x8d] += 4
else
    result = sub_5c24e0(eax_7, edx_1, ecx_5, arg1, 0x6e9630)

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
