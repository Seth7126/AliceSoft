// 函数: sub_59d540
// 地址: 0x59d540
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e4a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_403490(&var_30, &(*U"{,,,},},==,==,,,=,=,")[0xb], 1)
int32_t var_8_1 = 0
int32_t var_8_2 = 0xffffffff
int32_t ebx
ebx.b = sub_59f280(arg1, &var_30) == 0

if (var_1c u>= 0x10)
    sub_403160(var_30.d, &var_1c[1], 1)

char* result

if (ebx.b == 0)
    int32_t var_38
    result = PDB1::ResetGUID(&var_38)
    
    if (result.b == 0)
        result.b = 0
    else
        int32_t var_34 = 0
        char eax_6 = sub_5de720(arg1, &(*U"{,,,},},==,==,,,=,=,")[0xa])
        
        if (eax_6 != 0)
            result = PDB1::ResetGUID(&var_34)
        
        if (eax_6 != 0 && result.b == 0)
            result.b = 0
        else
            int32_t xmm0_1 = var_38
            int32_t var_20_1 = xmm0_1
            int32_t xmm0_2 = var_34
            struct sealengine::CParamWithRandRange<float>::VTable* const var_24_1 =
                &sealengine::CParamWithRandRange<float>::`vftable'
            int32_t var_1c_1 = xmm0_2
            int32_t var_8_3 = 1
            result = arg3(eax_2)
            *(result + 4) = xmm0_1
            *(result + 8) = xmm0_2
            result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
