// 函数: sub_59d920
// 地址: 0x59d920
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e550
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, &(*U"{,,,},},==,==,,,=,=,")[0xc], 1)
int32_t var_8_1 = 0
bool cond:0 = sub_59f280(arg1, &var_44) == 0
int32_t var_8_2 = 0xffffffff

if (var_30 u>= 0x10)
    sub_403160(var_44.d, &var_30[1], 1)

int32_t var_4c
char* result

if (cond:0 == 0)
    arg2[1] = *arg2
    result = sub_5de8c0(&var_4c)

if (cond:0 != 0 || result.b == 0)
label_59daa4:
    result.b = 0
else
    while (true)
        int32_t eax_6 = arg2[1]
        int32_t ecx_3
        
        if (&var_4c u< eax_6)
            ecx_3 = *arg2
        
        int32_t* ecx_6
        
        if (&var_4c u>= eax_6 || ecx_3 u> &var_4c)
            if (eax_6 == arg2[2])
                sub_404610(arg2, 1)
            
            ecx_6 = arg2[1]
            
            if (ecx_6 != 0)
                *ecx_6 = var_4c
        else
            if (eax_6 == arg2[2])
                sub_404610(arg2, 1)
            
            ecx_6 = arg2[1]
            
            if (ecx_6 != 0)
                *ecx_6 = *(*arg2 + ((&var_4c - ecx_3) s>> 2 << 2))
        arg2[1] += 4
        char* var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        int32_t var_8_3 = 1
        void var_50
        
        if (sub_5de3d0(&var_2c, &var_50) != 0
                && sub_407560(&var_2c, &(*{,,,},},==,==,,,=,=,")[0x13]) != 0)
            int32_t var_8_4 = 0xffffffff
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c.d, &var_18_1[1], 1)
            
            int32_t var_18_2 = 0xf
            int32_t var_1c_2 = 0
            var_2c = 0
            
            if (sub_5de8c0(&var_4c).b == 0)
                goto label_59daa4
            
            continue
        
        *arg1 = arg1[1]
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, &var_18_1[1], 1)
        
        result.b = 1
        break

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
