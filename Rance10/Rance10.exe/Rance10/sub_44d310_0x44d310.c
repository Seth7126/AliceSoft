// 函数: sub_44d310
// 地址: 0x44d310
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_a4 = 0xffffffff
int32_t (* var_a8)(void* arg1) = sub_72ae73
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_a0
int32_t eax_2 = __security_cookie ^ &var_a0
int32_t var_c4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0xf
int32_t var_78 = 0
char var_88 = 0
sub_403590(&var_88, arg1, 0, 0xffffffff)
int32_t var_a4_1 = 0
var_a4_1.b = 1
void* var_38
int32_t* var_20
sub_405070(&var_20, sub_405130(&var_38, &var_88))
int32_t var_24

if (var_24 u>= 0x10)
    sub_403160(var_38, var_24 + 1, 1)

struct filesystem::CFilePath::VTable* const var_54 = &filesystem::CFilePath::`vftable'
int32_t var_3c = 0xf
int32_t var_40 = 0
char var_50 = 0
var_a4_1.b = 4
sub_67eaf0(&var_54)
sub_4055a0(&var_50, &var_88, 0, 0xffffffff)
struct filesystem::CFilePath::VTable* const var_70 = &filesystem::CFilePath::`vftable'
int32_t var_58 = 0xf
int32_t var_5c = 0
char var_6c = 0
var_a4_1.b = 5
char* eax_6 = sub_67e9f0(&var_54, &var_38)
var_a4_1.b = 6
sub_67eaf0(&var_70)
sub_4055a0(&var_6c, eax_6, 0, 0xffffffff)
var_a4_1.b = 5

if (var_24 u>= 0x10)
    sub_403160(var_38, var_24 + 1, 1)

void** edi = *arg2
void** esi_1 = sub_432330(arg2, &var_20)
char eax_11

if (esi_1 != edi)
    eax_11 = sub_412ca0(&var_20, &esi_1[4])

if (esi_1 == edi || eax_11 != 0)
    esi_1 = edi

int32_t* eax_12 = &var_20
int32_t var_c

if (esi_1 == edi)
    void** var_b4
    sub_44e630(arg2, &var_b4, &var_20)
    
    if (&var_b4[0xa] != &var_88)
        sub_403590(&var_b4[0xa], &var_88, 0, 0xffffffff)
else
    if (var_c u>= 0x10)
        eax_12 = var_20
    
    int32_t* var_b0 = eax_12
    int32_t var_8c_1 = 0xf
    int32_t var_90_1 = 0
    var_a0 = 0
    sub_403490(&var_a0, 0x75dd04, 0x33)
    var_a4_1.b = 7
    var_a4_1.b = 8
    sub_45aae0(sub_409240(&var_b0, &var_a0, &var_38, &var_b0))
    
    if (var_24 u>= 0x10)
        sub_403160(var_38, var_24 + 1, 1)
    
    int32_t var_24_1 = 0xf
    int32_t var_28_1 = 0
    var_38.b = 0
    
    if (var_8c_1 u>= 0x10)
        sub_403160(var_a0.d, var_8c_1 + 1, 1)

var_70 = &filesystem::CFilePath::`vftable'

if (var_58 u>= 0x10)
    sub_403160(var_6c.d, var_58 + 1, 1)

int32_t var_58_1 = 0xf
int32_t var_5c_1 = 0
var_6c = 0
var_54 = &filesystem::CFilePath::`vftable'

if (var_3c u>= 0x10)
    sub_403160(var_50.d, var_3c + 1, 1)

int32_t var_3c_1 = 0xf
int32_t var_40_1 = 0
var_50 = 0

if (var_c u>= 0x10)
    sub_403160(var_20, var_c + 1, 1)

int32_t result = result_1
int32_t var_c_1 = 0xf
int32_t var_10 = 0
var_20.b = 0

if (result u>= 0x10)
    result = sub_403160(var_88.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_a0)
return result
