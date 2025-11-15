// 函数: ?ResetGUID@PDB1@@UAEHPAEK@Z
// 地址: 0x5de7d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30[0x10]
var_30[0] = 0
int32_t var_8_1 = 0
char* result_1
char* result
int32_t ebx

if (sub_5de3d0(&var_30, &result_1).b == 0)
    ebx.b = 0
else
    result = result_1
    
    if (result == 2)
        int32_t var_38
        int32_t* var_4c_2 = &var_38
        char* eax_4 = &var_30
        
        if (var_1c u>= 0x10)
            eax_4 = var_30[0].d
        
        if (sub_6ca310(eax_4, 0x7942e0) != 1)
            ebx.b = 0
        else
            *arg1 = _mm_cvtepi32_ps(zx.o(var_38))
            ebx.b = 1
    else if (result != 3)
        ebx.b = 0
    else
        char (* eax_3)[0x10] = &var_30
        int32_t* var_4c_1 = arg1
        
        if (var_1c u>= 0x10)
            eax_3 = var_30[0].d
        
        if (sub_6ca310(eax_3, 0x79394c) == 1)
            ebx.b = 1
        else
            ebx.b = 0

if (var_1c u>= 0x10)
    sub_403160(var_30[0].d, var_1c + 1, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
