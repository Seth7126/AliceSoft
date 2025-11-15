// 函数: sub_4a4d40
// 地址: 0x4a4d40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731400
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageMaker::VTable* const var_40 = &fileimage::CFileImageMaker::`vftable'
void* var_3c = nullptr
int32_t var_38 = 0
int32_t var_34 = 0
int32_t var_8_1 = 0
int32_t var_18 = 0xf
void* var_1c = nullptr
char var_2c = 0
sub_403490(&var_2c, "SST", 3)
var_8_1.b = 1
char* esi = &var_2c
char* edx = &var_2c

if (var_18 u>= 0x10)
    esi = var_2c.d

if (var_18 u>= 0x10)
    edx = var_2c.d

int32_t var_58 = 0.d
sub_6ca200(&var_3c, nullptr, edx, var_1c + esi)
char var_2d = 0
sub_4263a0(&var_3c, &var_2d)
var_8_1.b = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

sub_6ca100(&var_40, 0)
sub_6ca100(&var_40, arg1)
char eax_7 = sub_563b40(&data_7fcca4, &var_3c)
void* edx_2 = var_3c
int32_t ebx
ebx.b = eax_7 != 0

if (edx_2 != 0)
    sub_403160(edx_2, var_34 - edx_2, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return ebx.b
