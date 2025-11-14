// 函数: sub_421cd0
// 地址: 0x421cd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b39c2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD*** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[1]
char* result_2 = arg2

if (result_2 u< ecx)
    result = *arg1

struct _EXCEPTION_REGISTRATION_RECORD** result_1
char* ecx_3

if (result_2 u>= ecx || result u> result_2)
    if (ecx == arg1[2])
        result = sub_410700(arg1, 1)
    
    ecx_3 = arg1[1]
    arg2 = ecx_3
    char* var_10_2 = ecx_3
    int32_t var_4_1 = 1
    
    if (ecx_3 != 0)
        int32_t var_20_2 = 0xffffffff
        int32_t var_24_2 = 0
        result_1 = result_2
    label_421d77:
        *(ecx_3 + 0x14) = 0xf
        *(ecx_3 + 0x10) = 0
        *ecx_3 = 0
        result = sub_401ff0(ecx_3, result_1, 0, 0xffffffff)
else
    if (ecx == arg1[2])
        sub_410700(arg1, 1)
    
    result = &(*arg1)[(result_2 - result) s/ 0x18 * 6]
    ecx_3 = arg1[1]
    arg2 = ecx_3
    char* var_10_1 = ecx_3
    int32_t var_4 = 0
    
    if (ecx_3 != 0)
        int32_t var_20_1 = 0xffffffff
        int32_t var_24_1 = 0
        result_1 = result
        goto label_421d77
arg1[1] = &arg1[1][6]
fsbase->NtTib.ExceptionList = ExceptionList
return result
