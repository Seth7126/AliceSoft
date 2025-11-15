// 函数: sub_4b0620
// 地址: 0x4b0620
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731e38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_80 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3
eax_3.b = arg1[3].b != 0
void** var_6c = arg2
int32_t var_68 = arg3
int32_t var_70 = eax_3
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x7619dc, 0x1f)
int32_t var_8_1 = 0
int32_t eax_4
eax_4.b = *(arg1 + 0xf) != 0
int32_t eax_5
eax_5.b = *(arg1 + 0xe) != 0
int32_t eax_6
eax_6.b = *(arg1 + 0xd) != 0
var_8_1.b = 1
char var_44
sub_4abfc0(&var_6c, sub_4b0f20(&var_70, &var_2c, &var_44, &var_70, eax_6, eax_5, eax_4))
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_8_2 = 0xffffffff
int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t eax_13
int32_t edx_1
edx_1:eax_13 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
int32_t edx_2 = edx_1 s>> 1
int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
int32_t var_64 = (edx_2 u>> 0x1f) + edx_2
var_2c = 0
sub_403490(&var_2c, 0x7619fc, 0xf)
int32_t var_8_3 = 2
var_8_3.b = 3
sub_4abfc0(&var_6c, sub_409350(&var_64, &var_2c, &var_44, &var_64))

if (var_30_1 u>= 0x10)
    sub_403160(var_44.d, var_30_1 + 1, 1)

int32_t var_8_4 = 0xffffffff
int32_t var_30_2 = 0xf
int32_t var_34_1 = 0
var_44 = 0

if (var_18_1 u>= 0x10)
    sub_403160(var_2c.d, var_18_1 + 1, 1)

bool cond:2 = var_64 s<= 0
int32_t result_1 = 0
int32_t result

if (not(cond:2))
    do
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        sub_403490(&var_2c, 0x761a38, 0xa)
        int32_t var_8_5 = 4
        var_8_5.b = 5
        sub_4abfc0(&var_6c, sub_409350(&result_1, &var_2c, &var_44, &result_1))
        
        if (var_30_2 u>= 0x10)
            sub_403160(var_44.d, var_30_2 + 1, 1)
        
        int32_t var_8_6 = 0xffffffff
        int32_t eax_26 = var_18_2
        var_30_2 = 0xf
        int32_t var_34_2 = 0
        var_44 = 0
        
        if (eax_26 u>= 0x10)
            eax_26 = sub_403160(var_2c.d, eax_26 + 1, 1)
        
        char var_5c
        int32_t* eax_28 = sub_4175e0(eax_26, arg2, &var_5c, "*\t")
        int32_t var_8_7 = 6
        sub_4af900(*arg1 + result_1 * 0xc, eax_28, arg3)
        int32_t var_8_8 = 0xffffffff
        int32_t var_48
        
        if (var_48 u>= 0x10)
            sub_403160(var_5c.d, var_48 + 1, 1)
        
        result = result_1 + 1
        var_48 = 0xf
        int32_t var_4c_1 = 0
        var_5c = 0
        result_1 = result
    while (result s< var_64)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
