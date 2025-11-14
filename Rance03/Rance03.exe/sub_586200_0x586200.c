// 函数: sub_586200
// 地址: 0x586200
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5a18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* result_1
int32_t eax_2 = __security_cookie ^ &result_1
int32_t __saved_esi
int32_t var_3c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t var_4 = 0
void* var_2c
char* result
int32_t ebx
void* ecx_1

if (sub_59ce30(&var_28, &var_2c).b == 0 || var_2c - 2 u> 3)
    ebx.b = 0
else
    switch (var_2c)
        case 2
            char** var_40_1 = &result_1
            char* eax_6 = &var_28
            
            if (var_14 u>= 0x10)
                eax_6 = var_28.d
            
            if (sub_69b31c(eax_6, 0x6dcf3c) != 1)
                ebx.b = 0
            else
                result = result_1
                ebx.b = 1
                *(arg1 + 4) = 0
                *(arg1 + 8) = result
        case 3
            char** var_40_2 = &result_1
            char* eax_7 = &var_28
            
            if (var_14 u>= 0x10)
                eax_7 = var_28.d
            
            result = sub_69b31c(eax_7, 0x6dcf38)
            
            if (result != 1)
                ebx.b = 0
            else
                char* result_2 = result_1
                ebx.b = result.b
                *(arg1 + 4) = result
                *(arg1 + 0xc) = result_2
        case 4
            *(arg1 + 4) = 2
            ecx_1 = arg1 + 0x10
        label_58630f:
            
            if (ecx_1 != &var_28)
                sub_401ff0(ecx_1, &var_28, 0, 0xffffffff)
            
            ebx.b = 1
        case 5
            *(arg1 + 4) = 3
            ecx_1 = arg1 + 0x28
            goto label_58630f

if (var_14 u>= 0x10)
    j__free(var_28.d)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &result_1)
return result
