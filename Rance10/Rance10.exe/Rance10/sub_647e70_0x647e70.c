// 函数: sub_647e70
// 地址: 0x647e70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746628
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_60 = 0.d
int128_t var_3c
__builtin_memcpy(&var_3c, 
    "\x01\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00\x00\x06\x00\x00\x00\x"
"07\x00\x00\x00\x08\x00\x00\x00\x09\x00\x00\x00\x0a\x00\x00\x00", 
    0x28)
void* var_48 = nullptr
int32_t var_44 = 0
int32_t var_40 = 0
sub_452440(&var_48, &var_3c, &var_14)
int32_t var_8_1 = 0
char eax_3 = sub_649fd0(arg1 + 0x2c, arg2, &var_48, 4)
void* edx = var_48
int32_t ebx
ebx.b = eax_3 != 0

if (edx != 0)
    sub_403160(edx, (var_40 - edx) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(var_14 ^ &__saved_ebp)
return ebx.b
