// 函数: sub_63f0d0
// 地址: 0x63f0d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746130
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageAnalyser::VTable* const var_38 =
    &fileimage::CFileImageAnalyser::`vftable'
char* ecx = *arg1
void* eax_6 = arg1[1]
int32_t var_8_1 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
var_8_1.b = 1
uint32_t* ebx

if (sub_61ed80(&var_38, &var_2c).b == 0)
    ebx.b = 0
else if (sub_407560(&var_2c, 0x76daf0).b == 0 || &ecx[4] u> eax_6
        || (((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)) != 0
        || &ecx[8] u> eax_6)
    ebx.b = 0
else
    uint32_t* var_34_1 = &ecx[8]
    
    if (sub_6c92b0(&var_38, arg2).b == 0 || *arg2 u< 4)
        ebx.b = 0
    else
        ebx.b = 1

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

uint32_t* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
