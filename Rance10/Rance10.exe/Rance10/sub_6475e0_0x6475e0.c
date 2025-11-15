// 函数: sub_6475e0
// 地址: 0x6475e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7465b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_18 = eax_2
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_64 = 0.d
int128_t var_40
__builtin_memcpy(&var_40, 
    "\x01\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00\x00\x06\x00\x00\x00\x"
"07\x00\x00\x00\x08\x00\x00\x00\x09\x00\x00\x00\x0a\x00\x00\x00", 
    0x28)
void* var_4c = nullptr
int32_t var_48 = 0
int32_t var_44 = 0
sub_452440(&var_4c, &var_40, &var_18)
int32_t var_8_1 = 0
char eax_8 = sub_649fd0(arg1 + 0x2c, arg2, &var_4c, (*(arg1 + 0x90) - *(arg1 + 0x8c)) s/ 0x78 * 3)
void* edx_3 = var_4c
int32_t ebx
ebx.b = eax_8 != 0

if (edx_3 != 0)
    sub_403160(edx_3, (var_44 - edx_3) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(var_18 ^ &__saved_ebp)
return ebx.b
