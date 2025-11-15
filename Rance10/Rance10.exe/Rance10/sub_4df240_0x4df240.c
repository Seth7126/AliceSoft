// 函数: sub_4df240
// 地址: 0x4df240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734b18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = *(arg1 + 0x68)

if (ecx == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

void* var_1c = nullptr
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_8_1 = 0
sub_4dad80(ecx, &var_1c, arg1 + 0x70)
int32_t var_8_2 = 0xffffffff
void* ecx_3 = var_1c

if (ecx_3 != 0)
    sub_403160(ecx_3, (var_14 - ecx_3) s>> 2, 4)
    var_1c = nullptr
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0

int32_t* eax_8 = sub_4da7a0(*(arg1 + 0x68), arg2, arg3, arg4)
fsbase->NtTib.ExceptionList = ExceptionList
return eax_8
