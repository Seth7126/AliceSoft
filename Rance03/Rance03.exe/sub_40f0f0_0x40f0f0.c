// 函数: sub_40f0f0
// 地址: 0x40f0f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b37dc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_d8
int32_t eax_2 = __security_cookie ^ &var_d8
int32_t __saved_edi
int32_t var_ec = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_d4 = 0
int32_t var_bc = 0xf
int32_t var_c0 = 0
char var_d0 = 0
int32_t var_4 = 0
int32_t eax_5 = *arg1

if (eax_5 u<= 3)
    void* const var_f0_1
    
    switch (eax_5)
        case 0
            var_f0_1 = &data_6da1a8
        case 1
            var_f0_1 = &data_6da1b0
        case 2
            var_f0_1 = "const"
        case 3
            var_f0_1 = &data_6da1c0
    
    sub_402670(&var_d0, var_f0_1)

char var_28
int32_t* edi = sub_40f400(arg1, &var_28, 1, 0)
var_4.b = 1
char var_58
char* eax_7 = sub_421060(&arg1[1], &var_58)
var_4.b = 2
char var_88
int32_t* eax_8 = sub_410930(eax_7, &var_d0, &var_88, U" ?")
var_4.b = 3
char var_a0
char* eax_9 = sub_410a20(eax_8, eax_8, &var_a0, eax_7)
var_4.b = 4
var_4.b = 5
char var_b8
char var_40
char* eax_12 = sub_410ad0(&arg1[9], sub_410a80(eax_9.b, eax_9, &var_b8, U"  ?"), &var_40, &arg1[9])
var_4.b = 6
char var_70
char* eax_13 = sub_410a80(eax_12.b, eax_12, &var_70, " = ")
var_4.b = 7
sub_410a20(eax_13, eax_13, arg2, edi)
int32_t var_5c

if (var_5c u>= 0x10)
    j__free(var_70.d)

int32_t var_5c_1 = 0xf
int32_t var_60 = 0
var_70 = 0
int32_t var_2c

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_2c_1 = 0xf
int32_t var_30 = 0
var_40 = 0
int32_t var_a4

if (var_a4 u>= 0x10)
    j__free(var_b8.d)

int32_t var_a4_1 = 0xf
int32_t var_a8 = 0
var_b8 = 0
int32_t var_8c

if (var_8c u>= 0x10)
    j__free(var_a0.d)

int32_t var_8c_1 = 0xf
int32_t var_90 = 0
var_a0 = 0
int32_t var_74

if (var_74 u>= 0x10)
    j__free(var_88.d)

int32_t var_74_1 = 0xf
int32_t var_78 = 0
var_88 = 0
int32_t var_44

if (var_44 u>= 0x10)
    j__free(var_58.d)

int32_t var_44_1 = 0xf
int32_t var_48 = 0
var_58 = 0
int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_1 = 0xf
int32_t var_18 = 0
var_28 = 0

if (var_bc u>= 0x10)
    j__free(var_d0.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_d8)
return arg2
