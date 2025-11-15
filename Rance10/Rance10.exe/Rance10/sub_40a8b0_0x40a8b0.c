// 函数: sub_40a8b0
// 地址: 0x40a8b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727510
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageMaker::VTable* const var_50 = &fileimage::CFileImageMaker::`vftable'
void* result_1 = nullptr
int32_t var_48 = 0
int32_t var_44 = 0
int32_t var_8_1 = 0
void* edi = *(arg1 + 0x10)
sub_6ca100(&var_50, (*(edi + 0x34) - *(edi + 0x30)) s>> 2)
int32_t i = 0

if ((*(edi + 0x34) - *(edi + 0x30)) s>> 2 s> 0)
    do
        void* esi_1 = *(*(edi + 0x30) + (i << 2))
        sub_6ca100(&var_50, *(esi_1 + 4))
        sub_6ca100(&var_50, *(esi_1 + 0x20))
        bool var_3d = *(esi_1 + 0x28) != 0
        sub_4263a0(&result_1, &var_3d)
        i += 1
    while (i s< (*(edi + 0x34) - *(edi + 0x30)) s>> 2)

struct win32only::CFileMapping::VTable* const var_3c = &win32only::CFileMapping::`vftable'
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_38 = 0
int32_t var_34 = 0
int32_t var_30 = 0
var_8_1.b = 1

if (sub_40cb00(&var_3c, &var_50) != 0)
    SendMessageA(*(arg1 + 8), 0x903, 0, 0)
    i.b = 1
else
    i.b = 0

var_3c = &win32only::CFileMapping::`vftable'
sub_6cdf10(&var_3c)

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

void* result = result_1
int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
char var_2c_1 = 0

if (result != 0)
    sub_403160(result, var_44 - result, 1)

result.b = i.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
