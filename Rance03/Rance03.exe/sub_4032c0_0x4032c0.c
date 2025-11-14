// 函数: sub_4032c0
// 地址: 0x4032c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2b19
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg1
int32_t* result_1 = result
int32_t var_14 = 0
result[5] = 0xf
result[4] = 0
*result = 0
int32_t var_4 = 0
int32_t edi = result[4]
char* eax_4 = arg2[4] + 1
int32_t var_14_1 = 1

if (edi u<= eax_4 && result[5] != eax_4 && sub_4022d0(arg1, eax_4, 1) != 0)
    bool cond:0_1 = result[5] u< 0x10
    result[4] = edi
    int32_t* result_2
    
    if (cond:0_1)
        result_2 = result
    else
        result_2 = *result
    
    *(result_2 + edi) = 0

sub_403110(result, arg2, nullptr, 0xffffffff)
sub_4031c0(result, 1, 0x5c)
fsbase->NtTib.ExceptionList = ExceptionList
return result
