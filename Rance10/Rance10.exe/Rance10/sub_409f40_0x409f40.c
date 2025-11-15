// 函数: sub_409f40
// 地址: 0x409f40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72749a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpanalysis::CBreakPoint::VTable** eax_3 = sub_6e810c(0x84)
struct dpanalysis::CBreakPoint::VTable** var_14 = eax_3
int32_t var_8_1 = 0
struct dpanalysis::CBreakPoint::VTable** arg_10 = sub_406dc0(eax_3, arg2, arg3, arg4, arg_10)
int32_t var_8_2 = 1
sub_40a1a0(arg1 + 4, &arg_10)
int32_t var_8_3 = 0xffffffff
struct dpanalysis::CBreakPoint::VTable** ecx_2 = arg_10

if (ecx_2 != 0)
    (*ecx_2)->vFunc_0(1)

void* ecx_3 = *(*(arg1 + 8) - 4)
void* eax_6
eax_6.b = arg5
*(ecx_3 + 0x28) = eax_6.b
sub_407000(ecx_3)
sub_407160(*(*(arg1 + 8) - 4), arg6)
void* ecx_6 = *(*(arg1 + 8) - 4)
*(ecx_6 + 0x2c) = arg7
int32_t result = sub_407000(ecx_6)
fsbase->NtTib.ExceptionList = ExceptionList
return result
