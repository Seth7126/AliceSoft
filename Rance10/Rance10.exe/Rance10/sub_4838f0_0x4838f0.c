// 函数: sub_4838f0
// 地址: 0x4838f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72eb00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_50 = 0xffffffff
void* var_48
char* eax_3 = sub_405130(&var_48, arg2)

if (*(eax_3 + 0x14) u>= 0x10)
    eax_3 = *eax_3

int32_t* var_74 = &var_50
bool cond:0 = sub_6ca310(eax_3, 0x7942e0) == 1
int32_t var_34

if (var_34 u>= 0x10)
    sub_403160(var_48, var_34 + 1, 1)

int32_t eax_7 = var_50

if (cond:0 == 0)
    eax_7 = arg3

var_50 = eax_7
void** i_3
sub_67f720(&i_3)
int32_t var_8_1 = 0
int32_t var_38
struct filesystem::CFilePath::VTable* const var_30
char var_2c

for (void** i = i_3; i != var_38; i = &i[6])
    var_30 = &filesystem::CFilePath::`vftable'
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    var_8_1.b = 1
    sub_67eaf0(&var_30)
    sub_4055a0(&var_2c, arg2, 0, 0xffffffff)
    sub_67eaf0(&var_30)
    sub_4055a0(&var_2c, i, 0, 0xffffffff)
    sub_483b00(arg1, &var_2c, var_50)
    var_30 = &filesystem::CFilePath::`vftable'
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)

int32_t var_8_2 = 0xffffffff
sub_417070(&i_3)
void** i_2
sub_67fac0(&i_2)
int32_t var_8_3 = 2
int32_t var_5c

for (void** i_1 = i_2; i_1 != var_5c; i_1 = &i_1[6])
    var_30 = &filesystem::CFilePath::`vftable'
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    var_8_3.b = 3
    sub_67eaf0(&var_30)
    sub_4055a0(&var_2c, arg2, 0, 0xffffffff)
    sub_67eaf0(&var_30)
    sub_4055a0(&var_2c, i_1, 0, 0xffffffff)
    sub_4838f0(&var_2c, var_50)
    var_8_3.b = 2
    var_30 = &filesystem::CFilePath::`vftable'
    
    if (var_18_2 u>= 0x10)
        sub_403160(var_2c.d, var_18_2 + 1, 1)

int32_t result = sub_417070(&i_2)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
