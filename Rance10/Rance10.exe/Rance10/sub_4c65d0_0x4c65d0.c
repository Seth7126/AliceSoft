// 函数: sub_4c65d0
// 地址: 0x4c65d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7335a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *arg1

if (esi != 0)
    int32_t ecx_1 = esi[1]
    esi[1] -= 1
    (**esi)(ecx_1 - 1)
    *arg1 = 0
    arg1[5].b = 1

void** esi_1 = arg2 + 0xac
int32_t* var_5c
sub_4c59c0(&var_5c, esi_1)
int32_t var_8_1 = 0
int32_t** var_78_4 = &var_5c
int32_t* result

if (sub_4c5910(esi_1) == 0)
    result = sub_54d7d0(arg1, var_78_4)
else
    result = sub_54d950(arg1, var_78_4)

void* ebx

if (result.b != 0)
    ebx.b = 1
else
    if (esi_1[5] u>= 0x10)
        esi_1 = *esi_1
    
    void** var_60 = esi_1
    int32_t* var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, 0x7628e4, 0x3d)
    var_8_1.b = 1
    var_8_1.b = 2
    char var_44
    sub_45aae0(sub_409240(&var_60, &var_2c, &var_44, &var_60))
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    ebx.b = 0

int32_t var_48

if (var_48 u>= 0x10)
    sub_403160(var_5c, var_48 + 1, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
