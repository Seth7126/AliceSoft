// 函数: sub_4b9680
// 地址: 0x4b9680
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b77b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_58 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (*(arg1 + 0x1a8) != *(arg1 + 0x1ac))
    int32_t var_2c
    char* ebx_1 = sub_4bd4b0(arg1 + 0x1a4, &var_2c, *(arg1 + 0xa0))
    int32_t var_4 = 0
    
    if (*(ebx_1 + 0x14) u>= 0x10)
        ebx_1 = *ebx_1
    
    int32_t var_5c_3 = sub_4bd710(arg1 + 0x1a4, *(arg1 + 0xa0))
    result = sub_4691f0(&var_44, ebx_1)
    
    if (arg2 != result)
        if (arg2[5] u>= 0x10)
            j__free(*arg2)
        
        arg2[5] = 0xf
        arg2[4] = 0
        *arg2 = 0
        sub_4030b0(arg2, result)
    
    int32_t var_30
    
    if (var_30 u>= 0x10)
        j__free(var_44.d)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c)
    
    *(arg1 + 4) = 1
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
