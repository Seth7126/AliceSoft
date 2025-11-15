// 函数: sub_543660
// 地址: 0x543660
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7290a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_1c = nullptr
int32_t var_18 = 0
int32_t var_8_1 = 0
void* arg_4
sub_404370(&var_1c, &arg_4)
void* arg_8
sub_404370(&var_1c, &arg_8)
void* arg_c
sub_404370(&var_1c, &arg_c)
void* arg_10
sub_404370(&var_1c, &arg_10)
void* arg_14
sub_404370(&var_1c, &arg_14)
void* arg_18
sub_404370(&var_1c, &arg_18)
void* arg_1c
sub_404370(&var_1c, &arg_1c)
void* arg_20
sub_404370(&var_1c, &arg_20)
void* arg_24
sub_404370(&var_1c, &arg_24)
void* arg_28
sub_404370(&var_1c, &arg_28)
void* arg_2c
sub_404370(&var_1c, &arg_2c)
void* arg_30
sub_404370(&var_1c, &arg_30)
void* result = sub_4f4e40(data_7fcba4 + 0x124, arg3)
void* edx = var_1c
int32_t* ebx

if (result == 0)
    ebx.b = 0
else if (((var_18 - edx) & 0xfffffffc) == 0x30)
    void* edi_1 = *(result + 0x44)
    sub_555e00(edi_1, 0x16, arg4)
    sub_5533e0(*(edi_1 + (arg4 << 2) + 0x7c), arg2, &var_1c)
    edx = var_1c
    ebx.b = 1
else
    ebx.b = 0

if (edx != 0)
    sub_403160(edx, (0 - edx) s>> 2, 4)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
