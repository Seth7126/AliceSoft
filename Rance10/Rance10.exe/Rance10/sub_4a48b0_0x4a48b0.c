// 函数: sub_4a48b0
// 地址: 0x4a48b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731370
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageMaker::VTable* const var_44 = &fileimage::CFileImageMaker::`vftable'
void* var_40 = nullptr
char* var_3c = nullptr
int32_t var_38 = 0
int32_t var_8_1 = 0
int32_t var_18 = 0xf
void* var_1c = nullptr
char var_2c = 0
sub_403490(&var_2c, "SSF", 3)
var_8_1.b = 1
char* esi = &var_2c
char* edx = &var_2c

if (var_18 u>= 0x10)
    esi = var_2c.d

if (var_18 u>= 0x10)
    edx = var_2c.d

int32_t var_58 = 0.d
sub_6ca200(&var_40, nullptr, edx, var_1c + esi)
char var_2d = 0
sub_4263a0(&var_40, &var_2d)
var_8_1.b = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

sub_6ca100(&var_44, 0)
int32_t eax_7 = *(arg1 + 0x18)
void* ecx_4 = arg1 + 4
int32_t esi_1 = *(ecx_4 + 0x10)
void* edx_1

if (eax_7 u< 0x10)
    edx_1 = ecx_4
else
    edx_1 = *ecx_4

if (eax_7 u>= 0x10)
    ecx_4 = *ecx_4

int32_t var_58_2 = 0.d
sub_6ca200(&var_40, var_3c, ecx_4, edx_1 + esi_1)
var_2d = 0
sub_4263a0(&var_40, &var_2d)
char eax_9 = sub_563b40(arg1 + 0x1c, &var_40)
void* edx_3 = var_40
int32_t ebx
ebx.b = eax_9 != 0

if (edx_3 != 0)
    sub_403160(edx_3, var_38 - edx_3, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return ebx.b
