// 函数: sub_4f6bf0
// 地址: 0x4f6bf0
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
void* var_20 = nullptr
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_8_1 = 0
sub_6ca100(&var_24, 0x28)
int32_t ebx

if (sub_4f5370(esi + 0x124, &var_24, sub_4f19d0) == 0)
    ebx.b = 0
else if (sub_5035b0(&var_24, esi + 0x100) == 0)
    ebx.b = 0
else if (sub_5035b0(&var_24, esi + 0x10c) == 0)
    ebx.b = 0
else if (sub_515cf0(esi + 0x118, &var_24) == 0)
    ebx.b = 0
else
    ebx.b = sub_4f5e60(&var_20, arg1)

void* ecx_3 = var_20
var_24 = &fileimage::CFileImageMaker::`vftable'

if (ecx_3 != 0)
    sub_403160(ecx_3, var_18 - ecx_3, 1)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
