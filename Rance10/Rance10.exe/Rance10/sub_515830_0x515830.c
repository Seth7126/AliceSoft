// 函数: sub_515830
// 地址: 0x515830
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_80 = 0xffffffff
int32_t (* var_84)(void* arg1) = sub_7386f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_7c
int32_t eax_2 = __security_cookie ^ &var_7c
int32_t var_ac = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** result = sub_432330(arg1, arg2)
void** result_2 = *arg1
void** result_1 = result

if (result_1 != result_2)
    result = sub_412ca0(arg2, &result_1[4])

if (result_1 == result_2 || result.b != 0)
    result_1 = result_2

if (result_1 == result_2 || result_1 == 0xffffffc0)
    void** eax_5 = arg3
    int32_t ecx = eax_5[5]
    void** edx_1
    
    if (ecx u< 0x10)
        edx_1 = eax_5
    else
        edx_1 = *eax_5
    
    int32_t esi_1 = eax_5[4]
    
    if (ecx u>= 0x10)
        eax_5 = *eax_5
    
    void** var_98_1 = eax_5
    struct fileimage::CFileImageAnalyser::VTable* const var_9c =
        &fileimage::CFileImageAnalyser::`vftable'
    void* var_94_1 = edx_1 + esi_1
    int32_t var_80_1 = 0
    sub_510430(&var_7c)
    var_80_1.b = 1
    int32_t* ebx
    
    if (sub_512970(&var_7c, &var_9c, arg4, arg5) != 0)
        void* var_20
        sub_403360(&var_20, 0x75d31b)
        var_80_1.b = 2
        sub_5160e0(arg1, arg2, &var_20, &var_7c)
        var_80_1.b = 1
        int32_t var_c
        
        if (var_c u>= 0x10)
            sub_403160(var_20, var_c + 1, 1)
        
        sub_403360(&var_20, "EXText")
        var_80_1.b = 3
        sub_5159a0(arg4, &var_7c, &var_20)
        
        if (var_c u>= 0x10)
            sub_403160(var_20, var_c + 1, 1)
        
        ebx.b = 1
    else
        ebx.b = 0
    
    sub_5106e0(&var_7c)
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_7c)
return result
