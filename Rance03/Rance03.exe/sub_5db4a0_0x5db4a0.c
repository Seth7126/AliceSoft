// 函数: sub_5db4a0
// 地址: 0x5db4a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5458
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
int32_t ebx

if (sub_468d00(arg2, &var_2c).b == 0)
    ebx.b = 0
else
    if (arg1 != &var_2c)
        sub_401ff0(arg1, &var_2c, 0, 0xffffffff)
    
    char* edx_1 = *(arg2 + 4)
    
    if (&edx_1[4] u> *(arg2 + 8))
        ebx.b = 0
    else
        *(arg1 + 0x18) =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg2 + 4) += 4
        
        if (sub_468b20(arg2, &arg1[0x1c]).b == 0)
            ebx.b = 0
        else if (sub_468b20(arg2, &var_30).b == 0)
            ebx.b = 0
        else if (sub_5dc4c0(&arg1[0x20], arg2, var_30).b == 0)
            ebx.b = 0
        else
            ebx.b = 1

if (var_18 u>= 0x10)
    j__free(var_2c.d)

void* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
