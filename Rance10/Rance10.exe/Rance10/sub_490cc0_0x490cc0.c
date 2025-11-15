// 函数: sub_490cc0
// 地址: 0x490cc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f796
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = &data_7fd56c
data_7fd56c = *arg1
data_7fd570 = 0
data_7fd574 = 0
data_7fd570 = sub_491100(nullptr, nullptr)
int32_t var_8_1 = 0
data_7fd578 = 0
data_7fd57c = 0
data_7fd580 = 0
var_8_1.b = 1
int32_t var_1c = 8
data_7fd56c = 0x3f800000
sub_490d70(&data_7fd56c)
fsbase->NtTib.ExceptionList = ExceptionList
return &data_7fd56c
