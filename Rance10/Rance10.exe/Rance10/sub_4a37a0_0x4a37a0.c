// 函数: sub_4a37a0
// 地址: 0x4a37a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void* var_1c
sub_4274a0(arg1 + 0x288, sub_49a380(arg1 + 0x26c, &var_1c))
int32_t var_8_2 = 0xffffffff
void* ecx_2 = var_1c

if (ecx_2 != 0)
    int32_t var_14
    sub_403160(ecx_2, (var_14 - ecx_2) s>> 2, 4)
    var_1c = nullptr
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0

sub_49bbe0(arg1 + 0x280)
int32_t result = sub_499a30(arg1 + 0x26c)
fsbase->NtTib.ExceptionList = ExceptionList
return result
