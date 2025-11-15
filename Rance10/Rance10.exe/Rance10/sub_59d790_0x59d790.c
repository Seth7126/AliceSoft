// 函数: sub_59d790
// 地址: 0x59d790
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e518
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_403490(&var_30, &(*U"{,,,},},==,==,,,=,=,")[8], 1)
int32_t var_8_1 = 0
int32_t var_8_2 = 0xffffffff
int32_t ebx
ebx.b = sub_59f280(arg1, &var_30) == 0

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

int32_t var_1c_1 = 0xf
int32_t var_20_1 = 0
var_30 = 0
int32_t result
int32_t var_3c

if (ebx.b == 0)
    if (PDB1::ResetGUID(&var_3c).b == 0)
        result.b = 0
    else
        int32_t var_40
        
        if (sub_5de720(arg1, &(*U"{,,,},},==,==,,,=,=,")[0xf]).b == 0)
            result.b = 0
        else if (PDB1::ResetGUID(&var_40).b == 0)
            result.b = 0
        else
            int32_t var_34
            
            if (sub_5de720(arg1, &(*U"{,,,},},==,==,,,=,=,")[0xe]).b == 0)
                result.b = 0
            else if (PDB1::ResetGUID(&var_34).b == 0)
                result.b = 0
            else
                int32_t var_38
                
                if (sub_5de720(arg1, &(*U"{,,,},},==,==,,,=,=,")[0xd]).b == 0)
                    result.b = 0
                else if (PDB1::ResetGUID(&var_38).b == 0)
                    result.b = 0
                else
                    int32_t var_60_1 = var_40
                    int32_t var_5c_1 = var_34
                    int32_t var_58_1 = var_38
                    *arg3(eax_2) = var_3c.o
                    result.b = 1
else
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
