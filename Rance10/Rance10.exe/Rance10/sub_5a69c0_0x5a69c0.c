// 函数: sub_5a69c0
// 地址: 0x5a69c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ef40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_403490(&var_30, &(*U"},,{},,{},,{%")[7], 1)
int32_t var_8_1 = 0
int32_t var_8_2 = 0xffffffff
int32_t ebx
ebx.b = sub_59f280(arg1, &var_30) == 0

if (var_1c u>= 0x10)
    sub_403160(var_30.d, &var_1c[1], 1)

char* result
int32_t var_38

if (ebx.b == 0)
    if (sub_5de8c0(&var_38).b == 0)
        result.b = 0
    else
        sub_403360(&var_30, &(*U"},,{},,{},,{%")[6])
        int32_t var_8_3 = 1
        int32_t var_8_4 = 0xffffffff
        ebx.b = sub_59f280(arg1, &var_30) == 0
        
        if (var_1c u>= 0x10)
            sub_403160(var_30.d, &var_1c[1], 1)
        
        if (ebx.b != 0)
            result.b = 0
        else
            int128_t var_4c = data_7e7128
            
            if (sub_59cba0(arg1, &var_4c).b == 0)
                result.b = 0
            else
                sub_403360(&var_30, &(*U"},,{},,{},,{%")[5])
                int32_t var_8_5 = 2
                int32_t var_8_6 = 0xffffffff
                ebx.b = sub_59f280(arg1, &var_30) == 0
                sub_403320(&var_30)
                
                if (ebx.b != 0)
                    result.b = 0
                else
                    int32_t var_34 = 1
                    
                    if (sub_59c5e0(arg1, &var_34).b == 0)
                        result.b = 0
                    else
                        sub_403360(&var_30, &(*U"},,{},,{},,{%")[4])
                        int32_t var_8_7 = 3
                        int32_t var_8_8 = 0xffffffff
                        ebx.b = sub_59f280(arg1, &var_30) == 0
                        sub_403320(&var_30)
                        
                        if (ebx.b != 0)
                            result.b = 0
                        else
                            var_30.d = var_38
                            int32_t var_2c_1 = var_34
                            int128_t var_28_1 = var_4c
                            sub_592490(arg2, &var_30)
                            result.b = 1
else
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
