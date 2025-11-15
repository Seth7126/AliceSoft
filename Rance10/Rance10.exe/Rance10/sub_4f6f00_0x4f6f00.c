// 函数: sub_4f6f00
// 地址: 0x4f6f00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736518
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_7fcba4
struct fileimage::CFileImageMaker::VTable* const var_24 = &fileimage::CFileImageMaker::`vftable'
void* result_1 = nullptr
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_8_1 = 0
sub_6ca100(&var_24, 0x28)
int32_t ebx

if (sub_51b5a0(esi + 0xf4, arg1, &var_24) != 0)
    ebx.b = sub_4f5e60(&result_1, arg2)
else
    ebx.b = 0

void* result = result_1
var_24 = &fileimage::CFileImageMaker::`vftable'

if (result != 0)
    sub_403160(result, var_18 - result, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
