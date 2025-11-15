// 函数: sub_515b90
// 地址: 0x515b90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73873b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_a4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** result = sub_432330(arg1, arg2)
void** result_2 = *arg1
void** result_1 = result

if (result_1 != result_2)
    result = sub_412ca0(arg2, &result_1[4])

if (result_1 == result_2 || result.b != 0)
    result_1 = result_2

if (result_1 == result_2 || result_1 == 0xffffffc0)
    void* var_84 = nullptr
    int32_t var_80_1 = 0
    int32_t var_7c_1 = 0
    int32_t var_8_1 = 0
    result = sub_524a90(arg1[2], arg3, &var_84)
    void* esi_1 = var_84
    int32_t* ebx
    
    if (result.b != 0)
        struct fileimage::CFileImageAnalyser::VTable* const var_94 =
            &fileimage::CFileImageAnalyser::`vftable'
        void* var_90_1 = esi_1
        int32_t var_8c_1 = var_80_1
        var_8_1.b = 1
        void var_70
        sub_510430(&var_70)
        var_8_1.b = 2
        
        if (sub_512970(&var_70, &var_94, arg4, arg5) != 0)
            sub_5160e0(arg1, arg2, arg3, &var_70)
            sub_5159a0(arg4, &var_70, arg3)
            ebx.b = 1
        else
            ebx.b = 0
        
        sub_5106e0(&var_70)
    else
        ebx.b = 0
    
    if (esi_1 != 0)
        sub_403160(esi_1, var_7c_1 - esi_1, 1)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
