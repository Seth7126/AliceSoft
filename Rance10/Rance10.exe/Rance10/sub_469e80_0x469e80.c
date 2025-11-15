// 函数: sub_469e80
// 地址: 0x469e80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ce68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_7c = arg1
int32_t var_80 = 0
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
int32_t var_8_1 = 0
int32_t eax_5 = (*(*arg2 + 8))(eax_2)
int32_t esi = 0
char var_2c
int32_t var_18

if (eax_5 s> 0)
    do
        int32_t* edx
        
        if (esi s>= 0)
            if ((*(*arg2 + 8))() s> esi)
                edx = *(arg2[5] + (esi << 2))
            else
                edx = nullptr
        else
            edx = nullptr
        
        void* var_74
        int32_t* eax_9 = sub_4699e0(&var_74, edx)
        var_8_1.b = 1
        char* eax_10 = sub_41a330(eax_9.b, U"\t", &var_2c, eax_9)
        var_8_1.b = 2
        var_8_1.b = 3
        char var_5c[0x10]
        sub_4055a0(&var_44, sub_4176f0(eax_10.b, eax_10, &var_5c, ";\r\n"), 0, 0xffffffff)
        int32_t var_48
        
        if (var_48 u>= 0x10)
            sub_403160(var_5c[0].d, var_48 + 1, 1)
        
        var_48 = 0xf
        int32_t var_4c_1 = 0
        var_5c[0] = 0
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        var_8_1.b = 0
        var_18 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        int32_t var_60
        
        if (var_60 u>= 0x10)
            sub_403160(var_74, var_60 + 1, 1)
        
        esi += 1
    while (esi s< eax_5)

int32_t* eax_19 = sub_419600(&var_44, "{\r\n", &var_2c, &var_44)
var_8_1.b = 4
sub_4176f0(eax_19.b, eax_19, arg1, U"}""")

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_2 = 0
var_2c = 0

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
