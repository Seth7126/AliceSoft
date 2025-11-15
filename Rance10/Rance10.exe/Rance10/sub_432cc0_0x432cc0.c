// 函数: sub_432cc0
// 地址: 0x432cc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a607
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_7fcb44

if (ecx != 0)
    int32_t* var_24_1 = ecx
    sub_432d80(ecx)
    data_7fcb44 = 0

int32_t* eax_3 = sub_6e810c(0x28)
int32_t* var_14 = eax_3
int32_t var_8_1 = 0
int32_t* var_18 = eax_3
*eax_3 = 0
eax_3[1] = 0
int32_t* eax_4
int32_t ecx_1
eax_4, ecx_1 = sub_433c20(nullptr, nullptr)
*eax_3 = eax_4
int32_t var_24_2 = ecx_1
var_8_1.b = 1
sub_433aa0(eax_3)
eax_3[2] = 0x3e8
int32_t** result
result.b = 1
eax_3[3].b = 1
eax_3[9] = 0xf
eax_3[8] = 0
eax_3[4].b = 0
data_7fcb44 = eax_3
fsbase->NtTib.ExceptionList = ExceptionList
return result
