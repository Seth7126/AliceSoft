// 函数: sub_51b3d0
// 地址: 0x51b3d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7362f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_14 = arg1
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void var_48
void* esp_1 = &var_48
int32_t var_8_1 = 0
void* var_14_1 = &var_48
int32_t var_24 = 0
var_8_1.b = 1

if (arg2 != 0)
    int32_t eax_3 = *arg2
    void* var_4c = &var_48
    esp_1 = &var_4c
    int32_t var_24_1 = (*eax_3)(var_4c)

var_8_1.b = 0
int32_t result = sub_4f4ea0(arg1 + 0x30)
void* esp_2 = esp_1 + 0x28
int32_t var_8_2 = 2

if (arg2 != 0)
    int32_t edx_1 = *arg2
    void arg_4
    *(esp_2 - 4) = arg2 != &arg_4
    result = (*(edx_1 + 0x10))()

fsbase->NtTib.ExceptionList = ExceptionList
*esp_2
*(esp_2 + 4)
*(esp_2 + 8)
return result
