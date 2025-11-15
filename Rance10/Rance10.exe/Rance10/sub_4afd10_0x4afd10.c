// 函数: sub_4afd10
// 地址: 0x4afd10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731db1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg1
int32_t var_8_1 = 0
int32_t var_14 = 0
int32_t* i_1
sub_4af750(&i_1, arg2)
int32_t var_8_2 = 1
int32_t arg_4 = arg_4
int32_t var_24

for (int32_t* i = i_1; i != var_24; i = &i[1])
    if (*i == arg2)
        if (i != var_24)
            int32_t* var_3c_1 = &arg_4
            void* var_1c
            sub_404420(&i_1, &var_1c, &i[1], &arg_4)
        
        break

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
int32_t var_14_1 = 1
sub_4b0b70(arg1, &i_1)
int32_t* i_2 = i_1
int32_t var_20

if (i_2 != 0)
    sub_403160(i_2, (var_20 - i_2) s>> 2, 4)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
