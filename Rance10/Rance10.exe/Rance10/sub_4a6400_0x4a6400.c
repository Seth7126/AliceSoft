// 函数: sub_4a6400
// 地址: 0x4a6400
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7314f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageMaker::VTable* const var_58 = &fileimage::CFileImageMaker::`vftable'
void* result_1 = nullptr
char* var_50 = nullptr
int32_t var_4c = 0
int32_t var_8_1 = 0
int32_t var_18 = 0xf
void* var_1c = nullptr
char var_2c = 0
sub_403490(&var_2c, "AWS", 3)
var_8_1.b = 1
char* esi = &var_2c
char* edx = &var_2c

if (var_18 u>= 0x10)
    esi = var_2c.d

if (var_18 u>= 0x10)
    edx = var_2c.d

char var_5c = 0
int32_t var_70 = var_5c.d
sub_6ca200(&result_1, var_50, edx, var_1c + esi)
bool var_45 = false
sub_4263a0(&result_1, &var_45)
var_8_1.b = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

sub_6ca100(&var_58, 5)
int32_t eax_7
eax_7.b = *(arg1 + 8) != 0
sub_6ca100(&var_58, eax_7)
sub_6ca100(&var_58, *(arg1 + 0xc))
int32_t eax_8
eax_8.b = *(arg1 + 0x10) != 0
sub_6ca100(&var_58, eax_8)
int32_t eax_9
eax_9.b = *(arg1 + 0x11) != 0
sub_6ca100(&var_58, eax_9)
int32_t eax_10
eax_10.b = *(arg1 + 0x12) != 0
sub_6ca100(&var_58, eax_10)
var_45 = *(arg1 + 0x13) != 0
sub_4263a0(&result_1, &var_45)
var_45 = *(arg1 + 0x14) != 0
sub_4263a0(&result_1, &var_45)
int32_t eax_13
eax_13.b = *(arg1 + 0x15) != 0
sub_6ca100(&var_58, eax_13)
sub_6ca100(&var_58, *(arg1 + 0x18))
sub_6ca100(&var_58, *(arg1 + 0x1c))
sub_6ca100(&var_58, *(arg1 + 0x20))
sub_6ca100(&var_58, *(arg1 + 0x24))
var_5c.d = *(arg1 + 0x28)
sub_6ca100(&var_58, var_5c.d)
void* esi_1 = arg1 + 0x2c
int32_t ebx

if ((*(**(arg1 + 4) + 8))(esi_1, &result_1) != 0)
    ebx.b = 1
else
    if (*(esi_1 + 0x14) u>= 0x10)
        esi_1 = *esi_1
    
    var_5c.d = esi_1
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x7614d0, 0x2b)
    var_8_1.b = 2
    var_8_1.b = 3
    char var_44
    sub_6c52e0(sub_409240(&var_5c, &var_2c, &var_44, &var_5c))
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    ebx.b = 0

void* result = result_1
var_58 = &fileimage::CFileImageMaker::`vftable'

if (result != 0)
    sub_403160(result, var_4c - result, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
