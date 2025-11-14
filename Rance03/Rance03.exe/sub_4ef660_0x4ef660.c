// 函数: sub_4ef660
// 地址: 0x4ef660
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c09b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = __security_cookie ^ &var_50
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
char* edx = (**arg4)(__security_cookie ^ &__saved_edi)
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
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

sub_402110(&var_40, edx, ecx_1)
void* result = sub_4a9b10(&var_40)
void* result_1 = result

if (var_2c u>= 0x10)
    result = j__free(var_40.d)

int32_t var_2c_1 = 0xf
int32_t var_30_1 = 0
var_40 = 0

if (result_1 != 0)
    char var_28
    sub_401f60(&var_28, (**arg5)())
    int32_t var_4 = 0
    int32_t* var_4c
    result = sub_4c9ea0(result_1, &var_4c, &var_28)
    var_4.b = 2
    int32_t var_14
    
    if (var_14 u>= 0x10)
        result = j__free(var_28.d)
    
    int32_t* esi_2 = var_4c
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    var_28 = 0
    int32_t var_48
    
    if (arg2 s>= 0)
        result = (var_48 - esi_2) s/ 0x18
        
        if (result s> arg2)
            int32_t eax_12 = arg2 * 3
            int32_t* ecx_9 = &esi_2[eax_12 * 2]
            
            if (esi_2[eax_12 * 2 + 5] u>= 0x10)
                ecx_9 = *ecx_9
            
            result = (*(*arg3 + 4))(ecx_9)
    
    if (esi_2 != 0)
        sub_4107c0(esi_2, var_48)
        result = j__free(esi_2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
