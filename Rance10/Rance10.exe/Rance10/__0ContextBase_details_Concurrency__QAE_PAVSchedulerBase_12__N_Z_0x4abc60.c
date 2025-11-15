// 函数: ??0ContextBase@details@Concurrency@@QAE@PAVSchedulerBase@12@_N@Z
// 地址: 0x4abc60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7318b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_24 = nullptr
int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_8_1 = 0
int32_t* result
int32_t ecx_1
result, ecx_1 = sub_4ac2b0(arg1 + 4, &var_24)
int32_t* esi = var_24

if (esi != 0)
    int32_t var_14
    int32_t var_30_1 = var_14
    int32_t var_34_1 = ecx_1
    sub_4ac600(esi, var_20)
    result = sub_403160(esi, (var_1c - esi) s/ 0xc, 0xc)

fsbase->NtTib.ExceptionList = ExceptionList
return result
