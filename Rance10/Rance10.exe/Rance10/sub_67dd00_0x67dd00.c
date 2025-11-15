// 函数: sub_67dd00
// 地址: 0x67dd00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74692b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct crayfish::CTextView::VTable** var_14 = arg1
*arg1 = &crayfish::CTextView::`vftable'
sub_6ccee0(&arg1[1])
int32_t var_8_1 = 0
arg1[0xe] = &win32only::CFont::`vftable'
arg1[0xf] = 0
arg1[0x10] = 0x10
arg1[0x16] = 0xf
arg1[0x15] = 0
void* var_18 = &arg1[0xe]
arg1[0x11].b = 0
sub_403490(&arg1[0x11], 0x79438c, 0xd)
arg1[0x17] = 0x190
arg1[0x18].w = 0
arg1[0x19] = 4
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
