// 函数: sub_5baeb0
// 地址: 0x5baeb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f8c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t xmm0 = data_79a7c0
struct common::CSize::VTable* const var_34 = &common::CSize::`vftable'
int32_t var_20 = 0
int32_t var_8_1 = 0
int32_t* var_1c = nullptr
int32_t var_18 = 0
var_1c = sub_4f2cd0()
var_8_1.b = 1
sub_5baa90(arg1, &var_34, &var_1c)
int32_t* arg_c
int32_t ebx

if (sub_5bafc0(arg1, &var_34, arg2, arg3, arg_c) != 0)
    sub_5bac20(arg1, &var_34)
    sub_5bade0(arg1, &var_1c)
    ebx.b = 1
else
    ebx.b = 0

int32_t** eax_5 = var_1c
sub_4f27c0(&var_1c, &arg_c, *eax_5, eax_5)
int32_t result
int32_t ecx_5
result, ecx_5 = sub_403160(var_1c, 1, 0x14)
int32_t* esi_1 = xmm0:8.d

if (esi_1 != 0)
    int32_t* var_44_5 = arg_c
    int32_t var_48_3 = ecx_5
    sub_56daf0(esi_1, xmm0:0xc.d)
    sub_403160(esi_1, (var_20 - esi_1) s>> 2, 4)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
