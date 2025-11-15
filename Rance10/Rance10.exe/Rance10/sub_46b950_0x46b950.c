// 函数: sub_46b950
// 地址: 0x46b950
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d0d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_68 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = 0
int32_t ebx = arg2[1]

for (int32_t* i = *arg2; i != ebx; i = &i[0xe])
    sub_408940(i)

arg2[1] = *arg2
void* var_50
sub_46ba90(arg1, &var_50, 0)
int32_t var_8_1 = 0
int32_t i_2
int32_t i_1 = i_2
char* result

if (i_1 == 0)
label_46ba5d:
    sub_408940(&var_50)
    result.b = 0
else
    while (i_1 != 1)
        sub_467620(arg2, &var_50)
        
        if (i_2 == 8)
            esi += 1
        else if (i_2 == 9)
            esi -= 1
        
        int32_t var_8_2 = 0xffffffff
        char var_38
        int32_t var_24
        
        if (var_24 u>= 0x10)
            sub_403160(var_38.d, var_24 + 1, 1)
        
        var_24 = 0xf
        int32_t var_28_1 = 0
        var_38 = 0
        int32_t var_3c
        
        if (var_3c u>= 0x10)
            sub_403160(var_50, var_3c + 1, 1)
        
        sub_46ba90(arg1, &var_50, esi)
        int32_t var_8_3 = 0
        i_1 = i_2
        
        if (i_1 == 0)
            goto label_46ba5d
    
    sub_408940(&var_50)
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
