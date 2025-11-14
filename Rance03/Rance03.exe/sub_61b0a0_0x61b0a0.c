// 函数: sub_61b0a0
// 地址: 0x61b0a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cdf30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (*(arg1 + 0x10) != *(arg1 + 0x14))
    int32_t* var_18
    sub_459330(&var_18, arg1 + 0x10)
    int32_t var_4 = 0
    int32_t result_1
    sub_453d80(&result_1, arg1 + 0x24)
    var_4.b = 1
    int32_t* esi_1 = var_18
    int32_t* var_34_3 = &result_1
    int32_t var_14
    bool cond:0_1 = sub_61af80(arg1, esi_1, var_14 - esi_1) != 0
    result = result_1
    
    if (not(cond:0_1))
        if (result != 0)
            j__free(result)
        
        if (esi_1 != 0)
            j__free(esi_1)
        
        result.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    if (result != 0)
        j__free(result)
    
    if (esi_1 != 0)
        j__free(esi_1)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
