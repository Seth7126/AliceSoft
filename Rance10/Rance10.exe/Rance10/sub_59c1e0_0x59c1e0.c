// 函数: sub_59c1e0
// 地址: 0x59c1e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d800
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result

if (PDB1::ResetGUID(arg2).b != 0)
    char* var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, &(*U"{,,,},},==,==,,,=,=,")[2], 1)
    int32_t var_8_1 = 0
    int32_t var_8_2 = 0xffffffff
    int32_t ebx
    ebx.b = sub_59f280(arg1, &var_2c) == 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, &var_18_1[1], 1)
    
    if (ebx.b != 0)
        result.b = 0
    else if (PDB1::ResetGUID(&arg2[1]).b == 0)
        result.b = 0
    else
        void var_44
        sub_403360(&var_44, &(*U"{,,,},},==,==,,,=,=,")[1])
        int32_t var_8_3 = 1
        int32_t var_8_4 = 0xffffffff
        ebx.b = sub_59f280(arg1, &var_44) == 0
        sub_403320(&var_44)
        
        if (ebx.b != 0)
            result.b = 0
        else
            result.b = PDB1::ResetGUID(&arg2[2]).b != 0
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
