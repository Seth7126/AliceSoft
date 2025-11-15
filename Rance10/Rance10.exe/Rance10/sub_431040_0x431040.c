// 函数: sub_431040
// 地址: 0x431040
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a45b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_a4 = &arg1[8]
int32_t* var_a8 = arg1
sub_417d50(arg1[8], arg1[9])
arg1[9] = arg1[8]
bool cond:0 = *arg2 != 0
int32_t var_60 = 0xf
int32_t var_64 = 0
char var_74 = 0
void* ecx_1

if (cond:0)
    char* ecx_2 = arg2
    int32_t eax_3
    
    do
        eax_3.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_3.b != 0)
    ecx_1 = ecx_2 - &ecx_2[1]
else
    ecx_1 = nullptr

sub_403490(&var_74, arg2, ecx_1)
int32_t var_8_1 = 0
int32_t esi_1 = 0
int32_t eax_4 = *arg1
char var_5c
int32_t var_48
char var_2c
int32_t var_18

if (var_64 != 0)
    int32_t eax_12 = (*(eax_4 + 0x14))(eax_2)
    
    if (eax_12 s> 0)
        do
            sub_42f9e0(arg1, &var_5c, esi_1)
            var_8_1.b = 3
            sub_430ec0(&var_2c)
            var_8_1.b = 4
            char var_44
            sub_430ec0(&var_44)
            var_8_1.b = 5
            int32_t var_34
            int32_t var_30
            int32_t var_1c
            
            if (var_1c u>= var_34)
                char* eax_13 = &var_44
                int32_t var_a4_5 = var_34
                
                if (var_30 u>= 0x10)
                    eax_13 = var_44.d
                
                if (sub_42cb30(&var_2c, eax_13, var_34) != 0xffffffff)
                    var_8_1.b = 6
                    void* var_8c
                    sub_431bd0(&arg1[8], sub_430d00(&var_8c, &var_5c))
                    int32_t var_78
                    
                    if (var_78 u>= 0x10)
                        sub_403160(var_8c, var_78 + 1, 1)
            
            if (var_30 u>= 0x10)
                sub_403160(var_44.d, var_30 + 1, 1)
            
            var_44 = 0
            var_34 = 0
            var_30 = 0xf
            
            if (var_18 u>= 0x10)
                sub_403160(var_2c.d, var_18 + 1, 1)
            
            var_8_1.b = 0
            var_2c = 0
            var_1c = 0
            var_18 = 0xf
            
            if (var_48 u>= 0x10)
                sub_403160(var_5c.d, var_48 + 1, 1)
            
            esi_1 += 1
        while (esi_1 s< eax_12)
else
    int32_t eax_5 = (*(eax_4 + 0x14))(eax_2)
    
    if (eax_5 s> 0)
        do
            var_8_1.b = 1
            var_8_1.b = 2
            sub_431bd0(&arg1[8], sub_430d00(&var_5c, sub_42f9e0(arg1, &var_2c, esi_1)))
            
            if (var_48 u>= 0x10)
                sub_403160(var_5c.d, var_48 + 1, 1)
            
            var_8_1.b = 0
            var_48 = 0xf
            int32_t var_4c_1 = 0
            var_5c = 0
            
            if (var_18 u>= 0x10)
                sub_403160(var_2c.d, var_18 + 1, 1)
            
            esi_1 += 1
        while (esi_1 s< eax_5)
int32_t eax_25
int32_t edx_4
edx_4:eax_25 = muls.dp.d(0x2aaaaaab, arg1[9] - arg1[8])
int32_t edx_5 = edx_4 s>> 2

if (var_60 u>= 0x10)
    sub_403160(var_74.d, var_60 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return (edx_5 u>> 0x1f) + edx_5
