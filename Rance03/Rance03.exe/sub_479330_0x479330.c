// 函数: sub_479330
// 地址: 0x479330
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6ba0c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t result_1
int32_t eax_2 = __security_cookie ^ &result_1
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i = *(arg1 + 8)
int32_t* ebx = arg4
result_1 = arg3
int32_t* var_54 = ebx
int32_t result_2 = arg5

if (i != *(arg1 + 0xc))
    do
        (*(**i + 4))(eax_4)
        i = &i[1]
    while (i != *(arg1 + 0xc))
    
    ebx = var_54

int32_t* result_4 = result_1
*(arg1 + 0xc) = *(arg1 + 8)
int32_t var_4c
char* eax_9 = sub_402a20(&var_4c, result_4)
int32_t var_c_1 = 0
int32_t* var_34
sub_410a80(eax_9.b, eax_9, &var_34, &data_6dd97c)
var_c_1.b = 2
int32_t var_38

if (var_38 u>= 0x10)
    j__free(var_4c)

int32_t* ecx_3 = &var_34
int32_t var_38_1 = 0xf
int32_t var_20

if (var_20 u>= 0x10)
    ecx_3 = var_34

int32_t var_3c = 0
var_4c.b = 0
int32_t result = sub_460230(ecx_3)
result_1 = result

if (result != 0)
    sub_412de0(arg1 + 8, &result_1)
    
    if (arg2 == 0)
        ebx.b = 1
    else
        if (ebx[5] u>= 0x10)
            ebx = *ebx
        
        int32_t* ecx_6
        result, ecx_6 = sub_460380(ebx)
        result_1 = result
        
        if (result != 0)
            int32_t* var_70_3 = &result_1
            sub_47a0a0(arg1 + 8, &var_54, *(arg1 + 8), ecx_6)
            int32_t* result_3 = result_2
            
            if (result_3[5] u>= 0x10)
                result_3 = *result_3
            
            result = sub_460380(result_3)
            result_2 = result
            
            if (result != 0)
                sub_412de0(arg1 + 8, &result_2)
                ebx.b = 1
            else
                ebx.b = 0
        else
            ebx.b = 0
else
    ebx.b = 0

if (var_20 u>= 0x10)
    j__free(var_34)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &result_1)
return result
