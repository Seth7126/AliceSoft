// 函数: sub_55e4e0
// 地址: 0x55e4e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c55b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_402110(&var_2c, &(*U"===,===,,===,}=,=,=,[]")[0xb], 1)
int32_t var_4 = 0
char* eax_6 = &var_2c

if (var_18 u>= 0x10)
    eax_6 = var_2c.d

enum MESSAGEBOX_RESULT result

if (sub_59d180(arg2, eax_6).b != 0)
    result.b = 1
else
    char* eax_7 = &var_2c
    
    if (var_18 u>= 0x10)
        eax_7 = var_2c.d
    
    char* var_5c_1 = eax_7
    int32_t var_60_1 = 0x6e48cc
    void* var_64_1 = arg2
    sub_561610(arg1)
    result.b = 0

int32_t var_4_1 = 0xffffffff
int32_t ebx
ebx.b = result.b == 0

if (var_18 u>= 0x10)
    j__free(var_2c.d)

if (ebx.b == 0)
    int32_t var_30
    result = sub_59d240(&var_30)
    
    if (result.b == 0)
        result.b = 0
    else
        int32_t var_40 = 0
        char eax_8 = sub_59d180(arg2, &(*U"===,===,,===,}=,=,=,[]")[8])
        
        if (eax_8 != 0)
            result = sub_59d240(&var_40)
        
        if (eax_8 != 0 && result.b == 0)
            result.b = 0
        else
            int32_t xmm0_1 = var_30
            int32_t var_28_1 = xmm0_1
            int32_t xmm0_2 = var_40
            var_2c.d = &sealengine::CParamWithRandRange::`vftable'
            int32_t var_24_1 = xmm0_2
            int32_t var_4_2 = 1
            result = arg4(eax_4)
            *(result + 4) = xmm0_1
            *(result + 8) = xmm0_2
            result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
