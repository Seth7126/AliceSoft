// 函数: sub_59c870
// 地址: 0x59c870
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e460
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, &(*U"},{,,,},")[2], 1)
int32_t var_8_1 = 0
int32_t var_8_2 = 0xffffffff
int32_t ebx
ebx.b = sub_59f280(arg1, &var_2c) == 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, &var_18[1], 1)

char* result
int32_t var_38

if (ebx.b == 0)
    if (sub_5de8c0(&var_38).b == 0)
        result.b = 0
    else
        sub_403360(&var_2c, &(*U"},{,,,},")[1])
        int32_t var_8_3 = 1
        int32_t var_8_4 = 0xffffffff
        ebx.b = sub_59f280(arg1, &var_2c) == 0
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, &var_18[1], 1)
        
        int32_t var_34
        
        if (ebx.b != 0)
            result.b = 0
        else if (PDB1::ResetGUID(&var_34).b == 0)
            result.b = 0
        else
            int32_t edi_1 = 1
            int32_t var_30 = 1
            
            if (sub_5de720(arg1, U"},{,,,},") != 0)
                goto label_59ca0c
            
            sub_403360(&var_2c, &(*U"},{,,,},")[7])
            int32_t var_8_5 = 2
            int32_t var_8_6 = 0xffffffff
            ebx.b = sub_59f280(arg1, &var_2c) == 0
            sub_403320(&var_2c)
            
            if (ebx.b != 0)
                result.b = 0
            else if (sub_59c5e0(arg1, &var_30).b == 0)
                result.b = 0
            else
                sub_403360(&var_2c, &(*U"},{,,,},")[6])
                int32_t var_8_7 = 3
                int32_t var_8_8 = 0xffffffff
                ebx.b = sub_59f280(arg1, &var_2c) == 0
                sub_403320(&var_2c)
                
                if (ebx.b != 0)
                    result.b = 0
                else
                    edi_1 = var_30
                label_59ca0c:
                    int32_t xmm0_1 = var_34
                    int32_t var_20 = var_38
                    var_30 = xmm0_1
                    int32_t var_18_1 = var_30
                    int32_t var_1c_1 = edi_1
                    sub_592380(arg2, &var_20)
                    result.b = 1
else
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
