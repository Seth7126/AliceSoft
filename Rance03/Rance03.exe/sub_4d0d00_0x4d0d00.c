// 函数: sub_4d0d00
// 地址: 0x4d0d00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6bf280
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1
int32_t* result = *arg1

if (*(arg2 + 0xd) == 0)
    int32_t* result_1 = sub_4a7180(&arg2[4])
    result_1[1] = arg3
    int32_t* eax_5
    eax_5.b = arg2[3].b
    result_1[3].b = eax_5.b
    int32_t var_8_1 = 0
    
    if (*(result + 0xd) != 0)
        result = result_1
    
    arg3 = result
    *result_1 = sub_4d0d00(*arg2, result_1, arg4)
    result_1[2] = sub_4d0d00(arg2[2], result_1, arg4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
